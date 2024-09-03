#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QVariant>
#include <QDebug>
#include "joblisting.h"

class DatabaseManager
{
    public:
        // static method to get the singleton instance
        static DatabaseManager& instance();


        // public methods to interact with the database
        bool addJob(const QString& jobTitle, const QString& company, const QString& link, bool referral);
        bool addJob(const JobListing& job);
        QSqlQuery getJobs();


    private:

        QSqlDatabase db;

        DatabaseManager();

        DatabaseManager(const DatabaseManager&) = delete;
        DatabaseManager& operator=(const DatabaseManager&) = delete;

        bool openDatabase();

};

#endif // DATABASEMANAGER_H
