#include "drawer.h"
#include<QToolBox>
#include<QGroupBox>
#include<QVBoxLayout>
Drawer::Drawer(QWidget*parent,Qt::WindowFlags f):QToolBox(parent,f)
{
    setWindowTitle(tr("My QQ"));
    QGroupBox *groupBox1=new QGroupBox();

    toolButton1_1=new QToolButton();
    toolButton1_1->setText(tr(" beibei "));
    toolButton1_1->setIcon(QPixmap(":/images/qqimg/bb.png"));
    toolButton1_1->setIconSize(QPixmap(":/images/qqimg/bb.png").size());
    toolButton1_1->setAutoRaise(TRUE);
    toolButton1_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_2=new QToolButton();
    toolButton1_2->setText(tr("jingjing"));
    toolButton1_2->setIcon(QPixmap(":/images/qqimg/jj.png"));
    toolButton1_2->setIconSize(QPixmap(":/images/qqimg/jj.png").size());
    toolButton1_2->setAutoRaise(TRUE);
    toolButton1_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_3=new QToolButton();
    toolButton1_3->setText(tr("huanhuan"));
    toolButton1_3->setIcon(QPixmap(":/images/qqimg/hh.png"));
    toolButton1_3->setIconSize(QPixmap(":/images/qqimg/hh.png").size());
    toolButton1_3->setAutoRaise(TRUE);
    toolButton1_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_4=new QToolButton();
    toolButton1_4->setText(tr("yingying"));
    toolButton1_4->setIcon(QPixmap(":/images/qqimg/yy.png"));
    toolButton1_4->setIconSize(QPixmap(":/images/qqimg/yy.png").size());
    toolButton1_4->setAutoRaise(TRUE);
    toolButton1_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_5=new QToolButton();
    toolButton1_5->setText(tr("  杨钧升  "));
    toolButton1_5->setIcon(QPixmap(":/images/qqimg/nn.png"));
    toolButton1_5->setIconSize(QPixmap(":/images/qqimg/nn.png").size());
    toolButton1_5->setAutoRaise(TRUE);
    toolButton1_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout1=new QVBoxLayout(groupBox1);
    layout1->setMargin(10);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolButton1_1);
    layout1->addWidget(toolButton1_2);
    layout1->addWidget(toolButton1_3);
    layout1->addWidget(toolButton1_4);
    layout1->addWidget(toolButton1_5);
    layout1->addStretch();

    QGroupBox*groupBox2=new QGroupBox();
    toolButton2_1=new QToolButton();
    toolButton2_1->setText(tr("lvtougui"));
    toolButton2_1->setIcon(QPixmap(":/images/qqimg/1.png"));
    toolButton2_1->setIconSize(QPixmap(":/images/qqimg/1.png").size());
    toolButton2_1->setAutoRaise(TRUE);
    toolButton2_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton2_2=new QToolButton();
    toolButton2_2->setText(tr("lanpigou"));
    toolButton2_2->setIcon(QPixmap(":/images/qqimg/2.png"));
    toolButton2_2->setIconSize(QPixmap(":/images/qqimg/2.png").size());
    toolButton2_2->setAutoRaise(TRUE);
    toolButton2_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout*layout2=new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolButton2_1);
    layout2->addWidget(toolButton2_2);
    layout2->addStretch();


    QGroupBox*groupBox3=new QGroupBox();
    toolButton3_1=new QToolButton();
    toolButton3_1->setText(tr("  qq  "));
    toolButton3_1->setIcon(QPixmap(":/images/qqimg/qq.png"));
    toolButton3_1->setIconSize(QPixmap(":/images/qqimg/qq.png").size());
    toolButton3_1->setAutoRaise(TRUE);
    toolButton3_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton3_2=new QToolButton();
    toolButton3_2->setText(tr(" xiaobaitu"));
    toolButton3_2->setIcon(QPixmap(":/images/qqimg/3.png"));
    toolButton3_2->setIconSize(QPixmap(":/images/qqimg/3.png").size());
    toolButton3_2->setAutoRaise(TRUE);
    toolButton3_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout*layout3=new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolButton3_1);
    layout3->addWidget(toolButton3_2);
    layout3->addStretch();

    this->addItem((QWidget*)groupBox1,tr("my friends"));
    this->addItem((QWidget*)groupBox2,tr("stranger"));
    this->addItem((QWidget*)groupBox3,tr("blacklist"));
}

Drawer::~Drawer()
{

}
