/********************************************************************************
** Form generated from reading UI file 'qg_cadtoolbarcircles.ui'
**
** Created: Tue Jun 18 04:27:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_CADTOOLBARCIRCLES_H
#define UI_QG_CADTOOLBARCIRCLES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_CadToolBarCircles
{
public:
    QToolButton *bBack;
    QToolButton *bCircle;
    QToolButton *bCircleCR;
    QToolButton *bCircle2P;
    QToolButton *bCircle3P;
    QToolButton *bCircleParallel;
    QToolButton *bHidden;
    QToolButton *bCircleInscribe;
    QToolButton *bCircleTan2;
    QToolButton *bCircleTan3;
    QToolButton *bCircleTan1_2P;
    QToolButton *bCircleTan2_1P;
    QToolButton *bFlower;

    void setupUi(QWidget *QG_CadToolBarCircles)
    {
        if (QG_CadToolBarCircles->objectName().isEmpty())
            QG_CadToolBarCircles->setObjectName(QString::fromUtf8("QG_CadToolBarCircles"));
        QG_CadToolBarCircles->resize(65, 336);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_CadToolBarCircles->sizePolicy().hasHeightForWidth());
        QG_CadToolBarCircles->setSizePolicy(sizePolicy);
        QG_CadToolBarCircles->setMinimumSize(QSize(65, 336));
        bBack = new QToolButton(QG_CadToolBarCircles);
        bBack->setObjectName(QString::fromUtf8("bBack"));
        bBack->setGeometry(QRect(0, 0, 65, 20));
        bBack->setMaximumSize(QSize(65, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/extui/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBack->setIcon(icon);
        bBack->setIconSize(QSize(65, 20));
        bCircle = new QToolButton(QG_CadToolBarCircles);
        bCircle->setObjectName(QString::fromUtf8("bCircle"));
        bCircle->setGeometry(QRect(0, 21, 32, 32));
        bCircle->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/extui/circles.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircle->setIcon(icon1);
        bCircle->setIconSize(QSize(32, 32));
        bCircle->setCheckable(true);
        bCircle->setAutoExclusive(true);
        bCircleCR = new QToolButton(QG_CadToolBarCircles);
        bCircleCR->setObjectName(QString::fromUtf8("bCircleCR"));
        bCircleCR->setGeometry(QRect(33, 21, 32, 32));
        bCircleCR->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/extui/circlescr.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleCR->setIcon(icon2);
        bCircleCR->setIconSize(QSize(32, 32));
        bCircleCR->setCheckable(true);
        bCircleCR->setAutoExclusive(true);
        bCircle2P = new QToolButton(QG_CadToolBarCircles);
        bCircle2P->setObjectName(QString::fromUtf8("bCircle2P"));
        bCircle2P->setGeometry(QRect(0, 54, 32, 32));
        bCircle2P->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/extui/circles2p.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircle2P->setIcon(icon3);
        bCircle2P->setIconSize(QSize(32, 32));
        bCircle2P->setCheckable(true);
        bCircle2P->setAutoExclusive(true);
        bCircle3P = new QToolButton(QG_CadToolBarCircles);
        bCircle3P->setObjectName(QString::fromUtf8("bCircle3P"));
        bCircle3P->setGeometry(QRect(33, 54, 32, 32));
        bCircle3P->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/extui/circles3p.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircle3P->setIcon(icon4);
        bCircle3P->setIconSize(QSize(32, 32));
        bCircle3P->setCheckable(true);
        bCircle3P->setAutoExclusive(true);
        bCircleParallel = new QToolButton(QG_CadToolBarCircles);
        bCircleParallel->setObjectName(QString::fromUtf8("bCircleParallel"));
        bCircleParallel->setGeometry(QRect(0, 87, 32, 32));
        bCircleParallel->setMaximumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/extui/circlespara.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleParallel->setIcon(icon5);
        bCircleParallel->setIconSize(QSize(32, 32));
        bCircleParallel->setCheckable(true);
        bCircleParallel->setAutoExclusive(true);
        bHidden = new QToolButton(QG_CadToolBarCircles);
        bHidden->setObjectName(QString::fromUtf8("bHidden"));
        bHidden->setGeometry(QRect(0, 336, 0, 0));
        bHidden->setMaximumSize(QSize(0, 0));
        bHidden->setText(QString::fromUtf8(""));
        bHidden->setIconSize(QSize(0, 0));
        bHidden->setCheckable(true);
        bHidden->setAutoExclusive(true);
        bCircleInscribe = new QToolButton(QG_CadToolBarCircles);
        bCircleInscribe->setObjectName(QString::fromUtf8("bCircleInscribe"));
        bCircleInscribe->setGeometry(QRect(33, 87, 32, 32));
        bCircleInscribe->setMaximumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/extui/circleinscribe.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleInscribe->setIcon(icon6);
        bCircleInscribe->setIconSize(QSize(32, 32));
        bCircleInscribe->setCheckable(true);
        bCircleInscribe->setAutoExclusive(true);
        bCircleTan2 = new QToolButton(QG_CadToolBarCircles);
        bCircleTan2->setObjectName(QString::fromUtf8("bCircleTan2"));
        bCircleTan2->setGeometry(QRect(0, 120, 32, 32));
        bCircleTan2->setMaximumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/extui/circletan2.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleTan2->setIcon(icon7);
        bCircleTan2->setIconSize(QSize(32, 32));
        bCircleTan2->setCheckable(true);
        bCircleTan2->setAutoExclusive(true);
        bCircleTan3 = new QToolButton(QG_CadToolBarCircles);
        bCircleTan3->setObjectName(QString::fromUtf8("bCircleTan3"));
        bCircleTan3->setGeometry(QRect(33, 153, 32, 32));
        bCircleTan3->setMaximumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/extui/circletan3.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleTan3->setIcon(icon8);
        bCircleTan3->setIconSize(QSize(32, 32));
        bCircleTan3->setCheckable(true);
        bCircleTan3->setAutoExclusive(true);
        bCircleTan1_2P = new QToolButton(QG_CadToolBarCircles);
        bCircleTan1_2P->setObjectName(QString::fromUtf8("bCircleTan1_2P"));
        bCircleTan1_2P->setGeometry(QRect(0, 153, 32, 32));
        bCircleTan1_2P->setMaximumSize(QSize(32, 32));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/extui/circletan1_2p.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleTan1_2P->setIcon(icon9);
        bCircleTan1_2P->setIconSize(QSize(32, 32));
        bCircleTan1_2P->setCheckable(true);
        bCircleTan1_2P->setAutoExclusive(true);
        bCircleTan2_1P = new QToolButton(QG_CadToolBarCircles);
        bCircleTan2_1P->setObjectName(QString::fromUtf8("bCircleTan2_1P"));
        bCircleTan2_1P->setGeometry(QRect(33, 120, 32, 32));
        bCircleTan2_1P->setMaximumSize(QSize(32, 32));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/extui/circletan2_1p.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCircleTan2_1P->setIcon(icon10);
        bCircleTan2_1P->setIconSize(QSize(32, 32));
        bCircleTan2_1P->setCheckable(true);
        bCircleTan2_1P->setAutoExclusive(true);
        bFlower = new QToolButton(QG_CadToolBarCircles);
        bFlower->setObjectName(QString::fromUtf8("bFlower"));
        bFlower->setGeometry(QRect(0, 190, 31, 31));
        bFlower->setMaximumSize(QSize(32, 32));
        bFlower->setCheckable(true);
        bFlower->setAutoExclusive(true);
        QWidget::setTabOrder(bBack, bCircle);
        QWidget::setTabOrder(bCircle, bCircleCR);
        QWidget::setTabOrder(bCircleCR, bCircle2P);
        QWidget::setTabOrder(bCircle2P, bCircle3P);
        QWidget::setTabOrder(bCircle3P, bCircleParallel);
         QWidget::setTabOrder(bCircleParallel, bFlower);

        retranslateUi(QG_CadToolBarCircles);
        QObject::connect(bCircle, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircle()));
        QObject::connect(bCircleCR, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircleCR()));
        QObject::connect(bCircle2P, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircle2P()));
        QObject::connect(bCircle3P, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircle3P()));
        QObject::connect(bCircleParallel, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircleParallel()));
        QObject::connect(bCircleInscribe, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircleInscribe()));
        QObject::connect(bCircleTan2, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircleTan2()));
        QObject::connect(bCircleTan3, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircleTan3()));
        QObject::connect(bCircleTan1_2P, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircle1_2P()));
        QObject::connect(bCircleTan2_1P, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawCircle2_1P()));
        QObject::connect(bFlower, SIGNAL(clicked()), QG_CadToolBarCircles, SLOT(drawFlower()));

        QMetaObject::connectSlotsByName(QG_CadToolBarCircles);
    } // setupUi

    void retranslateUi(QWidget *QG_CadToolBarCircles)
    {
        QG_CadToolBarCircles->setWindowTitle(QApplication::translate("QG_CadToolBarCircles", "Circles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBack->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Back to main menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircle->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Circle with center and point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircle->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleCR->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Circle with center and radius", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleCR->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircle2P->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Circle with two opposite points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircle2P->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircle3P->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Circle with three points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircle3P->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleParallel->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Concentric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleParallel->setText(QString());
#ifndef QT_NO_TOOLTIP
        bHidden->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Concentric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        bCircleInscribe->setToolTip(QApplication::translate("QG_CadToolBarCircles", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Draw Circle inscribed in a triangle, <span style=\" font-style:italic;\">i.e.</span>, tangential to 3 lines</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleInscribe->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleTan2->setToolTip(QApplication::translate("QG_CadToolBarCircles", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Draw a tangential Circle of two circles, given the radius</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleTan2->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleTan3->setToolTip(QApplication::translate("QG_CadToolBarCircles", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Draw a tangential Circle of three lines/arcs/circles</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleTan3->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleTan1_2P->setToolTip(QApplication::translate("QG_CadToolBarCircles", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Draw a tangential Circle of a circle, passing two given points</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleTan1_2P->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCircleTan2_1P->setToolTip(QApplication::translate("QG_CadToolBarCircles", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Draw a tangential Circle of two circles, passing a given point</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCircleTan2_1P->setText(QString());
#ifndef QT_NO_TOOLTIP
        bFlower->setToolTip(QApplication::translate("QG_CadToolBarCircles", "Flowers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bFlower->setText(QApplication::translate("QG_CadToolBarCircles", "F", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QG_CadToolBarCircles: public Ui_QG_CadToolBarCircles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_CADTOOLBARCIRCLES_H
