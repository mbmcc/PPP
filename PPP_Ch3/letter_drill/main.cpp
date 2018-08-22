#include "std_lib_facilities.h"
int main(){

  cout << "Enter the name of the person you want to write to:  \n";
  string first_name;
  cin >> first_name;
  string friend_name;
  cout << "Enter the name of another friend\n";
  cin >> friend_name;
  cout << "Dear " << first_name <<",\n";
  cout << "\tHow are you? I am fine. I miss you.\n \
    How is your business going? Hiked any good mountains lately? \n \
    I would really like to see you. When can we meet?\n \
    Have you seen "<< friend_name << " lately? \n";

    

}
