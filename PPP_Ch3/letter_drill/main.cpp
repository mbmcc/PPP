#include "std_lib_facilities.h"
int main(){

  cout << "Enter the name of the person you want to write to:  \n";
  string first_name;
  cin >> first_name;
  cout << "Enter the name of another friend\n";
  string friend_name;
  cin >> friend_name;
  cout << "Enter m is that person is male, and f if that person is female: \n";
  char friend_sex {0};
  cin >> friend_sex;
  string sex = "";
  cout << "Dear " << first_name <<",\n";
  cout << "\tHow are you? I am fine. I miss you.\n"  
  << "How is your business going? Hiked any good mountains lately?\n"
  << "I would really like to see you. When can we meet?\n"
  << "Have you seen "<< friend_name << " lately? \n"
  ;
  if(friend_sex=='m') 
    sex = "him";
  else if (friend_sex=='f')
    sex = "her";
  cout << "If you see " << friend_name << " please ask "<< sex <<" to call me.\n";


    

}
