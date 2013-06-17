/********************************************************************************
** Form generated from reading UI file 'qg_dlginitial.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_DLGINITIAL_H
#define UI_QG_DLGINITIAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QG_DlgInitial
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lImage;
    QVBoxLayout *vboxLayout1;
    QLabel *lWelcome;
    QGridLayout *gridLayout;
    QComboBox *cbLanguageCmd;
    QComboBox *cbLanguage;
    QComboBox *cbUnit;
    QLabel *lUnit;
    QLabel *lLanguage;
    QLabel *lCmdLanguage;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QG_DlgInitial)
    {
        if (QG_DlgInitial->objectName().isEmpty())
            QG_DlgInitial->setObjectName(QString::fromUtf8("QG_DlgInitial"));
        QG_DlgInitial->resize(413, 340);
        QG_DlgInitial->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(QG_DlgInitial);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(19);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lImage = new QLabel(QG_DlgInitial);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lImage->sizePolicy().hasHeightForWidth());
        lImage->setSizePolicy(sizePolicy);
        lImage->setFrameShape(QFrame::WinPanel);
        lImage->setFrameShadow(QFrame::Sunken);
        lImage->setLineWidth(1);
        lImage->setPixmap(QPixmap(QString::fromUtf8("image0")));
        lImage->setScaledContents(true);
        lImage->setWordWrap(false);

        hboxLayout->addWidget(lImage);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lWelcome = new QLabel(QG_DlgInitial);
        lWelcome->setObjectName(QString::fromUtf8("lWelcome"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lWelcome->sizePolicy().hasHeightForWidth());
        lWelcome->setSizePolicy(sizePolicy1);
        lWelcome->setAlignment(Qt::AlignVCenter);
        lWelcome->setWordWrap(true);

        vboxLayout1->addWidget(lWelcome);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(14, 14, 14, 14);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbLanguageCmd = new QComboBox(QG_DlgInitial);
        cbLanguageCmd->setObjectName(QString::fromUtf8("cbLanguageCmd"));

        gridLayout->addWidget(cbLanguageCmd, 2, 1, 1, 1);

        cbLanguage = new QComboBox(QG_DlgInitial);
        cbLanguage->setObjectName(QString::fromUtf8("cbLanguage"));

        gridLayout->addWidget(cbLanguage, 1, 1, 1, 1);

        cbUnit = new QComboBox(QG_DlgInitial);
        cbUnit->setObjectName(QString::fromUtf8("cbUnit"));

        gridLayout->addWidget(cbUnit, 0, 1, 1, 1);

        lUnit = new QLabel(QG_DlgInitial);
        lUnit->setObjectName(QString::fromUtf8("lUnit"));
        lUnit->setWordWrap(false);

        gridLayout->addWidget(lUnit, 0, 0, 1, 1);

        lLanguage = new QLabel(QG_DlgInitial);
        lLanguage->setObjectName(QString::fromUtf8("lLanguage"));
        lLanguage->setWordWrap(false);

        gridLayout->addWidget(lLanguage, 1, 0, 1, 1);

        lCmdLanguage = new QLabel(QG_DlgInitial);
        lCmdLanguage->setObjectName(QString::fromUtf8("lCmdLanguage"));
        lCmdLanguage->setWordWrap(false);

        gridLayout->addWidget(lCmdLanguage, 2, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(QG_DlgInitial);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cbUnit, cbLanguage);
        QWidget::setTabOrder(cbLanguage, cbLanguageCmd);

        retranslateUi(QG_DlgInitial);
        QObject::connect(buttonBox, SIGNAL(accepted()), QG_DlgInitial, SLOT(ok()));

        QMetaObject::connectSlotsByName(QG_DlgInitial);
    } // setupUi

    void retranslateUi(QDialog *QG_DlgInitial)
    {
        QG_DlgInitial->setWindowTitle(QApplication::translate("QG_DlgInitial", "Welcome", 0, QApplication::UnicodeUTF8));
        lWelcome->setText(QApplication::translate("QG_DlgInitial", "<font size=\"+1\"><b>Welcome to QCad</b>\n"
"</font>\n"
"<br>\n"
"Please choose the unit you want to use for new drawings and your preferred language.<br>\n"
"You can changes these settings later in the Options Dialog of QCad.", 0, QApplication::UnicodeUTF8));
        lUnit->setText(QApplication::translate("QG_DlgInitial", "Default Unit:", 0, QApplication::UnicodeUTF8));
        lLanguage->setText(QApplication::translate("QG_DlgInitial", "GUI Language:", 0, QApplication::UnicodeUTF8));
        lCmdLanguage->setText(QApplication::translate("QG_DlgInitial", "Command Language:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QG_DlgInitial: public Ui_QG_DlgInitial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_DLGINITIAL_H
