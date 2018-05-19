/*
 DESOTO, Dominic
 REED, Anthony

 IS131C Project #4/5
 Separate Compilation with a hint of Class
 Due: 2015/3/3

 WORKING
*/

#include "section.h"

using namespace std;


int main()
{
    section IS131;

    //call functions;
    IS131.read();
    IS131.display();
    IS131.add();
    IS131.display();
    IS131.write();

    return 0;
}

/* Program Output:
Current records:
Vivian  Valles  A00345678       1       1       1       1
Sandy   Swinley A01567467       1       1       1       0
Jane    Johnson A09657775       1       0       1       0
Donald  Trafton A00253664       1       1       1       1
June    Jefford A02334880       1       1       0       1
Mark    Dehne   A01001826       0       1       1       1
Daniel  Edgemon A03746727       1       0       1       0
John    Lindow  A00738488       1       1       1       0
Leslie  Giffen  A07465774       1       1       0       0
Ronald  Shuford A00475683       1       1       1       1

Please enter the student ID numbers =>
A00345678
A00253664
0

Current records:
Vivian  Valles  A00345678       1       1       1       1       1
Sandy   Swinley A01567467       1       1       1       0       0
Jane    Johnson A09657775       1       0       1       0       0
Donald  Trafton A00253664       1       1       1       1       1
June    Jefford A02334880       1       1       0       1       0
Mark    Dehne   A01001826       0       1       1       1       0
Daniel  Edgemon A03746727       1       0       1       0       0
John    Lindow  A00738488       1       1       1       0       0
Leslie  Giffen  A07465774       1       1       0       0       0
Ronald  Shuford A00475683       1       1       1       1       0

File written.
*/
