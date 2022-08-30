#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Hello, my name is Yichen and I' m going to solve the equation:" << endl;
	cout << "AX + B = 0 , For X" << endl;
	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "A=" << A << " , " << "B=" << B << endl;

	X = -B/ A;
	
	cout << "The answer is: X=" << X << endl;

}