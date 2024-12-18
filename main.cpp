// Pranav
// 12/18/2024
// Random and Round

#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{
    double x;
    // Input
    cout << "Enter a number: " << endl;
    cin >> x;

    // Get rounded number
    double roundedNum = round(x * 100.0) / 100.0;

    // Output
    cout << roundedNum << endl;

    // Get rounded number out of 10 
    srand((int)time(0));
    int r = (rand() % 10) + 1;

    // Output
    cout << r << endl;

    return 0; 
}
