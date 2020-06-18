#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,results;
	cout << "Enter a value for a";
	cin >> a;
	cout << "Enter a vaule for b";
	cin >> b;
	cout << "Enter a value for c";
	cin >> c;
	
	results= ((pow(b, 2.0))-(4*a*c));
	cout << results;

return 0;
}
