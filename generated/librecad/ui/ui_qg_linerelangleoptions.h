/********************************************************************************
** Form generated from reading UI file 'qg_linerelangleoptions.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_LINERELANGLEOPTIONS_H
#define UI_QG_LINERELANGLEOPTIONS_H

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

class Ui_QG_LineRelAngleOptions
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *lAngle;
    QLineEdit *leAngle;
    QLabel *lLength;
    QLineEdit *leLength;
    QFrame *sep1;

    void setupUi(QWidget *QG_LineRelAngleOptions)
    {
        if (QG_LineRelAngleOptions->objectName().isEmpty())
            QG_LineRelAngleOptions->setObjectName(QString::fromUtf8("QG_LineRelAngleOptions"));
        QG_LineRelAngleOptions->resize(280, 24);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_LineRelAngleOptions->sizePolicy().hasHeightForWidth());
        QG_LineRelAngleOptions->setSizePolicy(sizePolicy);
        QG_LineRelAngleOptions->setMinimumSize(QSize(200, 22));
        QG_LineRelAngleOptions->setMaximumSize(QSize(280, 32767));
        hboxLayout = new QHBoxLayout(QG_LineRelAngleOptions);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lAngle = new QLabel(QG_LineRelAngleOptions);
        lAngle->setObjectName(QString::fromUtf8("lAngle"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lAngle->sizePolicy().hasHeightForWidth());
        lAngle->setSizePolicy(sizePolicy1);
        lAngle->setWordWrap(false);

        hboxLayout->addWidget(lAngle);

        leAngle = new QLineEdit(QG_LineRelAngleOptions);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leAngle->sizePolicy().hasHeightForWidth());
        leAngle->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(leAngle);

        lLength = new QLabel(QG_LineRelAngleOptions);
        lLength->setObjectName(QString::fromUtf8("lLength"));
        sizePolicy1.setHeightForWidth(lLength->sizePolicy().hasHeightForWidth());
        lLength->setSizePolicy(sizePolicy1);
        lLength->setWordWrap(false);

        hboxLayout->addWidget(lLength);

        leLength = new QLineEdit(QG_LineRelAngleOptions);
        leLength->setObjectName(QString::fromUtf8("leLength"));
        sizePolicy2.setHeightForWidth(leLength->sizePolicy().hasHeightForWidth());
        leLength->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(leLength);

        sep1 = new QFrame(QG_LineRelAngleOptions);
        sep1->setObjectName(QString::fromUtf8("sep1"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sep1->sizePolicy().hasHeightForWidth());
        sep1->setSizePolicy(sizePolicy3);
        sep1->setFrameShape(QFrame::VLine);
        sep1->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1);


        retranslateUi(QG_LineRelAngleOptions);
        QObject::connect(leAngle, SIGNAL(textChanged(QString)), QG_LineRelAngleOptions, SLOT(updateAngle(QString)));
        QObject::connect(leLength, SIGNAL(textChanged(QString)), QG_LineRelAngleOptions, SLOT(updateLength(QString)));

        QMetaObject::connectSlotsByName(QG_LineRelAngleOptions);
    } // setupUi

    void retranslateUi(QWidget *QG_LineRelAngleOptions)
    {
        QG_LineRelAngleOptions->setWindowTitle(QApplication::translate("QG_LineRelAngleOptions", "Line Relative Angle Options", 0, QApplication::UnicodeUTF8));
        lAngle->setText(QApplication::translate("QG_LineRelAngleOptions", "Angle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leAngle->setToolTip(QApplication::translate("QG_LineRelAngleOptions", "Line angle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lLength->setText(QApplication::translate("QG_LineRelAngleOptions", "Length:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leLength->setToolTip(QApplication::translate("QG_LineRelAngleOptions", "Length of line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QG_LineRelAngleOptions: public Ui_QG_LineRelAngleOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_LINERELANGLEOPTIONS_H
