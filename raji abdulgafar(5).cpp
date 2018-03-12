#include<iostream>
#include<cmath>
/*
NAME: RAJI ABDULGAFAR 
MATRIC NO: 2016/1/******
DEPARTMENT: CYBERSECURITY SCIENCE
*/
using namespace std;
void myFunc(){
	// declaring the variables
	double a,b,c,d,solve, root1,root2,real,imaginary;
	cout<< "Given a Quadratic equation determine the two root: take a as x^2, b as x and c as the constant respectively." <<endl;
	cout<< "Enter the value of a: ";
	// taking input from user
	cin>> a;
	cout<< "Enter the value of b: ";
	// taking input from user
	cin>> b;
	cout<< "Enter the value of c: ";
	// taking input from user
	cin>> c;
	// computing your values
	d=b*b-4*a*c;
	if (d>0)
	{
		root1 = (-b + sqrt(d)) / (2*a);
		root2 = (-b - sqrt(d)) / (2*a);
		cout << "Roots are: " << endl;
		cout << "x1 = " << root1 << endl;
		cout << "x2 = " << root2 << endl;
	
	}
	else if (d == 0) 
	{
		cout << "Roots are: " << endl;
		root1 = (-b + sqrt(d)) / (2*a);
		cout << "x1 = x2 =" << root1 << endl;
	}
	else { //this is used when d value of d is a negative number so it is not considered
		real = -b/(2*a);
		imaginary =sqrt(-d)/(2*a);//the imaginary number i.e negative number
		cout << "Roots are: " << endl;
		cout << "x1 = " << real << "+" << imaginary << "i" << endl;//values showing with "i" at the end are imaginary the are not part of the answer
		cout << "x2 = " << real << "-" << imaginary << "i" << endl;
		}
}
int main() {

    myFunc();

    
    
}
