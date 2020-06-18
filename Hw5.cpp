#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,results,x1,x2;
	cout << "Enter a value for a";
	cin >> a;
	cout << "Enter a vaule for b";
	cin >> b;
	cout << "Enter a value for c";
	cin >> c;
	
	results= ((pow(b, 2.0))-(4*a*c));
	
	
	
	if (results>0) {
		x1 = (-b + sqrt((pow(b, 2.0))-(4*a*c)))/(2*a);
		x2 = (-b - sqrt((pow(b, 2.0))-(4*a*c)))/(2*a);
		cout << "x1 = " << x1 << endl; 
		cout << "x2 = " << x2 << endl;
		}
		
		else if (results==0) {
		x1 = (-b)/(2*a);
		x2 =  (-b)/(2*a);
		cout << "x1 = x2 =" << x1 << endl;
		}
		
		else (results<0); {
		x1 = ((-b)/(2*a))+sqrt(-((pow(b, 2.0))-(4*a*c)))/(2*a);
		x2 =  (-b)/(2*a)-sqrt(-((pow(b, 2.0))-(4*a*c)))/(2*a);
		cout << "x1 = " << x1 << endl; 
		cout << "x2 = " << x2 << endl;
		}

return 0;
}
