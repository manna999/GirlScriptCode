#include <iostream>
using namespace std;

int main () {
int sum=0, ave, i, x[5];

cout << "Enter the 5 numbers;" ;

for (int i=0; i<5; ++i)
{
	cin >> x[i];
	sum += x[i];
	ave = sum / 5;
}
cout << sum << endl;
cout << ave << endl;
return 0;
}
