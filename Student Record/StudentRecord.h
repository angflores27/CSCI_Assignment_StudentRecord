//
//  StudentRecord.h
//  Student Record
//
//  Created by Angela Flores on 11/4/22.
//

#ifndef StudentRecord_h
#define StudentRecord_h

#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class StudentRecord
{
private:
    string lastName;
    string firstName;
    string idNumber;
    double GPA;
public:
    //constructors
    StudentRecord();
    StudentRecord( string last, string first, string id, double gpa);
    //set and get functions
    void setLastName( string last);
    string getLastName();
    void setFirstName( string first);
    string getFirstName ();
    void setID( string ID);
    string getID();
    void setGPA( double gpa);
    double getGPA();
    void display();
};
// Implementation
StudentRecord::StudentRecord()
{
    lastName="None";
    firstName="None";
    idNumber="---";
    GPA = 0;
}
StudentRecord::StudentRecord(string last, string first, string id, double gpa)
{
    lastName=last;
    firstName=first;
    idNumber=id;
    GPA=gpa;
}
void StudentRecord::setLastName( string last)
{
    lastName=last;
}
string StudentRecord::getLastName()
{
    return lastName;
}
void StudentRecord::setFirstName( string first)
{
    firstName=first;
}
string StudentRecord::getFirstName()
{
    return firstName;
}
void StudentRecord::setID( string id)
{
    idNumber=id;
}
string StudentRecord::getID()
{
    return idNumber;
}
void StudentRecord::setGPA( double gpa)
{
    GPA =gpa;
}
double StudentRecord::getGPA()
{
    return GPA;
}
void StudentRecord::display()
{
    cout<<setw(30)<<"Student Last Name: "<<setw(10)<<lastName<<endl;
    cout<<setw(30)<<"Student First Name: "<<setw(10)<<firstName<<endl;
    cout<<setw(30)<<"Student ID: "<<setw(10)<<idNumber<<endl;
    cout<<setw(30)<<"Student GPA: "<<setw(10)<<GPA<<endl;
}


#endif /* StudentRecord_h */
