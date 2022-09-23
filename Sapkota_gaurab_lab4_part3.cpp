#include<iostream>
#include<iomanip>
#include<fstream>
struct Employee
{
    char name[16];
    long ssn;
    int id;
    int years;
    float salary;
};


using namespace std;

int main(){
    fstream inFile("employee.in",ios::in);
    fstream outfile("employee.out",ios::out);
    string line,data;
    Employee employee[20];
    int total_record=0;
    float total_salary =0;
    int total_years =0;
    outfile << left << fixed << setprecision(2);

    inFile.get(employee[total_record].name,15);

    

        while (inFile)
        {
            inFile>>employee[total_record].ssn;
            inFile>>employee[total_record].id;
            inFile>>employee[total_record].years;
            inFile>>employee[total_record].salary;
            total_salary = total_salary +employee[total_record].salary;
            total_years = total_years +employee[total_record].years;
            total_record++;
            inFile.ignore();
                                inFile.get(employee[total_record].name,15);

            
        }
        inFile.close();

    
    outfile << setw(20)<< "Name" << setw(10) << "Social Security" << setw(10) << "Department Id"
		    << setw(10) << "Years Employed" << setw(15) << "Salary" << endl;

    for (int i = 0; i < 4; i++)
    {
        outfile<<endl<<endl;
        outfile << setw(20)<< employee[i].name << setw(10) << employee[i].ssn << setw(10) << employee[i].id
		    << setw(10) << employee[i].years << setw(15) << employee[i].salary << endl;
    }
    outfile<<endl<<endl<<"The average number of years worked is " << total_years/total_record<<endl<<endl;
    outfile<<"The average salary is $" << total_salary/total_record<<endl<<endl;
    outfile.close();

    
    
    
    
}