/********************************************************************************
** Form generated from reading UI file 'search_tag.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_TAG_H
#define UI_SEARCH_TAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_search_tag
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QDialog *search_tag)
    {
        if (search_tag->objectName().isEmpty())
            search_tag->setObjectName(QString::fromUtf8("search_tag"));
        search_tag->resize(400, 155);
        search_tag->setMinimumSize(QSize(400, 155));
        search_tag->setMaximumSize(QSize(400, 155));
        gridLayout = new QGridLayout(search_tag);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(search_tag);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setScaledContents(true);
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 4);

        label = new QLabel(search_tag);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(search_tag);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 3, 1, 1);

        lineEdit = new QLineEdit(search_tag);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(search_tag);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        label_2 = new QLabel(search_tag);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);


        retranslateUi(search_tag);
        QObject::connect(buttonBox, SIGNAL(accepted()), search_tag, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), search_tag, SLOT(reject()));

        QMetaObject::connectSlotsByName(search_tag);
    } // setupUi

    void retranslateUi(QDialog *search_tag)
    {
        search_tag->setWindowTitle(QCoreApplication::translate("search_tag", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("search_tag", "Left field is for tags, right is for keywords to tags. Separate tags and keywords by ;", nullptr));
        label->setText(QCoreApplication::translate("search_tag", "tag:", nullptr));
        label_2->setText(QCoreApplication::translate("search_tag", "keywords:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_tag: public Ui_search_tag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_TAG_H
