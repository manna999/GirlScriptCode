#include <iostream>
using namespace std;

int main()
{
	char c;
	
	cout << "Enter a character";
	cin >> c;

	if (c== 'a'|| c== 'e'|| c== 'i' || c== 'o' || c== 'u')
	cout << c << "is a vowel";
	else
	cout << c << " is not a vowel";


return 0;
}
