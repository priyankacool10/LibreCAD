/********************************************************************************
** Form generated from reading UI file 'qg_circletan2options.ui'
**
** Created: Tue Jun 18 03:59:32 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QG_CIRCLETAN2OPTIONS_H
#define UI_QG_CIRCLETAN2OPTIONS_H

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

class Ui_QG_CircleTan2Options
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *lRadius;
    QLineEdit *leRadius;
    QFrame *sep1;

    void setupUi(QWidget *QG_CircleTan2Options)
    {
        if (QG_CircleTan2Options->objectName().isEmpty())
            QG_CircleTan2Options->setObjectName(QString::fromUtf8("QG_CircleTan2Options"));
        QG_CircleTan2Options->resize(110, 22);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QG_CircleTan2Options->sizePolicy().hasHeightForWidth());
        QG_CircleTan2Options->setSizePolicy(sizePolicy);
        QG_CircleTan2Options->setMinimumSize(QSize(65, 22));
        QG_CircleTan2Options->setMaximumSize(QSize(160, 32));
        hboxLayout = new QHBoxLayout(QG_CircleTan2Options);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(1, 0, 1, 0);
        lRadius = new QLabel(QG_CircleTan2Options);
        lRadius->setObjectName(QString::fromUtf8("lRadius"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lRadius->sizePolicy().hasHeightForWidth());
        lRadius->setSizePolicy(sizePolicy1);
        lRadius->setWordWrap(false);

        hboxLayout->addWidget(lRadius);

        leRadius = new QLineEdit(QG_CircleTan2Options);
        leRadius->setObjectName(QString::fromUtf8("leRadius"));

        hboxLayout->addWidget(leRadius);

        sep1 = new QFrame(QG_CircleTan2Options);
        sep1->setObjectName(QString::fromUtf8("sep1"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sep1->sizePolicy().hasHeightForWidth());
        sep1->setSizePolicy(sizePolicy2);
        sep1->setFrameShape(QFrame::VLine);
        sep1->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(sep1);


        retranslateUi(QG_CircleTan2Options);
        QObject::connect(leRadius, SIGNAL(textChanged(QString)), QG_CircleTan2Options, SLOT(updateRadius(QString)));

        QMetaObject::connectSlotsByName(QG_CircleTan2Options);
    } // setupUi

    void retranslateUi(QWidget *QG_CircleTan2Options)
    {
        QG_CircleTan2Options->setWindowTitle(QApplication::translate("QG_CircleTan2Options", "Circle Tangential2 Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lRadius->setToolTip(QApplication::translate("QG_CircleTan2Options", "<html><head/><body><p>Radius of the tangential circle to draw</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lRadius->setText(QApplication::translate("QG_CircleTan2Options", "Radius:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leRadius->setToolTip(QApplication::translate("QG_CircleTan2Options", "Radius of tangential circle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QG_CircleTan2Options: public Ui_QG_CircleTan2Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QG_CIRCLETAN2OPTIONS_H
