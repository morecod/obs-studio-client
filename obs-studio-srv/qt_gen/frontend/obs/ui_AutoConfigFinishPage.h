/********************************************************************************
** Form generated from reading UI file 'AutoConfigFinishPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGFINISHPAGE_H
#define UI_AUTOCONFIGFINISHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoConfigFinishPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AutoConfigFinishPage)
    {
        if (AutoConfigFinishPage->objectName().isEmpty())
            AutoConfigFinishPage->setObjectName(QString::fromUtf8("AutoConfigFinishPage"));
        AutoConfigFinishPage->resize(400, 300);
        AutoConfigFinishPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigFinishPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AutoConfigFinishPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8(""));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AutoConfigFinishPage);

        QMetaObject::connectSlotsByName(AutoConfigFinishPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigFinishPage)
    {
        (void)AutoConfigFinishPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigFinishPage: public Ui_AutoConfigFinishPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGFINISHPAGE_H
