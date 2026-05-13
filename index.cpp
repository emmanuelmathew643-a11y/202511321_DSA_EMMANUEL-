#include <iostream>
#include <string>
using namespace std;

int main()
{
    long KeyNumber = 781465415;
    long phoneNumbers[3];
    int i = 0;

    do {
        cout << "Enter your phone Number" << endl;
        cin >> phoneNumbers[i];
        i = i + 1;

    } while(i < 3);

    // Linear Search
    for(int i = 0; i < 3; i++) {

        if(phoneNumbers[i] == KeyNumber) {

            cout << "Ester number is found" << endl;
            break;
        }
    }

    return 0;
}