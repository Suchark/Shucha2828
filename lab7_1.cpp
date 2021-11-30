#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string func4(string a){
 
 a = func2 (a);

 if (func1 (a) == a){
     return "Yes";
 } 
 else{
     return "No";
 }
}



int main(){

	string c;
	string u;
    cout << "Input text: ";
	cin >> c;

    cout << "Reversed text: " << func1(c) << endl ;

    cout << "Palindrome: " << func4(c) ;

    return 0;
}
