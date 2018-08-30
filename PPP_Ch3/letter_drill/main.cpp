#include "std_lib_facilities.h"
int main(){

  cout << "Enter the name of the person you want to write to:  \n";
  string first_name;
  cin >> first_name;
  cout << "Enter the name of another friend\n";
  string friend_name;
  cin >> friend_name;
  cout << "Enter m is that person is male, and f if that person is female: \n";
  char friend_sex =0;
  cin >> friend_sex;
  
  cout << "Dear " << first_name <<",\n"
   << "\tHow are you? I am fine. I miss you.\n"
   << "How is your business going? Hiked any good mountains lately? \n"
   << "I would really like to see you. When can we meet?\n"
   << "Have you seen "<< friend_name << " lately? ";
  if (friend_sex == 'm')
    cout << "If you see " <<friend_name<< " please ask him to call me. \n";
  else if (friend_sex == 'f')
    cout << "If you see " <<friend_name<< " please ask her to call me. \n";
  cout << "Sincerely, \n\n Matt \n" << endl;




 
    

}
