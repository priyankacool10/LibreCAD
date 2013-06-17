/********************************************************************************
** Form generated from reading UI file 'qg_layerdialog.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_LAYERDIALOG_H
#define UI_QG_LAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include "qg_widgetpen.h"

QT_BEGIN_NAMESPACE

class Ui_QG_LayerDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbHelpLayer;
    QLabel *lName;
    QDialogButtonBox *buttonBox;
    QG_WidgetPen *wPen;
    QSpacerItem *spacer87;
    QLineEdit *leName;

    void setupUi(QDialog *QG_LayerDialog)
    {
        if (QG_LayerDialog->objectName().isEmpty())
            QG_LayerDialog->setObjectName(QString::fromUtf8("QG_LayerDialog"));
        QG_LayerDialog->resize(253, 203);
        QG_LayerDialog->setBaseSize(QSize(0, 0));
        QG_LayerDialog->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(QG_LayerDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbHelpLayer = new QCheckBox(QG_LayerDialog);
        cbHelpLayer->setObjectName(QString::fromUtf8("cbHelpLayer"));

        gridLayout->addWidget(cbHelpLayer, 1, 2, 1, 1);

        lName = new QLabel(QG_LayerDialog);
        lName->setObjectName(QString::fromUtf8("lName"));
        lName->setFrameShape(QFrame::NoFrame);
        lName->setFrameShadow(QFrame::Plain);
        lName->setWordWrap(false);

        gridLayout->addWidget(lName, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QG_LayerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);

        wPen = new QG_WidgetPen(QG_LayerDialog);
        wPen->setObjectName(QString::fromUtf8("wPen"));

        gridLayout->addWidget(wPen, 2, 0, 1, 3);

        spacer87 = new QSpacerItem(5, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer87, 0, 1, 1, 1);

        leName = new QLineEdit(QG_LayerDialog);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 0, 2, 1, 1);


        retranslateUi(QG_LayerDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QG_LayerDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QG_LayerDialog, SLOT(validate()));

        QMetaObject::connectSlotsByName(QG_LayerDialog);
    } // setupUi

    void retranslateUi(QDialog *QG_LayerDialog)
    {
        QG_LayerDialog->setWindowTitle(QApplication::translate("QG_LayerDialog", "Layer Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbHelpLayer->setToolTip(QApplication::translate("QG_LayerDialog", "A Help Layer has entities of infinite straight lines intended to be used for geometric construction.\n"
"The contents of a Help Layer should not appear in printout.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbHelpLayer->setText(QApplication::translate("QG_LayerDialog", "Help Layer", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("QG_LayerDialog", "Layer Name:", 0, QApplication::UnicodeUTF8));
        leName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QG_LayerDialog: public Ui_QG_LayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_LAYERDIALOG_H