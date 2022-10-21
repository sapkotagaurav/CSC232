#ifndef COURSESGRADES_H
#define COURSESGRADES_H

#include "GradedActivity.h"
#include "Essay.h"
#include "FinalExam.h"
#include "PassFailExam.h"
#include<iostream>

class CourseGrades
{
private:
    GradedActivity grades[4];
public:
    CourseGrades(){}
    void setLab(const GradedActivity& g);
    void setPassFailExam(PassFailExam& g);
    void setEssay(Essay& g);
    void setFinalExam(FinalExam& g);
    void print();
    ~CourseGrades(){}
};



#endif