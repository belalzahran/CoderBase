#ifndef JOBSEARCHCLASS_H
#define JOBSEARCHCLASS_H

#include <QMainWindow>
#include "joblisting.h"
#include <vector>

using namespace std;

namespace Ui {
class JobSearchClass;
}

class JobSearchClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit JobSearchClass(QWidget *parent = nullptr);
    ~JobSearchClass();

private slots:
    void on_submit_clicked();

private:
    Ui::JobSearchClass *ui;
    vector<JobListing> jobList;
    int jobCount;
};

#endif // JOBSEARCHCLASS_H
