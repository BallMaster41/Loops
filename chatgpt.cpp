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
            cout << "Why did the chicken cross the road?\n";
            int question;
            cout << "";
            cin >> question;
            cout << "To get to the other side!\n";
            cout << "(I know I'm super creative with my jokes)\n";
        }

        else if (action == "quit" or action == "exit") {
            return false;
        }

        else {
            cout << "Invalid input\n";
        }

    }


}
