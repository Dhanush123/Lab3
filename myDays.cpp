#include <string>
#include <iostream>

using namespace std;

int main()
{
    int days = 0;
    days = 365 * 19;
    days += 4;
    days -= 226;
    days -= 112;
    cout << "DOB: Aug 15, 1997" << endl;
    cout << "Due: Sept 10, 2015" << endl;
    cout << "Age: " << days << " days" << endl;
}
