#include <iostream>
using namespace std;
int main() {
	//Declaring variables to store input
	double length_feet,length_inches;
	
	//Prompt user to enter length in feet and inches
	cout<<"Enter length in feet: ";
	cin>>length_feet;
	cout<<"Enter length in inches: ";
	cin>>length_inches;
	
	// 1 foot is equal to 30.48 centimeters
    // 1 inch is equal to 2.54 centimeters
	cout<<"Your length is: "<< length_feet*30.48 +length_inches*2.54<<" cm";
    return 0;
}




