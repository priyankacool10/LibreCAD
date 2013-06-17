/********************************************************************************
** Form generated from reading UI file 'qg_mtextoptions.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_MTEXTOPTIONS_H
#define UI_QG_MTEXTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QG_MTextOptions
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *lText;
    QTextEdit *teText;
    QLabel *lAngle;
    QLineEdit *leAngle;
    QFrame *sep1;

    void setupUi(QWidget *QG_MTextOptions)
    {
        if (QG_MTextOptions->objectName().isEmpty())
            QG_MTextOptions->setObjectName(QString::fromUtf8("QG_MTextOptions"));
        QG_MTextOptions->resize(300, 24);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_MTextOptions->sizePolicy().hasHeightForWidth());
        QG_MTextOptions->setSizePolicy(sizePolicy);
        QG_MTextOptions->setMinimumSize(QSize(200, 22));
        QG_MTextOptions->setMaximumSize(QSize(300, 32767));
        hboxLayout = new QHBoxLayout(QG_MTextOptions);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lText = new QLabel(QG_MTextOptions);
        lText->setObjectName(QString::fromUtf8("lText"));
        lText->setWordWrap(false);

        hboxLayout->addWidget(lText);

        teText = new QTextEdit(QG_MTextOptions);
        teText->setObjectName(QString::fromUtf8("teText"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teText->sizePolicy().hasHeightForWidth());
        teText->setSizePolicy(sizePolicy1);
        teText->setMinimumSize(QSize(0, 22));
        teText->setMaximumSize(QSize(32767, 22));
        teText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        teText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        hboxLayout->addWidget(teText);

        lAngle = new QLabel(QG_MTextOptions);
        lAngle->setObjectName(QString::fromUtf8("lAngle"));
        lAngle->setWordWrap(false);

        hboxLayout->addWidget(lAngle);

        leAngle = new QLineEdit(QG_MTextOptions);
        leAngle->setObjectName(QString::fromUtf8("leAngle"));

        hboxLayout->addWidget(leAngle);

        sep1 = new QFrame(QG_MTextOptions);
        sep1->setObjectName(QString::fromUtf8("sep1"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sep1->sizePolicy().hasHeightForWidth());
        sep1->setSizePolicy(sizePolicy2);
        sep1->setFrameShape(QFrame::VLine);
        sep1->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1);


        retranslateUi(QG_MTextOptions);
        QObject::connect(teText, SIGNAL(textChanged()), QG_MTextOptions, SLOT(updateText()));
        QObject::connect(leAngle, SIGNAL(textChanged(QString)), QG_MTextOptions, SLOT(updateAngle()));

        QMetaObject::connectSlotsByName(QG_MTextOptions);
    } // setupUi

    void retranslateUi(QWidget *QG_MTextOptions)
    {
        QG_MTextOptions->setWindowTitle(QApplication::translate("QG_MTextOptions", "Text Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QG_MTextOptions->setProperty("toolTip", QVariant(QString()));
#endif // QT_NO_TOOLTIP
        lText->setText(QApplication::translate("QG_MTextOptions", "Text:", 0, QApplication::UnicodeUTF8));
        lAngle->setText(QApplication::translate("QG_MTextOptions", "Angle:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QG_MTextOptions: public Ui_QG_MTextOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_MTEXTOPTIONS_H
