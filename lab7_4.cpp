#include<iostream>

#include<string>

using namespace std;

int main(){

 string name[] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
 int id[] = {123,196,225,329,420,451,515,666,690,787};
 double gpa[] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};


double number1;
 cout << "Please input GPA: ";
 cin >> number1;


 int number2 = 0;
 while ( number2 < 10 ){
  if( gpa[number2] >= number1 ){
   cout << id[number2] << " " << name[number2] << " " << gpa[number2] << "\n";
  }

  number2++;
 
 }
  

 return 0;

}


