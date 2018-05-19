/*
 DESOTO, Dominic
 REED, Anthony

 IS131A Project #2
 Arrays of Structures
 Due: 2015/2/10
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

struct record
{
    string firstname, lastname, id;
    vector<int> attendance;
};

int main()
{
    record student[100];
    int i = 0, input = 0;

    // infile stream for attendance file;
    ifstream infile;
    infile.open("C:/IS131/attendance.txt");

    // if the infile stream fails, display error message;
    if (infile.fail())
    {
        cout << "File not found." << endl;
        exit(1);
    }

    // stream the student information into structure until end of file;
    while(!infile.eof())
    {
        infile >> student[i].firstname;
        infile >> student[i].lastname;
        infile >> student[i].id;

        // stream attendance until temp variable reads -1;
        while(infile >> input && input != -1)
        {
            // stream attendance into vector;
            student[i].attendance.push_back(input);

        }

        // increment;
        i++;
    }

    // close the file when finished;
    infile.close();

    for (int j = 0; j < i; j++)
    {
        // display student information;
        cout << student[j].firstname << '\t';
        cout << student[j].lastname << '\t';
        cout << student[j].id << '\t';

        int size = student[j].attendance.size();

        for (int k = 0; k < size; k++)
        {
        // display student's attendance;
            cout << student[j].attendance.at(k);
            cout << '\t';
        }
        // this just makes the information displayed look neat and pretty;
        cout << endl;
    }

    return 0;
}

/*
 Program Output:
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
*/
