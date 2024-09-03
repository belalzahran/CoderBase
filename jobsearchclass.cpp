#include "jobsearchclass.h"
#include "ui_jobsearchclass.h"
#include "joblisting.h"
#include <QMessageBox>
#include "databasemanager.h"

JobSearchClass::JobSearchClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JobSearchClass)
{
    ui->setupUi(this);
}

JobSearchClass::~JobSearchClass()
{
    delete ui;
}



void JobSearchClass::on_submit_clicked()
{
    auto &linkBox = this->ui->linkBox;
    auto &companyBox = this->ui->companyBox;
    auto &jobTitleBox = this->ui->jobTitleBox;
    auto &referralCheckBox = this->ui->referralCheckBox;

    if (linkBox->text().isEmpty() || companyBox->text().isEmpty() || jobTitleBox->text().isEmpty()){
        QMessageBox::warning(this, "Error","Please fill in all fields");
        return;
    }

    JobListing newJob = JobListing(linkBox->text(), companyBox->text(), jobTitleBox->text(), referralCheckBox->isChecked());

    // Use singleton instance of DatabaseManager
    DatabaseManager& dbManager = DatabaseManager::instance();
    if (!dbManager.addJob(newJob)) {
        QMessageBox::warning(this, "Error", "Failed to add job to database");
        return;
    }


    this->jobList.push_back(newJob);
    this->jobCount++;
    this->ui->job_count_label->setText(QString::number(this->jobCount));

    linkBox->clear();
    companyBox->clear();
    jobTitleBox->clear();
    referralCheckBox->setChecked(false);

}



