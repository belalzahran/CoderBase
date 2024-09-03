#ifndef JOBLISTING_H
#define JOBLISTING_H
#include <QString>

class JobListing
{
    public:
        JobListing();
        JobListing(QString link, QString company, QString jobTitle, bool referral);
        QString getCompany();
        QString getLink();
        QString getJobTitle();
        bool getReferralStatus();


    private:

        QString link;
        QString company;
        QString jobTitle;
        bool referral;



};

#endif // JOBLISTING_H
