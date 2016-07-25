#include<iostream>
#include"money.h"
using namespace std;
int main()
{
	money A;
	money B(15, 25);
	money C(5, 25);
	cout << "A=  \n";
	A.Show();
	cout << " B=  \n";
	B.Show();
	cout << " C= \n";
	C.Show();
	A = B.operator+(C);
	cout << "B.Sum= \n";
	A.Show();

	return 0;
}