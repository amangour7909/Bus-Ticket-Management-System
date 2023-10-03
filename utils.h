#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void printHeading(string header)
{
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n";
    cout << "\t\t\t\t\t\t\t\t\t\t                       " << header << "                     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t==========================================================\n\n";
}

string generatePNR(int n)
{
    srand(time(0)); // time(0) returns current time in seconds
                    // srand function initializes the random value generator with seed value further this value is used to generate random numbers

    string pnr;

    int randomNo = rand() % n;

    pnr = "PNR" + to_string(randomNo);

    return pnr;
}

string getCurrentDate()
{
    time_t t = time(NULL);
    tm *tPtr = localtime(&t);

    return to_string(tPtr->tm_mday) + "-" + to_string((tPtr->tm_mon) + 1) + "-" + to_string((tPtr->tm_year) + 1900);
}
#endif // UTILS_H