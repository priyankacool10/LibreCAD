/********************************************************************************
** Form generated from reading UI file 'qg_printpreviewoptions.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_PRINTPREVIEWOPTIONS_H
#define UI_QG_PRINTPREVIEWOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_PrintPreviewOptions
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *cbScale;
    QCheckBox *cFixed;
    QToolButton *bBlackWhite;
    QToolButton *bCenter;
    QToolButton *bFit;
    QFrame *sep1_2;

    void setupUi(QWidget *QG_PrintPreviewOptions)
    {
        if (QG_PrintPreviewOptions->objectName().isEmpty())
            QG_PrintPreviewOptions->setObjectName(QString::fromUtf8("QG_PrintPreviewOptions"));
        QG_PrintPreviewOptions->resize(280, 32);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_PrintPreviewOptions->sizePolicy().hasHeightForWidth());
        QG_PrintPreviewOptions->setSizePolicy(sizePolicy);
        QG_PrintPreviewOptions->setMinimumSize(QSize(280, 22));
        horizontalLayout = new QHBoxLayout(QG_PrintPreviewOptions);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 0, 1, 0);
        cbScale = new QComboBox(QG_PrintPreviewOptions);
        cbScale->setObjectName(QString::fromUtf8("cbScale"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbScale->sizePolicy().hasHeightForWidth());
        cbScale->setSizePolicy(sizePolicy1);
        cbScale->setMinimumSize(QSize(110, 0));
        cbScale->setEditable(true);

        horizontalLayout->addWidget(cbScale);

        cFixed = new QCheckBox(QG_PrintPreviewOptions);
        cFixed->setObjectName(QString::fromUtf8("cFixed"));
        cFixed->setMinimumSize(QSize(25, 16));
        cFixed->setMaximumSize(QSize(54, 32));

        horizontalLayout->addWidget(cFixed);

        bBlackWhite = new QToolButton(QG_PrintPreviewOptions);
        bBlackWhite->setObjectName(QString::fromUtf8("bBlackWhite"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bBlackWhite->sizePolicy().hasHeightForWidth());
        bBlackWhite->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/extui/printbw.png"), QSize(), QIcon::Normal, QIcon::Off);
        bBlackWhite->setIcon(icon);
        bBlackWhite->setCheckable(true);

        horizontalLayout->addWidget(bBlackWhite);

        bCenter = new QToolButton(QG_PrintPreviewOptions);
        bCenter->setObjectName(QString::fromUtf8("bCenter"));
        sizePolicy2.setHeightForWidth(bCenter->sizePolicy().hasHeightForWidth());
        bCenter->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/extui/printcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCenter->setIcon(icon1);

        horizontalLayout->addWidget(bCenter);

        bFit = new QToolButton(QG_PrintPreviewOptions);
        bFit->setObjectName(QString::fromUtf8("bFit"));
        sizePolicy2.setHeightForWidth(bFit->sizePolicy().hasHeightForWidth());
        bFit->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/extui/printfit.png"), QSize(), QIcon::Normal, QIcon::Off);
        bFit->setIcon(icon2);

        horizontalLayout->addWidget(bFit);

        sep1_2 = new QFrame(QG_PrintPreviewOptions);
        sep1_2->setObjectName(QString::fromUtf8("sep1_2"));
        sizePolicy2.setHeightForWidth(sep1_2->sizePolicy().hasHeightForWidth());
        sep1_2->setSizePolicy(sizePolicy2);
        sep1_2->setFrameShape(QFrame::VLine);
        sep1_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(sep1_2);


        retranslateUi(QG_PrintPreviewOptions);
        QObject::connect(bCenter, SIGNAL(clicked()), QG_PrintPreviewOptions, SLOT(center()));
        QObject::connect(bBlackWhite, SIGNAL(toggled(bool)), QG_PrintPreviewOptions, SLOT(setBlackWhite(bool)));
        QObject::connect(cbScale, SIGNAL(currentIndexChanged(QString)), QG_PrintPreviewOptions, SLOT(scale(QString)));
        QObject::connect(bFit, SIGNAL(clicked()), QG_PrintPreviewOptions, SLOT(fit()));
        QObject::connect(cFixed, SIGNAL(clicked(bool)), QG_PrintPreviewOptions, SLOT(setScaleFixed(bool)));

        QMetaObject::connectSlotsByName(QG_PrintPreviewOptions);
    } // setupUi

    void retranslateUi(QWidget *QG_PrintPreviewOptions)
    {
        QG_PrintPreviewOptions->setWindowTitle(QApplication::translate("QG_PrintPreviewOptions", "Print Preview Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QG_PrintPreviewOptions->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cFixed->setToolTip(QApplication::translate("QG_PrintPreviewOptions", "<html><head/><body><p>Print Scale is locked to the current value</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cFixed->setText(QApplication::translate("QG_PrintPreviewOptions", "fixed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBlackWhite->setToolTip(QApplication::translate("QG_PrintPreviewOptions", "Toggle Black / White mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBlackWhite->setText(QString());
#ifndef QT_NO_TOOLTIP
        bCenter->setToolTip(QApplication::translate("QG_PrintPreviewOptions", "Center to page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bCenter->setText(QString());
#ifndef QT_NO_TOOLTIP
        bFit->setToolTip(QApplication::translate("QG_PrintPreviewOptions", "Fit to page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bFit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QG_PrintPreviewOptions: public Ui_QG_PrintPreviewOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_PRINTPREVIEWOPTIONS_H
