/********************************************************************************
** Form generated from reading UI file 'qg_exitdialog.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_EXITDIALOG_H
#define UI_QG_EXITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QG_ExitDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lQuestion;
    QLabel *l_icon;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QG_ExitDialog)
    {
        if (QG_ExitDialog->objectName().isEmpty())
            QG_ExitDialog->setObjectName(QString::fromUtf8("QG_ExitDialog"));
        QG_ExitDialog->resize(450, 106);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_ExitDialog->sizePolicy().hasHeightForWidth());
        QG_ExitDialog->setSizePolicy(sizePolicy);
        QG_ExitDialog->setMinimumSize(QSize(450, 0));
        QG_ExitDialog->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(QG_ExitDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lQuestion = new QLabel(QG_ExitDialog);
        lQuestion->setObjectName(QString::fromUtf8("lQuestion"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lQuestion->sizePolicy().hasHeightForWidth());
        lQuestion->setSizePolicy(sizePolicy1);
        lQuestion->setAlignment(Qt::AlignCenter);
        lQuestion->setWordWrap(true);

        gridLayout->addWidget(lQuestion, 0, 1, 1, 1);

        l_icon = new QLabel(QG_ExitDialog);
        l_icon->setObjectName(QString::fromUtf8("l_icon"));
        l_icon->setWordWrap(false);

        gridLayout->addWidget(l_icon, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QG_ExitDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Save|QDialogButtonBox::SaveAll);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


        retranslateUi(QG_ExitDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), QG_ExitDialog, SLOT(clicked(QAbstractButton*)));

        QMetaObject::connectSlotsByName(QG_ExitDialog);
    } // setupUi

    void retranslateUi(QDialog *QG_ExitDialog)
    {
        QG_ExitDialog->setWindowTitle(QApplication::translate("QG_ExitDialog", "QCad", 0, QApplication::UnicodeUTF8));
        lQuestion->setText(QApplication::translate("QG_ExitDialog", "again Still No Text supplied.", 0, QApplication::UnicodeUTF8));
        l_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QG_ExitDialog: public Ui_QG_ExitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_EXITDIALOG_H
