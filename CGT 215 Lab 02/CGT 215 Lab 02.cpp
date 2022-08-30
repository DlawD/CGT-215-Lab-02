#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "A=" << A << endl;
	cout << "B=" << B << endl;

	X = -B/ A;
	
	cout << "The answer is: X=" << X << endl;

}