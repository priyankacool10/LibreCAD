/********************************************************************************
** Form generated from reading UI file 'qg_cadtoolbararcs.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_CADTOOLBARARCS_H
#define UI_QG_CADTOOLBARARCS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_CadToolBarArcs
{
public:
    QToolButton *bBack;
    QToolButton *bArc;
    QToolButton *bArc3P;
    QToolButton *bArcParallel;
    QToolButton *bArcTangential;
    QToolButton *bHidden;

    void setupUi(QWidget *QG_CadToolBarArcs)
    {
        if (QG_CadToolBarArcs->objectName().isEmpty())
            QG_CadToolBarArcs->setObjectName(QString::fromUtf8("QG_CadToolBarArcs"));
        QG_CadToolBarArcs->resize(65, 336);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_CadToolBarArcs->sizePolicy().hasHeightForWidth());
        QG_CadToolBarArcs->setSizePolicy(sizePolicy);
        QG_CadToolBarArcs->setMinimumSize(QSize(65, 336));
        bBack = new QToolButton(QG_CadToolBarArcs);
        bBack->setObjectName(QString::fromUtf8("bBack"));
        bBack->setGeometry(QRect(0, 0, 65, 20));
        bBack->setMaximumSize(QSize(65, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/extui/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBack->setIcon(icon);
        bBack->setIconSize(QSize(65, 20));
        bArc = new QToolButton(QG_CadToolBarArcs);
        bArc->setObjectName(QString::fromUtf8("bArc"));
        bArc->setGeometry(QRect(0, 21, 32, 32));
        bArc->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/extui/arcscraa.png"), QSize(), QIcon::Normal, QIcon::Off);
        bArc->setIcon(icon1);
        bArc->setCheckable(true);
        bArc->setAutoExclusive(true);
        bArc3P = new QToolButton(QG_CadToolBarArcs);
        bArc3P->setObjectName(QString::fromUtf8("bArc3P"));
        bArc3P->setGeometry(QRect(33, 21, 32, 32));
        bArc3P->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/extui/arcs3p.png"), QSize(), QIcon::Normal, QIcon::Off);
        bArc3P->setIcon(icon2);
        bArc3P->setCheckable(true);
        bArc3P->setAutoExclusive(true);
        bArcParallel = new QToolButton(QG_CadToolBarArcs);
        bArcParallel->setObjectName(QString::fromUtf8("bArcParallel"));
        bArcParallel->setGeometry(QRect(0, 54, 32, 32));
        bArcParallel->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/extui/arcspara.png"), QSize(), QIcon::Normal, QIcon::Off);
        bArcParallel->setIcon(icon3);
        bArcParallel->setCheckable(true);
        bArcParallel->setAutoExclusive(true);
        bArcTangential = new QToolButton(QG_CadToolBarArcs);
        bArcTangential->setObjectName(QString::fromUtf8("bArcTangential"));
        bArcTangential->setGeometry(QRect(33, 54, 32, 32));
        bArcTangential->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/extui/arcstangential.png"), QSize(), QIcon::Normal, QIcon::Off);
        bArcTangential->setIcon(icon4);
        bArcTangential->setCheckable(true);
        bArcTangential->setAutoExclusive(true);
        bHidden = new QToolButton(QG_CadToolBarArcs);
        bHidden->setObjectName(QString::fromUtf8("bHidden"));
        bHidden->setGeometry(QRect(0, 83, 0, 0));
        bHidden->setMaximumSize(QSize(0, 0));
        bHidden->setText(QString::fromUtf8(""));
        bHidden->setIconSize(QSize(0, 0));
        bHidden->setCheckable(true);
        bHidden->setAutoExclusive(true);
        QWidget::setTabOrder(bBack, bArc);
        QWidget::setTabOrder(bArc, bArc3P);
        QWidget::setTabOrder(bArc3P, bArcParallel);

        retranslateUi(QG_CadToolBarArcs);
        QObject::connect(bArc, SIGNAL(clicked()), QG_CadToolBarArcs, SLOT(drawArc()));
        QObject::connect(bArc3P, SIGNAL(clicked()), QG_CadToolBarArcs, SLOT(drawArc3P()));
        QObject::connect(bArcParallel, SIGNAL(clicked()), QG_CadToolBarArcs, SLOT(drawArcParallel()));
        QObject::connect(bArcTangential, SIGNAL(clicked()), QG_CadToolBarArcs, SLOT(drawArcTangential()));

        QMetaObject::connectSlotsByName(QG_CadToolBarArcs);
    } // setupUi

    void retranslateUi(QWidget *QG_CadToolBarArcs)
    {
        QG_CadToolBarArcs->setWindowTitle(QApplication::translate("QG_CadToolBarArcs", "Arcs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBack->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Back to main menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        bArc->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Arc with Center, Point, Angles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bArc->setText(QString());
#ifndef QT_NO_TOOLTIP
        bArc3P->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Arc with three points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bArc3P->setText(QString());
#ifndef QT_NO_TOOLTIP
        bArcParallel->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Concentric", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bArcParallel->setText(QString());
#ifndef QT_NO_TOOLTIP
        bArcTangential->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Arc tangential to base entity with radius", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bArcTangential->setText(QString());
#ifndef QT_NO_TOOLTIP
        bHidden->setToolTip(QApplication::translate("QG_CadToolBarArcs", "Arc with Center, Point, Angles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QG_CadToolBarArcs: public Ui_QG_CadToolBarArcs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_CADTOOLBARARCS_H
