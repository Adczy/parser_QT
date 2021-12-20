/********************************************************************************
** Form generated from reading UI file 'search_keyword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_KEYWORD_H
#define UI_SEARCH_KEYWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_search_keyword
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *search_keyword)
    {
        if (search_keyword->objectName().isEmpty())
            search_keyword->setObjectName(QString::fromUtf8("search_keyword"));
        search_keyword->resize(300, 140);
        search_keyword->setMinimumSize(QSize(300, 140));
        search_keyword->setMaximumSize(QSize(300, 140));
        verticalLayout_2 = new QVBoxLayout(search_keyword);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(search_keyword);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(search_keyword);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(search_keyword);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(search_keyword);
        QObject::connect(buttonBox, SIGNAL(accepted()), search_keyword, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), search_keyword, SLOT(reject()));

        QMetaObject::connectSlotsByName(search_keyword);
    } // setupUi

    void retranslateUi(QDialog *search_keyword)
    {
        search_keyword->setWindowTitle(QCoreApplication::translate("search_keyword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("search_keyword", "separate keywords by ;", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_keyword: public Ui_search_keyword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_KEYWORD_H
