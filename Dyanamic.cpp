#include <iostream>
#include <string>
 using namespace std;
int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    //  enter values for the dynamically allocated integer and string
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    cout << "Enter a string value: ";
    cin.ignore(); // Ignore newline character left in the input buffer
    getline(cin, *dynamicString);

    // Output the values of the dynamically allocated integer and string
    cout << "The value of the dynamically allocated integer: " << *dynamicInt << endl;
    cout << "The value of the dynamically allocated string: " << *dynamicString << endl;

    // Free dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
