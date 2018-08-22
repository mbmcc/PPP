#include "std_lib_facilities.h"
int main(){ 
    string previous = " "; // previous word; initialized to “not a word” 
    string current; // current word 
    cout << "Type some words, when finished press CRL+D"<< endl;
    while (cin >> current) { // read a stream of words 
        if (previous == current) // check if the word is the same as last 
                cout << "repeated word: " << current << '\n'; 
        previous = current;
    }
}
