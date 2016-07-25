#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class Root
{
private:
		double a, b, c;
		double x1, x2;
		double D;
public:
	void SetData(double val_a, double val_b,double val_c)
	{
		cin >> val_a;
		cin >> val_b;
		cin >> val_c;
		a = val_a;
		b = val_b;
		c = val_c;
	}
	void show1()
	{
		cout << "This equation is exception\n";
	}
	void show2()
	{
		cout << " This equation have one root\n";
		x1 = -b / (2 * a);
		cout << "x1= " << x1 << endl;
	}
	void show3()
	{
		cout << "Equation have two root\n";
		D = sqrt(D);
		x1 = (-b + D) / (2 * a);
		x2 = (-b - D) / (2 * a);
		cout << "x1= " << x1 << "   x2= " << x2 << endl;
		
	}
	void dscr(double val_D)
	{
		D = val_D;
		double D = b*b - 4 * a*c;

		if (D < 0)
		{
			return show1();
		}
		if (D == 0)
		{
			return show2();
		}
		if (D> 0)
		{
			return show3();
		}
	}
};


int main()
{
	Root d;
	cout << "Enter value through 'enter'\n";
	d.SetData(0, 0, 0);
	d.dscr(0);

	return 0;
}