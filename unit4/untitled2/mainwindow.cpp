#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RecNum(int num)
{
    QString input_num = ui->lineEdit->text();

    if(input_num == "0")
    {
        ui->lineEdit->setText(QString::number(num));          //去掉前导0,并添加num
    }
    else
    {
        if(input_num[0]=='A' || input_num[0] == 'T')           //上一次结果的第一个字符（An 或者An或者The）
        {
            ui->lineEdit->clear();

        }

        ui->lineEdit->insert(QString::number(num));          //在末尾插入数字num
    }

    ui->lineEdit->setFocus ();      //继续追加光标
}

//获取后缀表达式
int MainWindow::GetPostExp(QString exp_str,QString pos_exp[])
{

    int pos_exp_top = 0;

    QChar opes_temp[MAXSIZE];       //存放临时符号栈
    int opes_temp_top = 0;
    opes_temp[opes_temp_top++] = QChar('#');

    int length = exp_str.size();

    for(int i = 0;i<length;++i)
    {
        if(exp_str[i].isDigit())    //提取数字串
        {
            int beg = i;
            while(i<length)
            {
                if(exp_str[i].isDigit() || exp_str[i] == '.')
                    ++i;
                else
                    break;
            }
            pos_exp[pos_exp_top++] = exp_str.mid(beg,i-beg);

            i = i-1;

        }
        else       //提取运算符串
       {
            int pri_i = GetPriOfOpe(exp_str[i],1);      //入栈优先级

            while(opes_temp_top >= 0)
            {
                QChar ch_top = opes_temp[opes_temp_top-1];
                int pri_j = GetPriOfOpe(ch_top,0);      //出栈优先级

                if(pri_j >= pri_i)
                {
                     --opes_temp_top;        //栈递减

                    if(ch_top != '(')
                        pos_exp[pos_exp_top++] = QString(ch_top);       //入后缀表达式
                    else
                         break;      //右括号匹配到左括号，退出
                }
                else
                    break;
            }
            if(exp_str[i] != ')')
                opes_temp[opes_temp_top++] = exp_str[i];        //入暂时栈
       }

     }

    //将剩余的栈中元素装入后缀表达式
    for(int i = opes_temp_top-1;i>0;--i)
         pos_exp[pos_exp_top++] = QString(opes_temp[i]);
    return pos_exp_top;
}

//根据字符串计算数值
double MainWindow::CalFromStr(QString exp_str,bool &ok)
{
    QString pos_exp[MAXSIZE];
    int num = GetPostExp(exp_str,pos_exp);

    double nums[num];
    int nums_top = 0;
    ok = true;      //运算成功
    for(int i = 0;i<num;++i)
    {
        QString temp = pos_exp[i];

        if(temp[0].isDigit() == true)       //数字
        {
            nums[nums_top++] = temp.toDouble();
        }
        else
        {
            //出栈两个运算数
            double sec_num = nums[--nums_top];
            double fir_num = nums[--nums_top];
            double ans = 0;

            if(temp[0] == '+')
            {
                ans = fir_num+sec_num;
            }
            else if(temp[0] == '-')
            {
                  ans = fir_num- sec_num;
            }
            else if(temp[0] == '*')
              {
                 ans = fir_num*sec_num;
            }
            else
            {
                if(sec_num == 0)
                {
                     ok = false;
                     return -1;     //运算失败
                }
                else
                    ans = fir_num/sec_num;
            }

             nums[nums_top++] = ans;     //计算后结果入栈
        }
    }

    return nums[0];

}



//接收输入运算符信号需要进行的操作
void MainWindow::RecOpe(QChar ch)
{
    QString input_num0 = ui->lineEdit->text();      //获取输入的字符串

        //获取显示板上的字符串

    if(ori_exp.isEmpty() == false)      //提交字符串不为空时
    {
        if(input_num0.isEmpty() == true)       //输入数字为空
        {
            int length = ori_exp.size();

            if(ori_exp[length-1] != ')')       //不等于右括号才能，改变输入错误的运算符号
            {
                ori_exp.replace(length-1,1,QString(ch));
                ui->label_show_exp->setText(ori_exp);
            }

        }
        else
        {
            int length = ori_exp.size();

            if(ori_exp[length-1] != ')')       //不等于右括号才能加入运算符和数字
            {
                //将输入的数字和运算符提取出来，然后输出至显示板
                QRegExp rx;
                rx.setPattern("(\\.){0,1}0+$");
                bool ok;
                QString input_num = QString("%1").arg(input_num0.toDouble(&ok),0,'f',-1).replace(rx,"");
                QString input_inf = input_num+QString(ch);

            }

        }

        ui->lineEdit->clear();
       ui->lineEdit->setFocus ();       //取回焦点
    }       //已经提交（在显示板上显示的）的字符串为空
    else
    {
        if(input_num0.isEmpty() == false)
        {
            QRegExp rx;
            rx.setPattern("(\\.){0,1}0+$");

            bool ok;
            QString input_num = QString("%1").arg(input_num0.toDouble(&ok),0,'f',-1).replace(rx,"");
            QString input_inf = input_num+QString(ch);
                   }

        ui->lineEdit->clear();
       ui->lineEdit->setFocus ();
    }
}


void MainWindow::on_btn1_clicked()
{
     emit SendNum(1);
}
void MainWindow::on_btn2_clicked()
{
     emit SendNum(2);
}
void MainWindow::on_btn3_clicked()
{
    emit SendNum(3);
}
void MainWindow::on_btn4_clicked()
{
    emit SendNum(4);
}
void MainWindow::on_btn5_clicked()
{
    emit SendNum(5);
}
void MainWindow::on_btn6_clicked()
{
    emit SendNum(6);
}
void MainWindow::on_btn7_clicked()
{
    emit SendNum(7);
}
void MainWindow::on_btn8_clicked()
{
    emit SendNum(8);
}
void MainWindow::on_btn9_clicked()
{
    emit SendNum(9);
}
void MainWindow::on_btn0_clicked()
{
    emit SendNum(0);
}
void MainWindow::on_btnequal_clicked()
{
    emit SendOpe('=');
}


