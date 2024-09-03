#include "databasemanager.h"



DatabaseManager& DatabaseManager::instance() {

    static DatabaseManager instance;
    return instance;

}



DatabaseManager::DatabaseManager() {
    if (!openDatabase()){
        qDebug() << "Failed to open database!";
    }
}


bool DatabaseManager::openDatabase(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("codebasedb");
    db.setUserName("root");
    db.setPassword("bzsummer");

    if (!db.open()){
        qDebug() << "Database error: " << db.lastError().text();
        return false;
    }

    qDebug() << "Database connected successfully!";
    return true;
}


bool DatabaseManager::addJob(const QString& jobTitle, const QString& company, const QString& link, bool referral) {

    QSqlQuery query;

    query.prepare("INSERT into jobs (jobTitle, company, link, referral) VALUES (?,?,?,?)");
    query.addBindValue(jobTitle);
    query.addBindValue(company);
    query.addBindValue(link);
    query.addBindValue(referral);

    if (!query.exec()){
        qDebug() << "Add Job Error" << query.lastError().text();
        return false;
    }

    return true;
}


bool DatabaseManager::addJob(const JobListing& job){
    return addJob(job.getJobTitle(), job.getCompany(), job.getLink(), job.getReferral());
}






























