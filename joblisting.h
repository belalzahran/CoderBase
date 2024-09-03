#ifndef JOBLISTING_H
#define JOBLISTING_H
#include <QString>

class JobListing
{
    public:
        JobListing();
        JobListing(QString link, QString company, QString jobTitle, bool referral);
        QString getCompany() const;
        QString getLink() const;
        QString getJobTitle() const;
        bool getReferral() const;


    private:

        QString link;
        QString company;
        QString jobTitle;
        bool referral;



};

#endif // JOBLISTING_H
