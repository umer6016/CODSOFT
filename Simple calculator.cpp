#include <iostream>
using namespace std;
int main()
{
	char op;
	double a , b;
	cout<<"Enter the numbers for operation :";
	cin>>a>>b;
	cout << "Enter the operation you want to do : \n1.Addition (+) \n2.Subtraction (-) \n3.Multiplication (*)\n4.Division (/) "<<endl;
		cin >> op;

		switch(op){
		case '+': 
		{
			cout<<a + b;
			break;
		}
		case '-': 
		{
			cout << a - b;
			break;
		}
		case '*': 
		{
			cout << a * b;
			break;
		}
		case '/': 
		{
			if(a==0 || b==0)
			{
				cout << "Division by 0 is undefined";
				break;
			}
			else 
			{
				cout << a / b;
				break;
			}
		}
        default:
		{
            cout<<"Enter a valid input";
			break;
        }
    			}
				return 0;
}