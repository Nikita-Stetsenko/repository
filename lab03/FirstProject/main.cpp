#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

void Degree4()
{
	int first;
	cout << "A number to the 4th power" << endl;
	cin >> first;
	first = first * first;
	first = first * first;
	cout << first << endl;
}

void Degree6()
{
	int first, second, three;
	cout << "A number to the 6th power" << endl;
	cin >> first;
	second = first * first;
	three = second * second;
	first = three * three;
	cout << first << endl;
}

void Degree8()
{
	int first, second;
	cout << "A number to the 8th power" << endl;
	cin >> first;
	second = first * first;
	second = second * second;
	first = second * second;
	cout << first << endl;
}

void Degree10()
{
	int first, second, three, four;
	cout << "A number to the 10th power" << endl;
	cin >> first;
	second = first * first;
	three = second * second;
	four = three * three;
	first = four * second;
	cout << first << endl;
}

int main()
{
	Degree4();
	Degree6();
	Degree8();
	Degree10();

	return 0;
}