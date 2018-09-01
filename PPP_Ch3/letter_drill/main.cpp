#include "std_lib_facilities.h"
int main(){

  //program setup 
  
  cout << "Enter the name of the person you want to write to:  \n";
  string first_name;
  cin >> first_name;
  cout << "What is the age of that person? \n";
  int age=0;
  cin >> age;
  if (age < 0 | age > 110)
     simple_error("your kidding!");  
  cout << "Enter the name of another friend\n";
  string friend_name;
  cin >> friend_name;
  cout << "Enter m is that person is male, and f if that person is female: \n";
  char friend_sex =0;
  cin >> friend_sex;
  
  //program logic
  string business;
   if (age > 70)
     business = "I hope you're enjoying your retirement. ";
   else  
     business = "How's your life going? "; 
   string next_line;
  if (age < 12){
    age++;
    string s_age = to_string(age);
    next_line = "Next year you will be "+ s_age +". Wow I bet that feels awesome!\n";
  }
  if (age == 17)
   next_line = "Next year you will be able to vote. \n";
  
 string call_me = "call_me ";
 if (friend_sex == 'm')
    call_me ="If you see "+ friend_name +" please ask him to call me. \n";
  else if (friend_sex == 'f')
    call_me ="If you see "+ friend_name +" please ask her to call me. \n";
   
  // Start of the Letter 
   cout << "\n \n"
   << "Dear " <<first_name<<",\n"
   << "\tHow are you? I am fine. I miss you.\n"
   << "I hear that you just had a birthday and that you are "<<age<<" years old. \n"
   << next_line 
   << business << "Have you traveled anywhere fun lately? \n"
   << "I would really like to see you. When can we meet?\n"
   << "Have you seen "<<friend_name<< " lately? "
   << call_me
   << "Sincerely, \n\nMatt \n" << endl;





 
    

}
