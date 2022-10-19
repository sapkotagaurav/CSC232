#writing a test that calls function, passing the number as a parameter and testingfor the expected result 
from math import ceil


def sumDigits(n):
    sum=0
    while(n>0):
        x = n%10
        sum = sum + x
        n = n//10
 #using return to get the expected output of the fuction
    return sum

#Creating a function that returns true if sum of the first two sides is greater than the third side.
def isValid(side1,side2,side3):
    if side1+side2 > side3:
#using return to get the expected output of the fuction
        return True

#writing a function that returns string as hour:minutes:seconds
#writing a test that calls the function, passing the number of milliseconds as a parameter and testing for the expected result.
def convertMillis(millis):
    hours=(int(millis//(1000*60*60)))
    millis = millis % (1000*60*60)
    minutes=(int(millis//(1000*60)))
    millis = millis % (1000*60)
    seconds=(int(millis/(1000)))
    convert=(f"{hours}:{minutes}:{seconds}")
    
    return(convert)

#writing a fuction that utilizes a given series to calculate an estimate for the function.
def myPi(n):
    pi = 0
    sign =1
    for a in range(1,n,2):

        pi =pi + sign*(1/a)
        sign = sign * -1
    return float("{0:.4f}".format(4*pi))

 
#writing a function that calculates a persons body mass index(BMI) by taking different values of weight in kilograms and height in meters, as given by the user.
def BMI(w,h):
    weight = w/2.205 #in pounds
    height = h/39.37 #in inches
    BMI = weight/height**2
    bmi = 0
    if BMI<18.5:
        bmi =  "Underweight"
    elif BMI>=18.5 and BMI<=24.5:
        bmi = "Normal"
    elif BMI>=25.0 and BMI<=29.9:
        bmi = "Overweight"
    elif BMI>30:
        bmi = "obese"
    return bmi


import sys
 
def test(did_pass):
    """ Print the result of a test """
    linenum=sys._getframe(1).f_lineno
    if did_pass:
        msg="Test at line {0} ok.".format(linenum)
    else:
        msg="Test at line {0} failed.".format(linenum)
 
    print(msg)
   
def test_suite():
    """ Run the suite of tests for code in this module (this file).
    """
    test(sumDigits(142) == 7)
    test(isValid(1,3,1) == True)
    test(convertMillis(100000) == "0:1:40")
    test(myPi(101) == 3.1515)
    test(BMI(146,70) == "Normal")
 
test_suite()        # Here is the call to run the tests