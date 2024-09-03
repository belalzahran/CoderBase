#include "joblisting.h"

JobListing::JobListing() {}

JobListing::JobListing(QString link, QString company, QString jobTitle, bool referral)
{
    this->link = link;
    this->company = company;
    this->jobTitle = jobTitle;
    this->referral = referral;
}
