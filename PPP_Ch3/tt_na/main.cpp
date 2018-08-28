/*
 * Try This:
 * Get the “name and age” example to run. 
 * Then, modify it to write out the age in months: read the input in years and multiply (using the * operator) by 12. Read the age into a double to allow for children who can be very proud of being five and a half years old rather than just five.
 */
#include "std_lib_facilities.h"


/* // Frist attempt
 
 int main() { 
    cout << "Please enter your first and second names\n"; 
    string first; 
    string second; 
    cin >> first >> second; // read two strings
    cout << "Hello, " << first << " " << second << '\n';
}
*/

// Name and age exmple
/*
int main() { 
    cout << "Please enter your first name and age\n"; 
    string first_name = "???"; // string variable // ("???” means “don’t know the name”) 
    int age = 0; // integer variable (0 means “don’t know the age”) 
    cin >> first_name >> age; // read a string followed by an integer 
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}
*/

// Name and age example modified
int main() { 
    cout << "Please enter your first name and age\n"; 
    string first_name = "???"; // string variable // ("???” means “don’t know the name”) 
    double age = 0; // integer variable (0 means “don’t know the age”) 
    cin >> first_name >> age; // read a string followed by an integer 
    cout << "Hello, " << first_name << " (age in months " << age*12 << ")\n";
}


