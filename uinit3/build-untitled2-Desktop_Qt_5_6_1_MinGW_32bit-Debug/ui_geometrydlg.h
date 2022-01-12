/********************************************************************************
** Form generated from reading UI file 'geometrydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMETRYDLG_H
#define UI_GEOMETRYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeometryDlg
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *xlabel;
    QLabel *ylabel;
    QLabel *frameGeolabel;
    QLabel *poslabel;
    QLabel *geolabel;
    QLabel *widthlabel;
    QLabel *heightlabel;
    QLabel *rectlabel;
    QLabel *sizelabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;

    void setupUi(QWidget *GeometryDlg)
    {
        if (GeometryDlg->objectName().isEmpty())
            GeometryDlg->setObjectName(QStringLiteral("GeometryDlg"));
        GeometryDlg->resize(400, 300);
        layoutWidget = new QWidget(GeometryDlg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 20, 98, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        xlabel = new QLabel(layoutWidget);
        xlabel->setObjectName(QStringLiteral("xlabel"));

        verticalLayout_2->addWidget(xlabel);

        ylabel = new QLabel(layoutWidget);
        ylabel->setObjectName(QStringLiteral("ylabel"));

        verticalLayout_2->addWidget(ylabel);

        frameGeolabel = new QLabel(layoutWidget);
        frameGeolabel->setObjectName(QStringLiteral("frameGeolabel"));

        verticalLayout_2->addWidget(frameGeolabel);

        poslabel = new QLabel(layoutWidget);
        poslabel->setObjectName(QStringLiteral("poslabel"));

        verticalLayout_2->addWidget(poslabel);

        geolabel = new QLabel(layoutWidget);
        geolabel->setObjectName(QStringLiteral("geolabel"));

        verticalLayout_2->addWidget(geolabel);

        widthlabel = new QLabel(layoutWidget);
        widthlabel->setObjectName(QStringLiteral("widthlabel"));

        verticalLayout_2->addWidget(widthlabel);

        heightlabel = new QLabel(layoutWidget);
        heightlabel->setObjectName(QStringLiteral("heightlabel"));

        verticalLayout_2->addWidget(heightlabel);

        rectlabel = new QLabel(layoutWidget);
        rectlabel->setObjectName(QStringLiteral("rectlabel"));

        verticalLayout_2->addWidget(rectlabel);

        sizelabel = new QLabel(layoutWidget);
        sizelabel->setObjectName(QStringLiteral("sizelabel"));

        verticalLayout_2->addWidget(sizelabel);

        widget = new QWidget(GeometryDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 98, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);


        retranslateUi(GeometryDlg);

        QMetaObject::connectSlotsByName(GeometryDlg);
    } // setupUi

    void retranslateUi(QWidget *GeometryDlg)
    {
        GeometryDlg->setWindowTitle(QApplication::translate("GeometryDlg", "Form", 0));
        xlabel->setText(QApplication::translate("GeometryDlg", "x():", 0));
        ylabel->setText(QApplication::translate("GeometryDlg", "y();", 0));
        frameGeolabel->setText(QApplication::translate("GeometryDlg", "frameGeometry();", 0));
        poslabel->setText(QApplication::translate("GeometryDlg", "pos();", 0));
        geolabel->setText(QApplication::translate("GeometryDlg", "geometry();", 0));
        widthlabel->setText(QApplication::translate("GeometryDlg", "width():", 0));
        heightlabel->setText(QApplication::translate("GeometryDlg", "height();", 0));
        rectlabel->setText(QApplication::translate("GeometryDlg", "rect();", 0));
        sizelabel->setText(QApplication::translate("GeometryDlg", "size():", 0));
        label->setText(QApplication::translate("GeometryDlg", "x():", 0));
        label_2->setText(QApplication::translate("GeometryDlg", "y();", 0));
        label_3->setText(QApplication::translate("GeometryDlg", "frameGeometry();", 0));
        label_4->setText(QApplication::translate("GeometryDlg", "pos();", 0));
        label_5->setText(QApplication::translate("GeometryDlg", "geometry();", 0));
        label_6->setText(QApplication::translate("GeometryDlg", "width():", 0));
        label_9->setText(QApplication::translate("GeometryDlg", "height();", 0));
        label_8->setText(QApplication::translate("GeometryDlg", "rect();", 0));
        label_7->setText(QApplication::translate("GeometryDlg", "size():", 0));
    } // retranslateUi

};

namespace Ui {
    class GeometryDlg: public Ui_GeometryDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMETRYDLG_H
