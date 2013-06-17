/********************************************************************************
** Form generated from reading UI file 'qg_imageoptions.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_IMAGEOPTIONS_H
#define UI_QG_IMAGEOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_ImageOptions
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *lAngle;
    QLineEdit *leAngle;
    QLabel *lFactor;
    QLineEdit *leFactor;
    QLabel *lDPI;
    QLineEdit *leDPI;
    QFrame *sep1_2;

    void setupUi(QWidget *QG_ImageOptions)
    {
        if (QG_ImageOptions->objectName().isEmpty())
            QG_ImageOptions->setObjectName(QString::fromUtf8("QG_ImageOptions"));
        QG_ImageOptions->resize(250, 24);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_ImageOptions->sizePolicy().hasHeightForWidth());
        QG_ImageOptions->setSizePolicy(sizePolicy);
        QG_ImageOptions->setMinimumSize(QSize(200, 22));
        QG_ImageOptions->setMaximumSize(QSize(250, 32767));
        hboxLayout = new QHBoxLayout(QG_ImageOptions);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lAngle = new QLabel(QG_ImageOptions);
        lAngle->setObjectName(QString::fromUtf8("lAngle"));
        lAngle->setWordWrap(false);

        hboxLayout->addWidget(lAngle);

        leAngle = new QLineEdit(QG_ImageOptions);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));

        hboxLayout->addWidget(leAngle);

        lFactor = new QLabel(QG_ImageOptions);
        lFactor->setObjectName(QString::fromUtf8("lFactor"));
        lFactor->setWordWrap(false);

        hboxLayout->addWidget(lFactor);

        leFactor = new QLineEdit(QG_ImageOptions);
        leFactor->setObjectName(QString::fromUtf8("leFactor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leFactor->sizePolicy().hasHeightForWidth());
        leFactor->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(leFactor);

        lDPI = new QLabel(QG_ImageOptions);
        lDPI->setObjectName(QString::fromUtf8("lDPI"));

        hboxLayout->addWidget(lDPI);

        leDPI = new QLineEdit(QG_ImageOptions);
        leDPI->setObjectName(QString::fromUtf8("leDPI"));

        hboxLayout->addWidget(leDPI);

        sep1_2 = new QFrame(QG_ImageOptions);
        sep1_2->setObjectName(QString::fromUtf8("sep1_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sep1_2->sizePolicy().hasHeightForWidth());
        sep1_2->setSizePolicy(sizePolicy2);
        sep1_2->setFrameShape(QFrame::VLine);
        sep1_2->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1_2);


        retranslateUi(QG_ImageOptions);
        QObject::connect(leAngle, SIGNAL(textChanged(QString)), QG_ImageOptions, SLOT(updateData()));
        QObject::connect(leDPI, SIGNAL(textChanged(QString)), QG_ImageOptions, SLOT(updateDPI()));
        QObject::connect(leFactor, SIGNAL(textChanged(QString)), QG_ImageOptions, SLOT(updateFactor()));

        QMetaObject::connectSlotsByName(QG_ImageOptions);
    } // setupUi

    void retranslateUi(QWidget *QG_ImageOptions)
    {
        QG_ImageOptions->setWindowTitle(QApplication::translate("QG_ImageOptions", "Insert Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QG_ImageOptions->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lAngle->setText(QApplication::translate("QG_ImageOptions", "Angle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leAngle->setToolTip(QApplication::translate("QG_ImageOptions", "Rotation Angle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lFactor->setText(QApplication::translate("QG_ImageOptions", "Factor:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leFactor->setToolTip(QApplication::translate("QG_ImageOptions", "Scale Factor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lDPI->setText(QApplication::translate("QG_ImageOptions", "DPI", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leDPI->setToolTip(QApplication::translate("QG_ImageOptions", "DPI of Image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QG_ImageOptions: public Ui_QG_ImageOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_IMAGEOPTIONS_H
