#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>
#include <QFileDialog>
#include <QDir>
#include "cy.h"
#include <iostream>
#include <string>
#include <QFont>
#include <QFontComboBox>
#include <QByteArray>
#include <QImageReader>
#include <QTranslator>
#include "edge.h"


using namespace std;
int fsize=3;
QString  printS="*";
QString filename="";
int mark=0;


CY *newpic=new CY();
edge *edgeA=new edge();
string stra="";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{




    ui->setupUi(this);
//    QMenu *editMenu =ui->menuBar->addMenu(tr(" 编辑(&E)"));


//    QActionGroup *group =new QActionGroup(this);
//    QAction *action_L =group->addAction(tr("左对齐(&L)"));
//    action_L->setCheckable(true);

//    QAction *action_R =group->addAction(tr("右对齐(&R)"));
//    action_R->setCheckable(true);

//    QAction *action_C =group->addAction(tr("居中(&C)"));
//    action_C->setCheckable(true);

//    action_L->setChecked(true);

//    editMenu->addSeparator();
//    editMenu->addAction(action_L);
//    editMenu->addAction(action_R);
//    editMenu->addAction(action_C);

//    QToolButton *toolBtn=new QToolButton(this);
//    toolBtn->setText(tr("颜色"));
//    QMenu *colorMenu =new QMenu(this);
//    colorMenu->addAction(tr("红色"));
//    colorMenu->addAction(tr("绿色"));
//    toolBtn->setMenu(colorMenu);
//    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);
//    ui->mainToolBar->addWidget(toolBtn);
//    QSpinBox *spinBox=new QSpinBox(this);
//    ui->mainToolBar->addWidget(spinBox);

    ui->statusBar->showMessage(tr("欢迎使用多文档编辑器"),2000);
    QLabel * permanent=new QLabel(this);
    permanent-> setFrameStyle(QFrame::Box|QFrame::Sunken);
    permanent->setText("www.qter.org");
    ui->statusBar->addPermanentWidget(permanent);

    ui->picLabel->setVisible(false);







}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
void MainWindow::changedFont(const QFont& f)
{
    ui->mdiArea->setFont(f);
}
*/


void MainWindow::on_action_New_triggered()
{
    QTextEdit * edit=new QTextEdit(this);
    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
}

void MainWindow::on_action_Dock_triggered()
{
    ui->dockWidget->show();
}

void MainWindow::on_pushButton_clicked()
{
    QString  stempStr;
    if(mark==1)
    {
    newpic->transformation(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);


    edit->setText((newpic->output()).c_str());


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();

    QFont fm;
    fm.setPointSize(fsize);
    ui->lineEdit->setText(stempStr.setNum(fsize));
    ui->mdiArea->setFont(fm);
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }









}

void MainWindow::on_action_S_triggered()
{
    QString  stempStr;

    QString filename=QFileDialog::getOpenFileName(this,tr("openfile"),QDir::currentPath());
    if(!filename.isEmpty())
    {

    QImage image(filename);
    ui->picLabel->setPixmap(QPixmap::fromImage(image));
    mark=1;


    }






}

void MainWindow::on_action_Save_triggered(){
    if(mark==1){
    QString filename1 = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)")); //选择路径
    QImage image =ui->picLabel->pixmap()->toImage();
    image.save(filename1);

    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }

}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    //connect(fontComboBox,SIGNAL(currentFontChanged(QFont)),this,SLOT(changedFont(QFont)));
    QFont ft;
    ft.setPointSize(fsize);
    ft.setFamily(ui->fontComboBox->currentText());
    ui->mdiArea->setFont(ft);




}




void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    QFont ft;

    fsize=ui->lineEdit->text().toInt();
    if(fsize>0){
    ft.setPointSize(fsize);
    ui->mdiArea->setFont(ft);
    }
}

void MainWindow::on_lineEdit_editingFinished()
{
    QFont ft;

    fsize=ui->lineEdit->text().toInt();
    if(fsize>0){
    ft.setPointSize(fsize);
    ui->mdiArea->setFont(ft);
    }
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    QFont ft;

    fsize=ui->lineEdit->text().toInt();
    if(fsize>0){
    ft.setPointSize(fsize);
    ui->mdiArea->setFont(ft);
    }

}


void MainWindow::on_lineEdit_returnPressed()
{
    QFont ft;

    fsize=ui->lineEdit->text().toInt();
    if(fsize>0){
    ft.setPointSize(fsize);
    ui->mdiArea->setFont(ft);
    }
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    QFont ft;

    fsize=ui->lineEdit->text().toInt();
    if(fsize>0){
    ft.setPointSize(fsize);
    ui->mdiArea->setFont(ft);
    }
}



void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    printS=ui->lineEdit_2->text();

    if(!printS.isEmpty()){

        newpic->printstr(printS);
    }
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    printS=ui->lineEdit_2->text();

    if(!printS.isEmpty()){

        newpic->printstr(printS);
    }
}

void MainWindow::on_grayBtn_clicked()
{

    if(mark==1)
    {

    newpic->setGray(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();
    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);






    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }

}




void MainWindow::on_filteringBtn_clicked()
{
    if(mark==1){
    newpic->setFiltering(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();

    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }

}

void MainWindow::on_saveBtn_clicked()
{


    if(mark==1){
    QString filename1 = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)")); //选择路径
    QImage image =ui->picLabel->pixmap()->toImage();
    image.save(filename1);

    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }

}



void MainWindow::on_actionChinese_triggered()
{
    QTranslator translator;


       if(translator.load(":/res/resources/tr_zh.qm"))
        {
              qApp->installTranslator(&translator);
              ui->retranslateUi(this);
        }
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator translator;

       if(translator.load(":/res/resources/tr_en.qm"))
        {
              qApp->installTranslator(&translator);
              ui->retranslateUi(this);
        }
}

void MainWindow::on_brightnessBtn_clicked()
{
    if(mark==1){
    newpic->setBrightness(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();

    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }
}

void MainWindow::on_watermarkBtn_clicked()
{
    if(mark==1){
    newpic->setWatermark(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();

    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }
}

void MainWindow::on_sharpeningBtn_clicked()
{
    if(mark==1){
    newpic->setsharpening(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();

    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }
}

void MainWindow::on_edgeBtn_clicked()
{
    if(mark==1){
    newpic->setEdge(ui->picLabel);

    QTextEdit * edit=new QTextEdit(this);

    QUrl Uri ( QString ( "filename://%1" ).arg ( filename) );
    //QImage image = QImageReader(filename).read();

    QImage image=ui->picLabel->pixmap()->toImage();
    QTextDocument * textDocument = edit->document();
    textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant ( image ) );
    QTextCursor cursor = edit->textCursor();

    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);


    QMdiSubWindow * child=ui->mdiArea->addSubWindow(edit);


    child->setWindowTitle(tr("多文档窗口编辑器"));
    child->show();
    }
    else{
        QMessageBox::warning(this, tr("Waring"), tr("请检查图片是否正确载入"), QMessageBox::Yes);
    }
}



