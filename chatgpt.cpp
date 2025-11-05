#include <iostream>
using namespace std;

int main()
{

    while (true){

        string action;
        cout << "";
        cin >> action;

        if (action == "hi") {
            cout << "Hello\n";
        }

        else if (action == "joke") {
            cout << "Y'know what you'd call the Flintstones if they were black?\n";
            cout << "You'd call em niggers!\n";
        }

        else if (action == "quit" or action == "exit") {
            return false;
        }

        else {
            cout << "Invalid input\n";
        }

    }

}