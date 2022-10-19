#include <iostream>
#include "Temperature.h"


using namespace std;
//Class to implement Temperature object

 Temperature::Temperature(){
    degree=0;
    scale ='C';
}
Temperature::Temperature(double d, char c){
    degree =d;
    scale =c;
}
double Temperature:: operator-(Temperature& rval)
{
double temp;
if (rval.getScale()==scale)
{
    return degree - rval.degree;

}

if(scale=='C')temp = tempConverter(rval, 'C');
else if(scale=='K')temp = tempConverter(rval, 'K');
return degree - temp;
}

bool Temperature::operator<(Temperature&rval)
{
double temp;
if (rval.getScale()==scale)
{
    return degree < rval.degree;

}
if(scale=='C')temp = tempConverter(rval, 'C');
else if(scale=='K')temp = tempConverter(rval, 'K');
return degree < temp;
}

bool Temperature::operator>(Temperature&rval)
{if (rval.getScale()==scale)
{
    return degree > rval.degree;

}
double temp;
if(scale=='C')temp = tempConverter(rval, 'C');
else if(scale=='K')temp = tempConverter(rval, 'K');
return degree > temp;
}

bool Temperature::operator==(Temperature&rval)
{
double temp;
if (rval.getScale()==scale)
{
    return degree == rval.degree;

}
if(scale=='C')temp = tempConverter(rval, 'C');
else if(scale=='K')temp = tempConverter(rval, 'K');
return degree == temp;
}

bool Temperature::operator!=(Temperature&rval)
{
double temp;
if (rval.getScale()==scale)
{
    return degree != rval.degree;

}
if(scale=='C')temp = tempConverter(rval, 'C');
else if(scale=='K')temp = tempConverter(rval, 'K');
return degree != temp;
}
double Temperature::getDegree(){
    return degree;
}
char Temperature::getScale(){
            return scale;
        }
void Temperature::setDegree(double t){
            degree = t;
        }
void Temperature::setScale(char c){
            scale = c;
        }

		double Temperature::tempConverter(Temperature& T, char convertTo){
            if (T.getScale()=='C' && convertTo=='K')
            {
                return T.getDegree()+273.15;
            }else if(T.getScale()=='K' && convertTo=='C'){
return T.getDegree()-273.15;
            }
            return 0;
        }
 ostream& operator<<(ostream& out, const Temperature& T){
   cout<<T.degree;   
   cout<<T.scale;     
   return out;     
}
 istream& operator>>(istream& in, Temperature& T){
    cin>>T.degree;
    cin>>T.scale;
    
    
    return in;
}



            
        

