/********************************************************************************
** Form generated from reading UI file 'qg_cadtoolbarmodify.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_CADTOOLBARMODIFY_H
#define UI_QG_CADTOOLBARMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_CadToolBarModify
{
public:
    QToolButton *bBack;
    QToolButton *bMove;
    QToolButton *bRotate;
    QToolButton *bScale;
    QToolButton *bMirror;
    QToolButton *bMoveRotate;
    QToolButton *bRotate2;
    QToolButton *bTrim;
    QToolButton *bTrim2;
    QToolButton *bTrimAmount;
    QToolButton *bOffset;
    QToolButton *bBevel;
    QToolButton *bRound;
    QToolButton *bCut;
    QToolButton *bStretch;
    QToolButton *bEntity;
    QToolButton *bAttributes;
    QToolButton *bDelete;
    QToolButton *bExplode;
    QToolButton *bExplodeText;
    QToolButton *bEntityText;
    QToolButton *bHidden;

    void setupUi(QWidget *QG_CadToolBarModify)
    {
        if (QG_CadToolBarModify->objectName().isEmpty())
            QG_CadToolBarModify->setObjectName(QString::fromUtf8("QG_CadToolBarModify"));
        QG_CadToolBarModify->resize(65, 448);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_CadToolBarModify->sizePolicy().hasHeightForWidth());
        QG_CadToolBarModify->setSizePolicy(sizePolicy);
        QG_CadToolBarModify->setMinimumSize(QSize(65, 336));
        bBack = new QToolButton(QG_CadToolBarModify);
        bBack->setObjectName(QString::fromUtf8("bBack"));
        bBack->setGeometry(QRect(0, 0, 65, 20));
        bBack->setMaximumSize(QSize(16777215, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/extui/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBack->setIcon(icon);
        bBack->setIconSize(QSize(65, 20));
        bMove = new QToolButton(QG_CadToolBarModify);
        bMove->setObjectName(QString::fromUtf8("bMove"));
        bMove->setGeometry(QRect(0, 21, 32, 32));
        bMove->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/extui/modifymove.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMove->setIcon(icon1);
        bMove->setIconSize(QSize(32, 32));
        bMove->setCheckable(true);
        bMove->setAutoExclusive(true);
        bRotate = new QToolButton(QG_CadToolBarModify);
        bRotate->setObjectName(QString::fromUtf8("bRotate"));
        bRotate->setGeometry(QRect(33, 21, 32, 32));
        bRotate->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/extui/modifyrotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRotate->setIcon(icon2);
        bRotate->setIconSize(QSize(32, 32));
        bRotate->setCheckable(true);
        bRotate->setAutoExclusive(true);
        bScale = new QToolButton(QG_CadToolBarModify);
        bScale->setObjectName(QString::fromUtf8("bScale"));
        bScale->setGeometry(QRect(0, 54, 32, 32));
        bScale->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/extui/modifyscale.png"), QSize(), QIcon::Normal, QIcon::Off);
        bScale->setIcon(icon3);
        bScale->setIconSize(QSize(32, 32));
        bScale->setCheckable(true);
        bScale->setAutoExclusive(true);
        bMirror = new QToolButton(QG_CadToolBarModify);
        bMirror->setObjectName(QString::fromUtf8("bMirror"));
        bMirror->setGeometry(QRect(33, 54, 32, 32));
        bMirror->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/extui/modifymirror.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMirror->setIcon(icon4);
        bMirror->setIconSize(QSize(32, 32));
        bMirror->setCheckable(true);
        bMirror->setAutoExclusive(true);
        bMoveRotate = new QToolButton(QG_CadToolBarModify);
        bMoveRotate->setObjectName(QString::fromUtf8("bMoveRotate"));
        bMoveRotate->setGeometry(QRect(0, 87, 32, 32));
        bMoveRotate->setMaximumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/extui/modifymoverotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMoveRotate->setIcon(icon5);
        bMoveRotate->setIconSize(QSize(32, 32));
        bMoveRotate->setCheckable(true);
        bMoveRotate->setAutoExclusive(true);
        bRotate2 = new QToolButton(QG_CadToolBarModify);
        bRotate2->setObjectName(QString::fromUtf8("bRotate2"));
        bRotate2->setGeometry(QRect(33, 87, 32, 32));
        bRotate2->setMaximumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/extui/modifyrotate2.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRotate2->setIcon(icon6);
        bRotate2->setIconSize(QSize(32, 32));
        bRotate2->setCheckable(true);
        bRotate2->setAutoExclusive(true);
        bTrim = new QToolButton(QG_CadToolBarModify);
        bTrim->setObjectName(QString::fromUtf8("bTrim"));
        bTrim->setGeometry(QRect(0, 120, 32, 32));
        bTrim->setMaximumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/extui/modifytrim.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTrim->setIcon(icon7);
        bTrim->setIconSize(QSize(32, 32));
        bTrim->setCheckable(true);
        bTrim->setAutoExclusive(true);
        bTrim2 = new QToolButton(QG_CadToolBarModify);
        bTrim2->setObjectName(QString::fromUtf8("bTrim2"));
        bTrim2->setGeometry(QRect(33, 120, 32, 32));
        bTrim2->setMaximumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/extui/modifytrim2.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTrim2->setIcon(icon8);
        bTrim2->setIconSize(QSize(32, 32));
        bTrim2->setCheckable(true);
        bTrim2->setAutoExclusive(true);
        bTrimAmount = new QToolButton(QG_CadToolBarModify);
        bTrimAmount->setObjectName(QString::fromUtf8("bTrimAmount"));
        bTrimAmount->setGeometry(QRect(0, 153, 32, 32));
        bTrimAmount->setMaximumSize(QSize(32, 32));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/extui/modifytrimamount.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTrimAmount->setIcon(icon9);
        bTrimAmount->setIconSize(QSize(32, 32));
        bTrimAmount->setCheckable(true);
        bTrimAmount->setAutoExclusive(true);
        bOffset = new QToolButton(QG_CadToolBarModify);
        bOffset->setObjectName(QString::fromUtf8("bOffset"));
        bOffset->setGeometry(QRect(33, 153, 32, 32));
        bOffset->setMaximumSize(QSize(32, 32));
        bOffset->setText(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/extui/arcspara.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOffset->setIcon(icon10);
        bOffset->setIconSize(QSize(32, 32));
        bOffset->setCheckable(true);
        bOffset->setAutoExclusive(true);
        bBevel = new QToolButton(QG_CadToolBarModify);
        bBevel->setObjectName(QString::fromUtf8("bBevel"));
        bBevel->setGeometry(QRect(0, 186, 32, 32));
        bBevel->setMaximumSize(QSize(32, 32));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/extui/modifybevel.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBevel->setIcon(icon11);
        bBevel->setIconSize(QSize(32, 32));
        bBevel->setCheckable(true);
        bBevel->setAutoExclusive(true);
        bRound = new QToolButton(QG_CadToolBarModify);
        bRound->setObjectName(QString::fromUtf8("bRound"));
        bRound->setGeometry(QRect(33, 186, 32, 32));
        bRound->setMaximumSize(QSize(32, 32));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/extui/modifyround.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRound->setIcon(icon12);
        bRound->setIconSize(QSize(32, 32));
        bRound->setCheckable(true);
        bRound->setAutoExclusive(true);
        bCut = new QToolButton(QG_CadToolBarModify);
        bCut->setObjectName(QString::fromUtf8("bCut"));
        bCut->setGeometry(QRect(0, 219, 32, 32));
        bCut->setMaximumSize(QSize(32, 32));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/extui/modifycut.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCut->setIcon(icon13);
        bCut->setIconSize(QSize(32, 32));
        bCut->setCheckable(true);
        bCut->setAutoExclusive(true);
        bStretch = new QToolButton(QG_CadToolBarModify);
        bStretch->setObjectName(QString::fromUtf8("bStretch"));
        bStretch->setGeometry(QRect(33, 219, 32, 32));
        bStretch->setMaximumSize(QSize(32, 32));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/extui/modifystretch.png"), QSize(), QIcon::Normal, QIcon::Off);
        bStretch->setIcon(icon14);
        bStretch->setIconSize(QSize(32, 32));
        bStretch->setCheckable(true);
        bStretch->setAutoExclusive(true);
        bEntity = new QToolButton(QG_CadToolBarModify);
        bEntity->setObjectName(QString::fromUtf8("bEntity"));
        bEntity->setGeometry(QRect(0, 252, 32, 32));
        bEntity->setMaximumSize(QSize(32, 32));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/extui/modifyentity.png"), QSize(), QIcon::Normal, QIcon::Off);
        bEntity->setIcon(icon15);
        bEntity->setIconSize(QSize(32, 32));
        bEntity->setCheckable(true);
        bEntity->setAutoExclusive(true);
        bAttributes = new QToolButton(QG_CadToolBarModify);
        bAttributes->setObjectName(QString::fromUtf8("bAttributes"));
        bAttributes->setGeometry(QRect(33, 252, 32, 32));
        bAttributes->setMaximumSize(QSize(32, 32));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/extui/modifyattributes.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAttributes->setIcon(icon16);
        bAttributes->setIconSize(QSize(32, 32));
        bAttributes->setCheckable(true);
        bAttributes->setAutoExclusive(true);
        bDelete = new QToolButton(QG_CadToolBarModify);
        bDelete->setObjectName(QString::fromUtf8("bDelete"));
        bDelete->setGeometry(QRect(0, 285, 32, 32));
        bDelete->setMaximumSize(QSize(32, 32));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/extui/modifydelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDelete->setIcon(icon17);
        bDelete->setIconSize(QSize(32, 32));
        bDelete->setCheckable(true);
        bDelete->setAutoExclusive(true);
        bExplode = new QToolButton(QG_CadToolBarModify);
        bExplode->setObjectName(QString::fromUtf8("bExplode"));
        bExplode->setGeometry(QRect(33, 285, 32, 32));
        bExplode->setMaximumSize(QSize(32, 32));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/extui/modifyexplode.png"), QSize(), QIcon::Normal, QIcon::Off);
        bExplode->setIcon(icon18);
        bExplode->setIconSize(QSize(32, 32));
        bExplode->setCheckable(true);
        bExplode->setAutoExclusive(true);
        bExplodeText = new QToolButton(QG_CadToolBarModify);
        bExplodeText->setObjectName(QString::fromUtf8("bExplodeText"));
        bExplodeText->setGeometry(QRect(0, 318, 32, 32));
        bExplodeText->setMaximumSize(QSize(32, 32));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/extui/modifyexplodetext.png"), QSize(), QIcon::Normal, QIcon::Off);
        bExplodeText->setIcon(icon19);
        bExplodeText->setIconSize(QSize(32, 32));
        bExplodeText->setCheckable(true);
        bExplodeText->setAutoExclusive(true);
        bEntityText = new QToolButton(QG_CadToolBarModify);
        bEntityText->setObjectName(QString::fromUtf8("bEntityText"));
        bEntityText->setGeometry(QRect(33, 318, 32, 32));
        bEntityText->setMaximumSize(QSize(32, 32));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/extui/modifytext.png"), QSize(), QIcon::Normal, QIcon::Off);
        bEntityText->setIcon(icon20);
        bEntityText->setIconSize(QSize(32, 32));
        bEntityText->setCheckable(true);
        bEntityText->setAutoExclusive(true);
        bHidden = new QToolButton(QG_CadToolBarModify);
        bHidden->setObjectName(QString::fromUtf8("bHidden"));
        bHidden->setGeometry(QRect(40, 360, 0, 0));
        bHidden->setMaximumSize(QSize(0, 0));
        bHidden->setIconSize(QSize(0, 0));
        bHidden->setCheckable(true);
        bHidden->setAutoExclusive(true);

        retranslateUi(QG_CadToolBarModify);
        QObject::connect(bMove, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyMove()));
        QObject::connect(bRotate, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyRotate()));
        QObject::connect(bEntity, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyEntity()));
        QObject::connect(bScale, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyScale()));
        QObject::connect(bDelete, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyDelete()));
        QObject::connect(bTrim, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyTrim()));
        QObject::connect(bMirror, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyMirror()));
        QObject::connect(bTrim2, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyTrim2()));
        QObject::connect(bMoveRotate, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyMoveRotate()));
        QObject::connect(bTrimAmount, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyTrimAmount()));
        QObject::connect(bCut, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyCut()));
        QObject::connect(bRotate2, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyRotate2()));
        QObject::connect(bStretch, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyStretch()));
        QObject::connect(bBevel, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyBevel()));
        QObject::connect(bRound, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyRound()));
        QObject::connect(bExplode, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyExplode()));
        QObject::connect(bAttributes, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyAttributes()));
        QObject::connect(bExplodeText, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyExplodeText()));
        QObject::connect(bEntityText, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyEntity()));
        QObject::connect(bOffset, SIGNAL(clicked()), QG_CadToolBarModify, SLOT(modifyOffset()));

        QMetaObject::connectSlotsByName(QG_CadToolBarModify);
    } // setupUi

    void retranslateUi(QWidget *QG_CadToolBarModify)
    {
        QG_CadToolBarModify->setWindowTitle(QApplication::translate("QG_CadToolBarModify", "Modify", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBack->setToolTip(QApplication::translate("QG_CadToolBarModify", "Back to main menu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        bMove->setToolTip(QApplication::translate("QG_CadToolBarModify", "Move / Copy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bMove->setText(QString());
#ifndef QT_NO_TOOLTIP
        bRotate->setToolTip(QApplication::translate("QG_CadToolBarModify", "Rotate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRotate->setText(QString());
#ifndef QT_NO_TOOLTIP
        bScale->setToolTip(QApplication::translate("QG_CadToolBarModify", "Scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bScale->setText(QString());
#ifndef QT_NO_TOOLTIP
        bMirror->setToolTip(QApplication::translate("QG_CadToolBarModify", "Mirror", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bMirror->setText(QString());
#ifndef QT_NO_TOOLTIP
        bMoveRotate->setToolTip(QApplication::translate("QG_CadToolBarModify", "Move and Rotate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bMoveRotate->setText(QString());
#ifndef QT_NO_TOOLTIP
        bRotate2->setToolTip(QApplication::translate("QG_CadToolBarModify", "Rotate Two", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRotate2->setText(QString());
#ifndef QT_NO_TOOLTIP
        bTrim->setToolTip(QApplication::translate("QG_CadToolBarModify", "Trim / Extend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTrim->setText(QString());
#ifndef QT_NO_TOOLTIP
        bTrim2->setToolTip(QApplication::translate("QG_CadToolBarModify", "Trim / Extend two", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTrim2->setText(QString());
#ifndef QT_NO_TOOLTIP
        bTrimAmount->setToolTip(QApplication::translate("QG_CadToolBarModify", "Trim by amount", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTrimAmount->setText(QString());
#ifndef QT_NO_TOOLTIP
        bOffset->setToolTip(QApplication::translate("QG_CadToolBarModify", "Offset (Experimental Feature, work in progress)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        bBevel->setToolTip(QApplication::translate("QG_CadToolBarModify", "Bevel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBevel->setText(QString());
#ifndef QT_NO_TOOLTIP
        bRound->setToolTip(QApplication::translate("QG_CadToolBarModify", "Round", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRound->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCut->setToolTip(QApplication::translate("QG_CadToolBarModify", "Divide", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCut->setText(QString());
#ifndef QT_NO_TOOLTIP
        bStretch->setToolTip(QApplication::translate("QG_CadToolBarModify", "Stretch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bStretch->setText(QString());
#ifndef QT_NO_TOOLTIP
        bEntity->setToolTip(QApplication::translate("QG_CadToolBarModify", "Edit Entity Geometry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bEntity->setText(QString());
#ifndef QT_NO_TOOLTIP
        bAttributes->setToolTip(QApplication::translate("QG_CadToolBarModify", "Edit Entity Attributes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bAttributes->setText(QString());
#ifndef QT_NO_TOOLTIP
        bDelete->setToolTip(QApplication::translate("QG_CadToolBarModify", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDelete->setText(QString());
#ifndef QT_NO_TOOLTIP
        bExplode->setToolTip(QApplication::translate("QG_CadToolBarModify", "Explode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bExplode->setText(QString());
#ifndef QT_NO_TOOLTIP
        bExplodeText->setToolTip(QApplication::translate("QG_CadToolBarModify", "Explode Text into Letters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bExplodeText->setText(QString());
#ifndef QT_NO_TOOLTIP
        bEntityText->setToolTip(QApplication::translate("QG_CadToolBarModify", "Edit Text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bEntityText->setText(QString());
#ifndef QT_NO_TOOLTIP
        bHidden->setToolTip(QApplication::translate("QG_CadToolBarModify", "Edit Text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bHidden->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QG_CadToolBarModify: public Ui_QG_CadToolBarModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_CADTOOLBARMODIFY_H
