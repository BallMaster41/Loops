#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Give a countdown: ";
    cin >> number;

    while (number <= 0) {    
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid number, try again: ";
        cin >> number;
    }

    while (number > 0 || cin.fail()) {
        cout << "T-" << number << "\n";
        number = number - 1;
    }

    cout << "Blast off!!\n";

}
