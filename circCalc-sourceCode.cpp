#include <iostream>
using namespace std;

int main() {
    double pi;
    pi = 3.141592653589793238462643383279;
    double radius;
    cout << "enter the radius of the circle so we can calculate the circumference" << endl;
    cin >> radius;
    double circumference;
    circumference = 2 * pi * radius;
    cout << "the circumference of your circle is "; cout << circumference << endl;
}