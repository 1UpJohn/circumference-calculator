#include <iostream>
using namespace std;
char answer;

void calculate() {
    const double pi = 3.14159265358979323846;
    double radius;
    cout << "enter the radius of the circle so we can calculate the circumference" << endl;
    cin >> radius;
    double circumference = 2.0 * pi * radius;
    cout << "the circumference of your circle is " << circumference << endl;

    cout << "enter (a) to calculate another circumference, enter (b) to exit: ";
    cin >> answer;
}

int main()
{
    // Run at least once, then repeat while the user requests
    calculate();
    if (answer == 'a') {
        calculate();
    }
    return 0;
}