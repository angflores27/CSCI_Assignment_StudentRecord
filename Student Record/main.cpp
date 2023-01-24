// Student Record
// Angela Flores
// CSCI 40 Fall 2022
//

#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    StudentRecord recordA;
    StudentRecord recordB("He","Jin","0000", 3.0);
    recordA.display();
    recordB.display();
    
    return 0;
}
