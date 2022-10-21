#include<iostream>
#include "CourseGrades.h"

using namespace std;

void CourseGrades::setLab(const GradedActivity &l) {
    grades[0] = GradedActivity(l.getScore());

}
void CourseGrades::setPassFailExam(PassFailExam &e){
    grades[1] = GradedActivity(e.getScore());

}

void CourseGrades::setEssay(Essay &e){
    grades[2] = GradedActivity(e.getScore());

}
void CourseGrades::setFinalExam(FinalExam &e){
    grades[3] = GradedActivity(e.getScore());

}

void CourseGrades::print(){
    string topics[4]={"Lab","PassFailExam","Essay","Final"};
for (size_t i = 0; i < 4; i++)
{
    cout<<topics[i]<<": "<<grades[i].getScore()<<" "<<grades[i].getLetterGrade()<<endl;
}


}