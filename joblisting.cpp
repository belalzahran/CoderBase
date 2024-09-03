#include "joblisting.h"

JobListing::JobListing() {}

JobListing::JobListing(QString link, QString company, QString jobTitle, bool referral)
{
    this->link = link;
    this->company = company;
    this->jobTitle = jobTitle;
    this->referral = referral;
}

QString JobListing::getCompany() const{
    return this->company;
}

QString JobListing::getLink() const{
    return this->link;
}

QString JobListing::getJobTitle() const{
    return this->jobTitle;
}

bool JobListing::getReferral() const{
    return this->referral;
}
