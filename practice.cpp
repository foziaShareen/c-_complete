// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    int num1, num2,result , check;
    check = 1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            result =   num1 + num2;
            break;
        case '-':
        	result =   num1 - num2;
            
            break;
        case '*':
          result =   num1 * num2;
            break;
        case '/':
           result =   num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Invalid! The operator is not correct";
            check =0;
        }
            if (check=1){
            	cout<<result;
			}
            		
		return 0;	
        }
			
