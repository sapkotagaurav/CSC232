#ifndef NEGATIVESCORE_H
#define NEGATIVESCORE_H
#include<iostream>
#include <string>

#include <exception>

using namespace std;
class NegativeScore: public exception{
    private:
    double score;
    public:
    NegativeScore();
    NegativeScore(int a);
    string message;
    
    double getScore(){
        return score;
    }
    virtual const char* what() const throw(){
        return "Invalid Score";
    }

    
};




#endif