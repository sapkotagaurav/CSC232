#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> room_no;
    map<string, string> instructor;
    string instructors[5] = {
        "Haynes",
        "Alvarado",
        "Rich",
        "Burke",
        "Lee",
    };
    string times[5] = {
        "8:00am",
        "9:00am",
        "10:00am",
        "11:00am",
        "1:00pm",

    } ;
    int count;
    map<string, string> time;
    room_no.insert(pair<string, int>("CS101", 3004));
    room_no.insert(pair<string, int>("CS102", 4501));
    room_no.insert(pair<string, int>("CS103", 6755));
    room_no.insert(pair<string, int>("NT110", 1244));
    room_no.insert(pair<string, int>("CM241", 1411));
    map<string, int>::iterator i;

    for (i = room_no.begin(), count = 0; i != room_no.end(); ++i, count++)
    {
        instructor[i->first] = instructors[count];
        time[i->first] = times[count];
    }
    string cs_no;


    cout<<"Enter a course number to get the information about that course: ";
    cin>>cs_no;
    cout<<"Room Number: "<<room_no.at(cs_no)<<endl<<"Instructor: "<<instructor.at(cs_no)<<endl<<"Meeting time: "<<time.at(cs_no)<<endl;

}