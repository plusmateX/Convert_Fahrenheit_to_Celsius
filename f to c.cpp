//c to f
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float f;

	cout << "enter a Fahrenheit: ";
	cin >> f;

	cout << "this Fahrenheit temperature in Celsius is: " << fixed << setprecision(3) << (f - 32) * 5/9 << endl;

	return 0;    

}
