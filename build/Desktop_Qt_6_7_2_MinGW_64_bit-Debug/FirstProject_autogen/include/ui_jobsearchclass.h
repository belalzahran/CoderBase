/********************************************************************************
** Form generated from reading UI file 'jobsearchclass.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBSEARCHCLASS_H
#define UI_JOBSEARCHCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JobSearchClass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *linkBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *jobTitleBox;
    QCheckBox *referralCheckBox;
    QLabel *label_4;
    QLineEdit *companyBox;
    QPushButton *submit;
    QLabel *label_5;
    QLabel *job_count_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JobSearchClass)
    {
        if (JobSearchClass->objectName().isEmpty())
            JobSearchClass->setObjectName("JobSearchClass");
        JobSearchClass->resize(800, 600);
        centralwidget = new QWidget(JobSearchClass);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(300, 60, 201, 81));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        linkBox = new QLineEdit(centralwidget);
        linkBox->setObjectName("linkBox");
        linkBox->setGeometry(QRect(110, 240, 231, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 240, 54, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 280, 54, 17));
        jobTitleBox = new QLineEdit(centralwidget);
        jobTitleBox->setObjectName("jobTitleBox");
        jobTitleBox->setGeometry(QRect(110, 280, 231, 21));
        referralCheckBox = new QCheckBox(centralwidget);
        referralCheckBox->setObjectName("referralCheckBox");
        referralCheckBox->setGeometry(QRect(110, 360, 80, 23));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 320, 61, 17));
        companyBox = new QLineEdit(centralwidget);
        companyBox->setObjectName("companyBox");
        companyBox->setGeometry(QRect(110, 320, 231, 21));
        submit = new QPushButton(centralwidget);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(180, 400, 80, 25));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(470, 170, 131, 41));
        job_count_label = new QLabel(centralwidget);
        job_count_label->setObjectName("job_count_label");
        job_count_label->setGeometry(QRect(610, 180, 61, 21));
        JobSearchClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JobSearchClass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        JobSearchClass->setMenuBar(menubar);
        statusbar = new QStatusBar(JobSearchClass);
        statusbar->setObjectName("statusbar");
        JobSearchClass->setStatusBar(statusbar);

        retranslateUi(JobSearchClass);

        QMetaObject::connectSlotsByName(JobSearchClass);
    } // setupUi

    void retranslateUi(QMainWindow *JobSearchClass)
    {
        JobSearchClass->setWindowTitle(QCoreApplication::translate("JobSearchClass", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("JobSearchClass", "Job Search", nullptr));
        label_2->setText(QCoreApplication::translate("JobSearchClass", "Link:", nullptr));
        label_3->setText(QCoreApplication::translate("JobSearchClass", "Title:", nullptr));
        referralCheckBox->setText(QCoreApplication::translate("JobSearchClass", "Referall?", nullptr));
        label_4->setText(QCoreApplication::translate("JobSearchClass", "Company:", nullptr));
        submit->setText(QCoreApplication::translate("JobSearchClass", "Submit", nullptr));
        label_5->setText(QCoreApplication::translate("JobSearchClass", "Jobs Applied Count:", nullptr));
        job_count_label->setText(QCoreApplication::translate("JobSearchClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JobSearchClass: public Ui_JobSearchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBSEARCHCLASS_H
