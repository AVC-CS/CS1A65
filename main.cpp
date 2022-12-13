#include "A65.hpp"

int main()
{
	int num1, num2, num3;
	getinput(num1, num2, num3);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
	swap(num1, num2, num3);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
}