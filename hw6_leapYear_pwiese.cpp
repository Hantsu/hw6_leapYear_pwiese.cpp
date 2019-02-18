/******************************************************************************
filename:               hw6_leapYear_pwiese.cpp

author:                 Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  
date:                   2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19  2/17/19

description:            Write a program that computes whether or not a year entered by the user is a leap year. (You can look
                        up the rules for which years are leap years.) There should be separate functions to get user input of a
                        year, determine if it is a leap year, and show the result.
*******************************************************************************/
#include <iostream>
using namespace std;

//function prototypes
void intro();               // introduction to what the program does
int getYear();              // prompts the user to enter a year; performs data validation
bool leapYear(int year, int yn);             // determines if year is a leap year; returns true or false
void showYear(int year, int yn);               // outputs the year and " is a leap year." or " is not a leap year.

int main()
{
    int year;
    int yn;
    
    intro();
    year = getYear();
    leapYear(year, yn);
    showYear(year, yn);
    
    return 0;
}



void intro(){
     cout << "This program will determine if a year, entered by you, is a leap year.\n";
}



int getYear(){
    
    int year;
    
    do{
    cout << "Enter a year you want to check: \n";
    cin >> year;
        if(year<1){
            cout<< "Please enter a year higher than 0.\n";
        }
    }while(year<1);
    
    return year;
    
}



bool leapYear(int yn, int year){
    yn = year;
    //leap year condition
    if ((yn % 4 == 0) && (yn % 100 != 0) || (yn % 400 == 0))
        return true;
    else
        return false;
        
}



void showYear(int year, int yn){
    yn = year;
    if (leapYear(yn, year) == 1)
        cout << year << " is a leap year!";
    else
        cout << year << " is not a leap year!";
    
}
