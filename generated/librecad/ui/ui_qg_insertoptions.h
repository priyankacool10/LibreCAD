/********************************************************************************
** Form generated from reading UI file 'qg_insertoptions.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_INSERTOPTIONS_H
#define UI_QG_INSERTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_InsertOptions
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *lAngle;
    QLineEdit *leAngle;
    QLabel *lFactor;
    QLineEdit *leFactor;
    QFrame *sep1_2;
    QLabel *lArray;
    QSpinBox *sbColumns;
    QSpinBox *sbRows;
    QLabel *lSpacing;
    QLineEdit *leColumnSpacing;
    QLineEdit *leRowSpacing;
    QFrame *sep1;

    void setupUi(QWidget *QG_InsertOptions)
    {
        if (QG_InsertOptions->objectName().isEmpty())
            QG_InsertOptions->setObjectName(QString::fromUtf8("QG_InsertOptions"));
        QG_InsertOptions->resize(450, 26);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_InsertOptions->sizePolicy().hasHeightForWidth());
        QG_InsertOptions->setSizePolicy(sizePolicy);
        QG_InsertOptions->setMinimumSize(QSize(50, 22));
        QG_InsertOptions->setMaximumSize(QSize(600, 32));
        hboxLayout = new QHBoxLayout(QG_InsertOptions);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lAngle = new QLabel(QG_InsertOptions);
        lAngle->setObjectName(QString::fromUtf8("lAngle"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lAngle->sizePolicy().hasHeightForWidth());
        lAngle->setSizePolicy(sizePolicy1);
        lAngle->setMinimumSize(QSize(36, 0));
        lAngle->setWordWrap(false);

        hboxLayout->addWidget(lAngle);

        leAngle = new QLineEdit(QG_InsertOptions);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leAngle->sizePolicy().hasHeightForWidth());
        leAngle->setSizePolicy(sizePolicy2);
        leAngle->setMinimumSize(QSize(32, 0));

        hboxLayout->addWidget(leAngle);

        lFactor = new QLabel(QG_InsertOptions);
        lFactor->setObjectName(QString::fromUtf8("lFactor"));
        sizePolicy1.setHeightForWidth(lFactor->sizePolicy().hasHeightForWidth());
        lFactor->setSizePolicy(sizePolicy1);
        lFactor->setMinimumSize(QSize(40, 0));
        lFactor->setWordWrap(false);

        hboxLayout->addWidget(lFactor);

        leFactor = new QLineEdit(QG_InsertOptions);
        leFactor->setObjectName(QString::fromUtf8("leFactor"));
        sizePolicy2.setHeightForWidth(leFactor->sizePolicy().hasHeightForWidth());
        leFactor->setSizePolicy(sizePolicy2);
        leFactor->setMinimumSize(QSize(32, 0));

        hboxLayout->addWidget(leFactor);

        sep1_2 = new QFrame(QG_InsertOptions);
        sep1_2->setObjectName(QString::fromUtf8("sep1_2"));
        sizePolicy.setHeightForWidth(sep1_2->sizePolicy().hasHeightForWidth());
        sep1_2->setSizePolicy(sizePolicy);
        sep1_2->setFrameShape(QFrame::VLine);
        sep1_2->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1_2);

        lArray = new QLabel(QG_InsertOptions);
        lArray->setObjectName(QString::fromUtf8("lArray"));
        sizePolicy1.setHeightForWidth(lArray->sizePolicy().hasHeightForWidth());
        lArray->setSizePolicy(sizePolicy1);
        lArray->setMinimumSize(QSize(34, 0));
        lArray->setWordWrap(false);

        hboxLayout->addWidget(lArray);

        sbColumns = new QSpinBox(QG_InsertOptions);
        sbColumns->setObjectName(QString::fromUtf8("sbColumns"));
        sizePolicy2.setHeightForWidth(sbColumns->sizePolicy().hasHeightForWidth());
        sbColumns->setSizePolicy(sizePolicy2);
        sbColumns->setMinimumSize(QSize(34, 0));
        sbColumns->setMinimum(1);
        sbColumns->setMaximum(10000);

        hboxLayout->addWidget(sbColumns);

        sbRows = new QSpinBox(QG_InsertOptions);
        sbRows->setObjectName(QString::fromUtf8("sbRows"));
        sizePolicy2.setHeightForWidth(sbRows->sizePolicy().hasHeightForWidth());
        sbRows->setSizePolicy(sizePolicy2);
        sbRows->setMinimumSize(QSize(34, 0));
        sbRows->setMinimum(1);
        sbRows->setMaximum(10000);

        hboxLayout->addWidget(sbRows);

        lSpacing = new QLabel(QG_InsertOptions);
        lSpacing->setObjectName(QString::fromUtf8("lSpacing"));
        sizePolicy1.setHeightForWidth(lSpacing->sizePolicy().hasHeightForWidth());
        lSpacing->setSizePolicy(sizePolicy1);
        lSpacing->setMinimumSize(QSize(50, 0));
        lSpacing->setWordWrap(false);

        hboxLayout->addWidget(lSpacing);

        leColumnSpacing = new QLineEdit(QG_InsertOptions);
        leColumnSpacing->setObjectName(QString::fromUtf8("leColumnSpacing"));
        sizePolicy2.setHeightForWidth(leColumnSpacing->sizePolicy().hasHeightForWidth());
        leColumnSpacing->setSizePolicy(sizePolicy2);
        leColumnSpacing->setMinimumSize(QSize(32, 0));

        hboxLayout->addWidget(leColumnSpacing);

        leRowSpacing = new QLineEdit(QG_InsertOptions);
        leRowSpacing->setObjectName(QString::fromUtf8("leRowSpacing"));
        sizePolicy2.setHeightForWidth(leRowSpacing->sizePolicy().hasHeightForWidth());
        leRowSpacing->setSizePolicy(sizePolicy2);
        leRowSpacing->setMinimumSize(QSize(32, 0));

        hboxLayout->addWidget(leRowSpacing);

        sep1 = new QFrame(QG_InsertOptions);
        sep1->setObjectName(QString::fromUtf8("sep1"));
        sizePolicy.setHeightForWidth(sep1->sizePolicy().hasHeightForWidth());
        sep1->setSizePolicy(sizePolicy);
        sep1->setFrameShape(QFrame::VLine);
        sep1->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1);


        retranslateUi(QG_InsertOptions);
        QObject::connect(leAngle, SIGNAL(textChanged(QString)), QG_InsertOptions, SLOT(updateData()));
        QObject::connect(leFactor, SIGNAL(textChanged(QString)), QG_InsertOptions, SLOT(updateData()));
        QObject::connect(sbColumns, SIGNAL(valueChanged(int)), QG_InsertOptions, SLOT(updateData()));
        QObject::connect(sbRows, SIGNAL(valueChanged(int)), QG_InsertOptions, SLOT(updateData()));
        QObject::connect(leColumnSpacing, SIGNAL(textChanged(QString)), QG_InsertOptions, SLOT(updateData()));
        QObject::connect(leRowSpacing, SIGNAL(textChanged(QString)), QG_InsertOptions, SLOT(updateData()));

        QMetaObject::connectSlotsByName(QG_InsertOptions);
    } // setupUi

    void retranslateUi(QWidget *QG_InsertOptions)
    {
        QG_InsertOptions->setWindowTitle(QApplication::translate("QG_InsertOptions", "Insert Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QG_InsertOptions->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lAngle->setText(QApplication::translate("QG_InsertOptions", "Angle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leAngle->setToolTip(QApplication::translate("QG_InsertOptions", "Rotation Angle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lFactor->setText(QApplication::translate("QG_InsertOptions", "Factor:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leFactor->setToolTip(QApplication::translate("QG_InsertOptions", "Scale Factor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lArray->setText(QApplication::translate("QG_InsertOptions", "Array:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbColumns->setToolTip(QApplication::translate("QG_InsertOptions", "Number of Columns", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sbRows->setToolTip(QApplication::translate("QG_InsertOptions", "Number of Rows", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lSpacing->setText(QApplication::translate("QG_InsertOptions", "Spacing:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leColumnSpacing->setToolTip(QApplication::translate("QG_InsertOptions", "Column Spacing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        leRowSpacing->setToolTip(QApplication::translate("QG_InsertOptions", "Row Spacing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QG_InsertOptions: public Ui_QG_InsertOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_INSERTOPTIONS_H
