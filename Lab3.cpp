#include <iostream>
using namespace std;
int main() {

string name;
float age,salary;
//cout<<"Enter your name\n";
//getline(cin,name);
cout<<"Enter your age\n";
cin>>age;
cout<<"Enter your salary\n";
cin>>salary;

if(salary<200000 && age<=30)
cout<<"You are poor man, but don't worry'";
if(salary>=200000 && age>=30){
	if(salary<=500000 && age<=50) 
	
	cout<<"You are average";
}

if(salary>500000 && age>50)
cout<<"you are rich but old:)";

//cout<<name;
//cout<<age;
//cout<<salary;
    return 0;
}




