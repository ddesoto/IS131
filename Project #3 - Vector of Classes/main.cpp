/*
 DESOTO, Dominic

 IS131A Project #3
 Vector of Classes
 Due: 2014/2/17

 WORKING
 */

//include preprocessor library;
#include <iostream>
#include <vector>

using namespace std;

//class definition
class ticket
{
//public functions;
public:
    ticket();
    ~ticket();
    double input();
    void output();
//private function and variables;
private:
    void cost();
    string name;
    double miles, price;
    int transfers;
};

int main()
{
    //initialize temporary variable and customer vector;
    double temp = 0;
    vector<ticket> customer;

    //generic welcome output;
    cout << "Welcome to the JetBlue booking system."<< endl << endl;

    //begin do-while loop;
    do
    {
        //push back ticket values onto vector;
        customer.push_back( ticket() );
        //increment customer numbers by using the vector size to count;
        cout << "*** Customer " << customer.size() << " ***" << endl;
        //set temp variable equal to the customer size minus one to account for the terminator, 0, which creates another instance of customer in the vector--then reference the input function;
        temp = customer.at(customer.size()-1).input();
    //end the do-while loop when temp is less than or equal to zero;
    }while(temp > 0);
        //remove the terminator, 0, from the vector;
        customer.pop_back();
    //display database printout;
    cout << "*** Database printout: ***" << endl;
    //create for-loop so that the customer vector will continually reference the output function until the end of the vector;
    for (int i = 0; i < customer.size(); i++)
    {
        customer.at(i).output();
    }
    //end of database;
    cout << "--- End of database ---";
    //END.
    return 0;
}

//default constructor;
ticket::ticket()
{
    //initialization of private variables;
    miles = 0, price = 0;
    transfers = 0;
    name = "";
}

//destructor;
ticket::~ticket()
{
    //this does nothing;
}

//input function;
double ticket::input()
{
        //prompt user for miles;
        cout << "Miles?   ";
        cin >> miles;

        //if the miles are above zero, continue requesting information;
        if(miles > 0)
        {
            cout << "Transfers?  ";
            cin >> transfers;
            cout << "Name? ";
            cin >> name;

            //reference cost function to calculate price;
            cost();

            cout << "Price is $" << price << endl;
            cout << "--- Entered, thank you---" << endl << endl;
        }

        //if the miles are less than or equal to zero, display that input has been terminated;
        else
        {
            cout << "--- Input terminated by user ---"<< endl << endl;
        }

    return miles;
}

//output void function;
void ticket::output()
{
    //display single line of the database printout;
    cout << name << '\t' << miles << " mi" << '\t' << transfers << " transfers" << " " << "$" << price << endl;

    return;
}

//cost void function;
void ticket::cost()
{
    //calculate price, $0.50 for each mile minus $50 for each transfer;
    price = 0.5 * miles - (50*transfers);

    return;
}

/* Program output:

Welcome to the JetBlue booking system.

*** Customer 1 ***
Miles?   4810
Transfers?  2
Name? Leslie
Price is $2305
--- Entered, thank you---

*** Customer 2 ***
Miles?   380
Transfers?  0
Name? John
Price is $190
--- Entered, thank you---

*** Customer 3 ***
Miles?   0
--- Input terminated by user ---

*** Database printout: ***
Leslie  4810 mi 2 transfers $2305
John    380 mi  0 transfers $190
--- End of database ---
*/
