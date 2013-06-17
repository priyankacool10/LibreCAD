/********************************************************************************
** Form generated from reading UI file 'qg_dlgtext.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_DLGTEXT_H
#define UI_QG_DLGTEXT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include "qg_fontbox.h"
#include "qg_layerbox.h"
#include "qg_widgetpen.h"

QT_BEGIN_NAMESPACE

class Ui_QG_DlgText
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *_4;
    QHBoxLayout *hboxLayout;
    QLabel *lText;
    QSpacerItem *spacer4;
    QToolButton *bClear;
    QToolButton *bLoad;
    QToolButton *bSave;
    QToolButton *bCut;
    QToolButton *bCopy;
    QToolButton *bPaste;
    QLineEdit *teText;
    QHBoxLayout *_5;
    QVBoxLayout *vlAttributes;
    QHBoxLayout *hboxLayout1;
    QLabel *lLayer;
    QG_LayerBox *cbLayer;
    QG_WidgetPen *wPen;
    QGroupBox *bgFont;
    QGridLayout *gridLayout;
    QLineEdit *leWidthRel;
    QLineEdit *leAngle;
    QLabel *lHeight;
    QLabel *lAngle;
    QSpacerItem *spacer2;
    QLineEdit *leHeight;
    QSpacerItem *spacer2_2;
    QLabel *lOblique;
    QLineEdit *leOblique;
    QLabel *lWidthFactor;
    QLabel *lFont;
    QG_FontBox *cbFont;
    QHBoxLayout *horizontalLayout;
    QGroupBox *bgAlignment;
    QGridLayout *gridLayout1;
    QToolButton *bBC;
    QToolButton *bBR;
    QToolButton *bMR;
    QToolButton *bBL;
    QToolButton *bML;
    QToolButton *bLL;
    QToolButton *bTC;
    QToolButton *bLR;
    QToolButton *bLC;
    QToolButton *bTL;
    QToolButton *bTR;
    QToolButton *bMC;
    QRadioButton *rbFit;
    QRadioButton *rbAligned;
    QRadioButton *rbMiddle;
    QHBoxLayout *_2;
    QGroupBox *buttonGroup7;
    QVBoxLayout *vboxLayout1;
    QComboBox *cbSymbol;
    QGroupBox *buttonGroup5;
    QGridLayout *gridLayout2;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QComboBox *cbUniPage;
    QComboBox *cbUniChar;
    QToolButton *bUnicode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QG_DlgText)
    {
        if (QG_DlgText->objectName().isEmpty())
            QG_DlgText->setObjectName(QString::fromUtf8("QG_DlgText"));
        QG_DlgText->resize(524, 346);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_DlgText->sizePolicy().hasHeightForWidth());
        QG_DlgText->setSizePolicy(sizePolicy);
        QG_DlgText->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(QG_DlgText);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _4 = new QVBoxLayout();
        _4->setSpacing(6);
        _4->setObjectName(QString::fromUtf8("_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lText = new QLabel(QG_DlgText);
        lText->setObjectName(QString::fromUtf8("lText"));
        lText->setWordWrap(false);

        hboxLayout->addWidget(lText);

        spacer4 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer4);

        bClear = new QToolButton(QG_DlgText);
        bClear->setObjectName(QString::fromUtf8("bClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/extui/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        bClear->setIcon(icon);

        hboxLayout->addWidget(bClear);

        bLoad = new QToolButton(QG_DlgText);
        bLoad->setObjectName(QString::fromUtf8("bLoad"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/extui/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        bLoad->setIcon(icon1);

        hboxLayout->addWidget(bLoad);

        bSave = new QToolButton(QG_DlgText);
        bSave->setObjectName(QString::fromUtf8("bSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/extui/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        bSave->setIcon(icon2);

        hboxLayout->addWidget(bSave);

        bCut = new QToolButton(QG_DlgText);
        bCut->setObjectName(QString::fromUtf8("bCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/extui/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCut->setIcon(icon3);

        hboxLayout->addWidget(bCut);

        bCopy = new QToolButton(QG_DlgText);
        bCopy->setObjectName(QString::fromUtf8("bCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/extui/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCopy->setIcon(icon4);

        hboxLayout->addWidget(bCopy);

        bPaste = new QToolButton(QG_DlgText);
        bPaste->setObjectName(QString::fromUtf8("bPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/extui/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPaste->setIcon(icon5);

        hboxLayout->addWidget(bPaste);


        _4->addLayout(hboxLayout);

        teText = new QLineEdit(QG_DlgText);
        teText->setObjectName(QString::fromUtf8("teText"));
        teText->setProperty("linkUnderline", QVariant(false));

        _4->addWidget(teText);


        vboxLayout->addLayout(_4);

        _5 = new QHBoxLayout();
        _5->setSpacing(6);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setSizeConstraint(QLayout::SetMinimumSize);
        vlAttributes = new QVBoxLayout();
        vlAttributes->setSpacing(6);
        vlAttributes->setObjectName(QString::fromUtf8("vlAttributes"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lLayer = new QLabel(QG_DlgText);
        lLayer->setObjectName(QString::fromUtf8("lLayer"));
        sizePolicy.setHeightForWidth(lLayer->sizePolicy().hasHeightForWidth());
        lLayer->setSizePolicy(sizePolicy);
        lLayer->setWordWrap(false);

        hboxLayout1->addWidget(lLayer);

        cbLayer = new QG_LayerBox(QG_DlgText);
        cbLayer->setObjectName(QString::fromUtf8("cbLayer"));

        hboxLayout1->addWidget(cbLayer);


        vlAttributes->addLayout(hboxLayout1);

        wPen = new QG_WidgetPen(QG_DlgText);
        wPen->setObjectName(QString::fromUtf8("wPen"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wPen->sizePolicy().hasHeightForWidth());
        wPen->setSizePolicy(sizePolicy1);

        vlAttributes->addWidget(wPen);


        _5->addLayout(vlAttributes);

        bgFont = new QGroupBox(QG_DlgText);
        bgFont->setObjectName(QString::fromUtf8("bgFont"));
        sizePolicy.setHeightForWidth(bgFont->sizePolicy().hasHeightForWidth());
        bgFont->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(bgFont);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leWidthRel = new QLineEdit(bgFont);
        leWidthRel->setObjectName(QString::fromUtf8("leWidthRel"));

        gridLayout->addWidget(leWidthRel, 5, 2, 1, 1);

        leAngle = new QLineEdit(bgFont);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leAngle->sizePolicy().hasHeightForWidth());
        leAngle->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(leAngle, 3, 2, 1, 1);

        lHeight = new QLabel(bgFont);
        lHeight->setObjectName(QString::fromUtf8("lHeight"));
        lHeight->setWordWrap(false);

        gridLayout->addWidget(lHeight, 2, 1, 1, 1);

        lAngle = new QLabel(bgFont);
        lAngle->setObjectName(QString::fromUtf8("lAngle"));

        gridLayout->addWidget(lAngle, 3, 1, 1, 1);

        spacer2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 6, 1, 1, 1);

        leHeight = new QLineEdit(bgFont);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));
        sizePolicy2.setHeightForWidth(leHeight->sizePolicy().hasHeightForWidth());
        leHeight->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(leHeight, 2, 2, 1, 1);

        spacer2_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2_2, 6, 2, 1, 1);

        lOblique = new QLabel(bgFont);
        lOblique->setObjectName(QString::fromUtf8("lOblique"));

        gridLayout->addWidget(lOblique, 4, 1, 1, 1);

        leOblique = new QLineEdit(bgFont);
        leOblique->setObjectName(QString::fromUtf8("leOblique"));

        gridLayout->addWidget(leOblique, 4, 2, 1, 1);

        lWidthFactor = new QLabel(bgFont);
        lWidthFactor->setObjectName(QString::fromUtf8("lWidthFactor"));

        gridLayout->addWidget(lWidthFactor, 5, 1, 1, 1);

        lFont = new QLabel(bgFont);
        lFont->setObjectName(QString::fromUtf8("lFont"));

        gridLayout->addWidget(lFont, 1, 1, 1, 1);

        cbFont = new QG_FontBox(bgFont);
        cbFont->setObjectName(QString::fromUtf8("cbFont"));
        sizePolicy2.setHeightForWidth(cbFont->sizePolicy().hasHeightForWidth());
        cbFont->setSizePolicy(sizePolicy2);
        cbFont->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(cbFont, 1, 2, 1, 1);


        _5->addWidget(bgFont);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(-1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        bgAlignment = new QGroupBox(QG_DlgText);
        bgAlignment->setObjectName(QString::fromUtf8("bgAlignment"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bgAlignment->sizePolicy().hasHeightForWidth());
        bgAlignment->setSizePolicy(sizePolicy3);
        gridLayout1 = new QGridLayout(bgAlignment);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        bBC = new QToolButton(bgAlignment);
        bBC->setObjectName(QString::fromUtf8("bBC"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bBC->sizePolicy().hasHeightForWidth());
        bBC->setSizePolicy(sizePolicy4);
        bBC->setMinimumSize(QSize(25, 25));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/extui/aligntext_bc.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBC->setIcon(icon6);
        bBC->setIconSize(QSize(20, 20));
        bBC->setCheckable(true);

        gridLayout1->addWidget(bBC, 3, 1, 1, 1);

        bBR = new QToolButton(bgAlignment);
        bBR->setObjectName(QString::fromUtf8("bBR"));
        sizePolicy4.setHeightForWidth(bBR->sizePolicy().hasHeightForWidth());
        bBR->setSizePolicy(sizePolicy4);
        bBR->setMinimumSize(QSize(25, 25));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/extui/aligntext_br.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBR->setIcon(icon7);
        bBR->setIconSize(QSize(20, 20));
        bBR->setCheckable(true);

        gridLayout1->addWidget(bBR, 3, 2, 1, 1);

        bMR = new QToolButton(bgAlignment);
        bMR->setObjectName(QString::fromUtf8("bMR"));
        sizePolicy4.setHeightForWidth(bMR->sizePolicy().hasHeightForWidth());
        bMR->setSizePolicy(sizePolicy4);
        bMR->setMinimumSize(QSize(25, 25));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/extui/aligntext_mr.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMR->setIcon(icon8);
        bMR->setIconSize(QSize(20, 20));
        bMR->setCheckable(true);

        gridLayout1->addWidget(bMR, 1, 2, 1, 1);

        bBL = new QToolButton(bgAlignment);
        bBL->setObjectName(QString::fromUtf8("bBL"));
        sizePolicy4.setHeightForWidth(bBL->sizePolicy().hasHeightForWidth());
        bBL->setSizePolicy(sizePolicy4);
        bBL->setMinimumSize(QSize(25, 25));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/extui/aligntext_bl.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBL->setIcon(icon9);
        bBL->setIconSize(QSize(20, 20));
        bBL->setCheckable(true);

        gridLayout1->addWidget(bBL, 3, 0, 1, 1);

        bML = new QToolButton(bgAlignment);
        bML->setObjectName(QString::fromUtf8("bML"));
        sizePolicy4.setHeightForWidth(bML->sizePolicy().hasHeightForWidth());
        bML->setSizePolicy(sizePolicy4);
        bML->setMinimumSize(QSize(25, 25));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/extui/aligntext_ml.png"), QSize(), QIcon::Normal, QIcon::Off);
        bML->setIcon(icon10);
        bML->setIconSize(QSize(20, 20));
        bML->setCheckable(true);

        gridLayout1->addWidget(bML, 1, 0, 1, 1);

        bLL = new QToolButton(bgAlignment);
        bLL->setObjectName(QString::fromUtf8("bLL"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/extui/aligntext_ll.png"), QSize(), QIcon::Normal, QIcon::Off);
        bLL->setIcon(icon11);
        bLL->setIconSize(QSize(20, 20));
        bLL->setCheckable(true);

        gridLayout1->addWidget(bLL, 2, 0, 1, 1);

        bTC = new QToolButton(bgAlignment);
        bTC->setObjectName(QString::fromUtf8("bTC"));
        sizePolicy4.setHeightForWidth(bTC->sizePolicy().hasHeightForWidth());
        bTC->setSizePolicy(sizePolicy4);
        bTC->setMinimumSize(QSize(25, 25));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/extui/aligntext_tc.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTC->setIcon(icon12);
        bTC->setIconSize(QSize(20, 20));
        bTC->setCheckable(true);

        gridLayout1->addWidget(bTC, 0, 1, 1, 1);

        bLR = new QToolButton(bgAlignment);
        bLR->setObjectName(QString::fromUtf8("bLR"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/extui/aligntext_lr.png"), QSize(), QIcon::Normal, QIcon::Off);
        bLR->setIcon(icon13);
        bLR->setIconSize(QSize(20, 20));
        bLR->setCheckable(true);

        gridLayout1->addWidget(bLR, 2, 2, 1, 1);

        bLC = new QToolButton(bgAlignment);
        bLC->setObjectName(QString::fromUtf8("bLC"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/extui/aligntext_lc.png"), QSize(), QIcon::Normal, QIcon::Off);
        bLC->setIcon(icon14);
        bLC->setIconSize(QSize(20, 20));
        bLC->setCheckable(true);

        gridLayout1->addWidget(bLC, 2, 1, 1, 1);

        bTL = new QToolButton(bgAlignment);
        bTL->setObjectName(QString::fromUtf8("bTL"));
        sizePolicy4.setHeightForWidth(bTL->sizePolicy().hasHeightForWidth());
        bTL->setSizePolicy(sizePolicy4);
        bTL->setMinimumSize(QSize(25, 25));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/extui/aligntext_tl.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTL->setIcon(icon15);
        bTL->setIconSize(QSize(20, 20));
        bTL->setCheckable(true);

        gridLayout1->addWidget(bTL, 0, 0, 1, 1);

        bTR = new QToolButton(bgAlignment);
        bTR->setObjectName(QString::fromUtf8("bTR"));
        sizePolicy4.setHeightForWidth(bTR->sizePolicy().hasHeightForWidth());
        bTR->setSizePolicy(sizePolicy4);
        bTR->setMinimumSize(QSize(25, 25));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/extui/aligntext_tr.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTR->setIcon(icon16);
        bTR->setIconSize(QSize(20, 20));
        bTR->setCheckable(true);

        gridLayout1->addWidget(bTR, 0, 2, 1, 1);

        bMC = new QToolButton(bgAlignment);
        bMC->setObjectName(QString::fromUtf8("bMC"));
        sizePolicy4.setHeightForWidth(bMC->sizePolicy().hasHeightForWidth());
        bMC->setSizePolicy(sizePolicy4);
        bMC->setMinimumSize(QSize(25, 25));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/extui/aligntext_mc.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMC->setIcon(icon17);
        bMC->setIconSize(QSize(20, 20));
        bMC->setCheckable(true);

        gridLayout1->addWidget(bMC, 1, 1, 1, 1);

        rbFit = new QRadioButton(bgAlignment);
        rbFit->setObjectName(QString::fromUtf8("rbFit"));
        rbFit->setAutoExclusive(false);

        gridLayout1->addWidget(rbFit, 0, 3, 1, 1);

        rbAligned = new QRadioButton(bgAlignment);
        rbAligned->setObjectName(QString::fromUtf8("rbAligned"));
        rbAligned->setAutoExclusive(false);

        gridLayout1->addWidget(rbAligned, 1, 3, 1, 1);

        rbMiddle = new QRadioButton(bgAlignment);
        rbMiddle->setObjectName(QString::fromUtf8("rbMiddle"));
        rbMiddle->setAutoExclusive(false);

        gridLayout1->addWidget(rbMiddle, 2, 3, 1, 1);


        horizontalLayout->addWidget(bgAlignment);


        _5->addLayout(horizontalLayout);


        vboxLayout->addLayout(_5);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        buttonGroup7 = new QGroupBox(QG_DlgText);
        buttonGroup7->setObjectName(QString::fromUtf8("buttonGroup7"));
        sizePolicy.setHeightForWidth(buttonGroup7->sizePolicy().hasHeightForWidth());
        buttonGroup7->setSizePolicy(sizePolicy);
        buttonGroup7->setMinimumSize(QSize(148, 0));
        vboxLayout1 = new QVBoxLayout(buttonGroup7);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        cbSymbol = new QComboBox(buttonGroup7);
        cbSymbol->setObjectName(QString::fromUtf8("cbSymbol"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cbSymbol->sizePolicy().hasHeightForWidth());
        cbSymbol->setSizePolicy(sizePolicy5);

        vboxLayout1->addWidget(cbSymbol);


        _2->addWidget(buttonGroup7);

        buttonGroup5 = new QGroupBox(QG_DlgText);
        buttonGroup5->setObjectName(QString::fromUtf8("buttonGroup5"));
        gridLayout2 = new QGridLayout(buttonGroup5);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel1 = new QLabel(buttonGroup5);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_2 = new QLabel(buttonGroup5);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_2, 1, 0, 1, 1);

        cbUniPage = new QComboBox(buttonGroup5);
        cbUniPage->setObjectName(QString::fromUtf8("cbUniPage"));
        sizePolicy5.setHeightForWidth(cbUniPage->sizePolicy().hasHeightForWidth());
        cbUniPage->setSizePolicy(sizePolicy5);
        cbUniPage->setMinimumSize(QSize(280, 0));

        gridLayout2->addWidget(cbUniPage, 0, 1, 1, 1);

        cbUniChar = new QComboBox(buttonGroup5);
        cbUniChar->setObjectName(QString::fromUtf8("cbUniChar"));
        sizePolicy5.setHeightForWidth(cbUniChar->sizePolicy().hasHeightForWidth());
        cbUniChar->setSizePolicy(sizePolicy5);
        cbUniChar->setMinimumSize(QSize(92, 0));

        gridLayout2->addWidget(cbUniChar, 1, 1, 1, 1);

        bUnicode = new QToolButton(buttonGroup5);
        bUnicode->setObjectName(QString::fromUtf8("bUnicode"));
        sizePolicy4.setHeightForWidth(bUnicode->sizePolicy().hasHeightForWidth());
        bUnicode->setSizePolicy(sizePolicy4);
        bUnicode->setMinimumSize(QSize(25, 25));
        bUnicode->setMaximumSize(QSize(25, 25));

        gridLayout2->addWidget(bUnicode, 0, 2, 1, 1);


        _2->addWidget(buttonGroup5);


        vboxLayout->addLayout(_2);

        buttonBox = new QDialogButtonBox(QG_DlgText);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lHeight->setBuddy(leHeight);
#endif // QT_NO_SHORTCUT

        retranslateUi(QG_DlgText);
        QObject::connect(buttonBox, SIGNAL(accepted()), QG_DlgText, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QG_DlgText, SLOT(reject()));
        QObject::connect(cbUniPage, SIGNAL(activated(int)), QG_DlgText, SLOT(updateUniCharComboBox(int)));
        QObject::connect(bUnicode, SIGNAL(clicked()), QG_DlgText, SLOT(insertChar()));
        QObject::connect(cbUniPage, SIGNAL(activated(int)), QG_DlgText, SLOT(updateUniCharButton(int)));
        QObject::connect(cbUniChar, SIGNAL(activated(int)), QG_DlgText, SLOT(updateUniCharButton(int)));
        QObject::connect(cbSymbol, SIGNAL(activated(int)), QG_DlgText, SLOT(insertSymbol(int)));
        QObject::connect(bCopy, SIGNAL(clicked()), teText, SLOT(copy()));
        QObject::connect(bClear, SIGNAL(clicked()), teText, SLOT(clear()));
        QObject::connect(bCut, SIGNAL(clicked()), teText, SLOT(cut()));
        QObject::connect(bPaste, SIGNAL(clicked()), teText, SLOT(paste()));
        QObject::connect(bSave, SIGNAL(clicked()), QG_DlgText, SLOT(saveText()));
        QObject::connect(bLoad, SIGNAL(clicked()), QG_DlgText, SLOT(loadText()));
        QObject::connect(bMC, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentMC()));
        QObject::connect(bMR, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentMR()));
        QObject::connect(bBR, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentBR()));
        QObject::connect(bBL, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentBL()));
        QObject::connect(bTL, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentTL()));
        QObject::connect(bBC, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentBC()));
        QObject::connect(bTC, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentTC()));
        QObject::connect(bLC, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentLC()));
        QObject::connect(bLL, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentLL()));
        QObject::connect(bLR, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentLR()));
        QObject::connect(bML, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentML()));
        QObject::connect(bTR, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentTR()));
        QObject::connect(rbFit, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentFit()));
        QObject::connect(rbAligned, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentAlign()));
        QObject::connect(rbMiddle, SIGNAL(clicked()), QG_DlgText, SLOT(setAlignmentMiddle()));

        QMetaObject::connectSlotsByName(QG_DlgText);
    } // setupUi

    void retranslateUi(QDialog *QG_DlgText)
    {
        QG_DlgText->setWindowTitle(QApplication::translate("QG_DlgText", "Text", 0, QApplication::UnicodeUTF8));
        lText->setText(QApplication::translate("QG_DlgText", "Text:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bClear->setToolTip(QApplication::translate("QG_DlgText", "Clear Text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        bLoad->setToolTip(QApplication::translate("QG_DlgText", "Load Text From File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bLoad->setText(QString());
#ifndef QT_NO_TOOLTIP
        bSave->setToolTip(QApplication::translate("QG_DlgText", "Save Text To File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCut->setToolTip(QApplication::translate("QG_DlgText", "Cut", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCut->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCopy->setToolTip(QApplication::translate("QG_DlgText", "Copy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCopy->setText(QString());
#ifndef QT_NO_TOOLTIP
        bPaste->setToolTip(QApplication::translate("QG_DlgText", "Paste", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bPaste->setText(QString());
        lLayer->setText(QApplication::translate("QG_DlgText", "Layer:", 0, QApplication::UnicodeUTF8));
        bgFont->setTitle(QApplication::translate("QG_DlgText", "Font settings", 0, QApplication::UnicodeUTF8));
        lHeight->setText(QApplication::translate("QG_DlgText", "&Height:", 0, QApplication::UnicodeUTF8));
        lAngle->setText(QApplication::translate("QG_DlgText", "Angle:", 0, QApplication::UnicodeUTF8));
        lOblique->setText(QApplication::translate("QG_DlgText", "Oblique:", 0, QApplication::UnicodeUTF8));
        lWidthFactor->setText(QApplication::translate("QG_DlgText", "Width factor:", 0, QApplication::UnicodeUTF8));
        lFont->setText(QApplication::translate("QG_DlgText", "Font:", 0, QApplication::UnicodeUTF8));
        bgAlignment->setTitle(QApplication::translate("QG_DlgText", "Alignment", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBC->setToolTip(QApplication::translate("QG_DlgText", "Bottom Center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBC->setText(QString());
#ifndef QT_NO_TOOLTIP
        bBR->setToolTip(QApplication::translate("QG_DlgText", "Bottom Right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBR->setText(QString());
#ifndef QT_NO_TOOLTIP
        bMR->setToolTip(QApplication::translate("QG_DlgText", "Middle Right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bMR->setText(QString());
#ifndef QT_NO_TOOLTIP
        bBL->setToolTip(QApplication::translate("QG_DlgText", "Bottom Left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBL->setText(QString());
#ifndef QT_NO_TOOLTIP
        bML->setToolTip(QApplication::translate("QG_DlgText", "Middle Left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bML->setText(QString());
#ifndef QT_NO_TOOLTIP
        bLL->setToolTip(QApplication::translate("QG_DlgText", "Baseline Left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bLL->setText(QApplication::translate("QG_DlgText", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bTC->setToolTip(QApplication::translate("QG_DlgText", "Top Center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTC->setText(QString());
#ifndef QT_NO_TOOLTIP
        bLR->setToolTip(QApplication::translate("QG_DlgText", "Baseline Right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bLR->setText(QApplication::translate("QG_DlgText", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bLC->setToolTip(QApplication::translate("QG_DlgText", "Baseline Center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bLC->setText(QApplication::translate("QG_DlgText", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bTL->setToolTip(QApplication::translate("QG_DlgText", "Top Left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTL->setText(QString());
#ifndef QT_NO_TOOLTIP
        bTR->setToolTip(QApplication::translate("QG_DlgText", "Top Right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTR->setText(QString());
#ifndef QT_NO_TOOLTIP
        bMC->setToolTip(QApplication::translate("QG_DlgText", "Middle Center", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bMC->setText(QString());
        rbFit->setText(QApplication::translate("QG_DlgText", "Fit", 0, QApplication::UnicodeUTF8));
        rbAligned->setText(QApplication::translate("QG_DlgText", "Aligned", 0, QApplication::UnicodeUTF8));
        rbMiddle->setText(QApplication::translate("QG_DlgText", "Middle", 0, QApplication::UnicodeUTF8));
        buttonGroup7->setTitle(QApplication::translate("QG_DlgText", "Insert Symbol", 0, QApplication::UnicodeUTF8));
        cbSymbol->clear();
        cbSymbol->insertItems(0, QStringList()
         << QApplication::translate("QG_DlgText", "Diameter (\303\270)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Degree (\302\260)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Plus / Minus (\302\261)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "At (@)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Hash (#)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Dollar ($)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Copyright (\302\251)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Registered (\302\256)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Paragraph (\302\247)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Pi (\317\200)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Pound (\302\243)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Yen (\302\245)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Times (\303\227)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "Division (\303\267)", 0, QApplication::UnicodeUTF8)
        );
        buttonGroup5->setTitle(QApplication::translate("QG_DlgText", "Insert Unicode", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QG_DlgText", "Page:", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("QG_DlgText", "Char:", 0, QApplication::UnicodeUTF8));
        cbUniPage->clear();
        cbUniPage->insertItems(0, QStringList()
         << QApplication::translate("QG_DlgText", "[0000-007F] Basic Latin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0080-00FF] Latin-1 Supplementary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0100-017F] Latin Extended-A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0180-024F] Latin Extended-B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0250-02AF] IPA Extensions", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[02B0-02FF] Spacing Modifier Letters", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0300-036F] Combining Diacritical Marks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0370-03FF] Greek and Coptic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0400-04FF] Cyrillic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0500-052F] Cyrillic Supplementary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0530-058F] Armenian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0590-05FF] Hebrew", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0600-06FF] Arabic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0700-074F] Syriac", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0780-07BF] Thaana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0900-097F] Devanagari", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0980-09FF] Bengali", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0A00-0A7F] Gurmukhi", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0A80-0AFF] Gujarati", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0B00-0B7F] Oriya", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0B80-0BFF] Tamil", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0C00-0C7F] Telugu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0C80-0CFF] Kannada", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0D00-0D7F] Malayalam", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0D80-0DFF] Sinhala", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0E00-0E7F] Thai", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0E80-0EFF] Lao", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[0F00-0FFF] Tibetan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1000-109F] Myanmar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[10A0-10FF] Georgian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1100-11FF] Hangul Jamo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1200-137F] Ethiopic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[13A0-13FF] Cherokee", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1400-167F] Unified Canadian Aboriginal Syllabic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1680-169F] Ogham", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[16A0-16FF] Runic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1700-171F] Tagalog", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1720-173F] Hanunoo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1740-175F] Buhid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1760-177F] Tagbanwa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1780-17FF] Khmer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1800-18AF] Mongolian", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1E00-1EFF] Latin Extended Additional", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1F00-1FFF] Greek Extended", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2000-206F] General Punctuation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2070-209F] Superscripts and Subscripts", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[20A0-20CF] Currency Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[20D0-20FF] Combining Marks for Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2100-214F] Letterlike Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2150-218F] Number Forms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2190-21FF] Arrows", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2200-22FF] Mathematical Operators", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2300-23FF] Miscellaneous Technical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2400-243F] Control Pictures", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2440-245F] Optical Character Recognition", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2460-24FF] Enclosed Alphanumerics", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2500-257F] Box Drawing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2580-259F] Block Elements", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[25A0-25FF] Geometric Shapes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2600-26FF] Miscellaneous Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2700-27BF] Dingbats", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[27C0-27EF] Miscellaneous Mathematical Symbols-A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[27F0-27FF] Supplemental Arrows-A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2800-28FF] Braille Patterns", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2900-297F] Supplemental Arrows-B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2980-29FF] Miscellaneous Mathematical Symbols-B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2A00-2AFF] Supplemental Mathematical Operators", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2E80-2EFF] CJK Radicals Supplement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2F00-2FDF] Kangxi Radicals", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2FF0-2FFF] Ideographic Description Characters", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3000-303F] CJK Symbols and Punctuation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3040-309F] Hiragana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[30A0-30FF] Katakana", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3100-312F] Bopomofo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3130-318F] Hangul Compatibility Jamo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3190-319F] Kanbun", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[31A0-31BF] Bopomofo Extended", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3200-32FF] Enclosed CJK Letters and Months", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3300-33FF] CJK Compatibility", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[3400-4DBF] CJK Unified Ideographs Extension A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[4E00-9FAF] CJK Unified Ideographs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[A000-A48F] Yi Syllables", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[A490-A4CF] Yi Radicals", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[AC00-D7AF] Hangul Syllables", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[D800-DBFF] High Surrogates", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[DC00-DFFF] Low Surrogate Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[E000-F8FF] Private Use Area", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[F900-FAFF] CJK Compatibility Ideographs", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FB00-FB4F] Alphabetic Presentation Forms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FB50-FDFF] Arabic Presentation Forms-A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FE00-FE0F] Variation Selectors", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FE20-FE2F] Combining Half Marks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FE30-FE4F] CJK Compatibility Forms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FE50-FE6F] Small Form Variants", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FE70-FEFF] Arabic Presentation Forms-B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FF00-FFEF] Halfwidth and Fullwidth Forms", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[FFF0-FFFF] Specials", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[10300-1032F] Old Italic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[10330-1034F] Gothic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[10400-1044F] Deseret", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1D000-1D0FF] Byzantine Musical Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1D100-1D1FF] Musical Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[1D400-1D7FF] Mathematical Alphanumeric Symbols", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[20000-2A6DF] CJK Unified Ideographs Extension B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[2F800-2FA1F] CJK Compatibility Ideographs Supplement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[E0000-E007F] Tags", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[F0000-FFFFD] Supplementary Private Use Area-A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QG_DlgText", "[100000-10FFFD] Supplementary Private Use Area-B", 0, QApplication::UnicodeUTF8)
        );
        bUnicode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QG_DlgText: public Ui_QG_DlgText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_DLGTEXT_H
