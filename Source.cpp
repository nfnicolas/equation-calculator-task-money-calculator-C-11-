//calculator
#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;
class Base
{
	double x;
public:
	Base() { x  = 0; }
	Base(double a) { x = a;  }
	void set(double&i)
	{
		cin >> x;
	}
	void get(double&i)
	{
		i = x;
	}
	Base operator+(const Base&a);
	Base operator-(const Base&a);
	Base operator*(const Base&a);
	Base operator/(const Base&a);
	
	
};
Base Base::operator+(const Base&a)
{
	Base res;
	res.x = x + a.x;
		return res;
}
Base Base ::operator-(const Base&a)
{
	Base res;
	res.x =x- a.x;
	return res;
}
Base Base::operator*(const Base&a)
{
	Base res;
	res.x = x*a.x;
	return res;
}
Base Base::operator/(const Base&a)
{
	Base res;
	assert(a.x!=NULL);
	res.x = x / a.x;
	return res;
}

class Figure
{
public:
	
	virtual void set() = 0;
	
	virtual void show()const = 0;
};
class Rectangle:public Figure
{
private:
	double a, b;
public:
	void set()  { cin >> a; cin >> b; }
	void show()const 
	{
		cout << "The square rectangle is " << a*b << "\n";
	}
};
class Trapeze:public Figure
{
	double a, b, h;
public:
	void set()
	{
		cin >> a;
		cin >> b;
			cin >> h;
	}
	void show()const
	{
		cout << "The square trapeze is " << 0.5*(a + b)*h << "\n";
	}
};
int main()
{
	cout << "Select 1 or 2 : Calculztor or Computed Square\n";
	int r;
	cin >> r;
	if (1 == r)
	{
		Base ob, ob1, ob2;
		cout << " Mode Calculator which can do arithmetic\n";
		cout << "Enter the numbers\n";
		double t;
		char ch;
		
		ob1.set(t);
		ob2.set(t);
		cout << "Select an action\n";
		cin >> ch;
		switch (ch)
		{
		case'+':
			ob = ob1 + ob2;
			break;
		case'-':
			ob = ob1 - ob2;
			break;
		case'*':
			ob = ob1*ob2;
			break;
		case'/':
			ob = ob1 / ob2;
			break;
		default:
			cout << "Errore enter action. Try againe\n";

		}
		ob.get(t);
		cout << t << "\n";
	}
	else if(2==r)
	{
		cout << "Mode Figure\n";
		cout << "What are you want computed figure?  1-Rectangle or 2-Trapeze\n";
		int w=0;
		cin >> w;
		Figure*p;
		if (1 == w)
		{
			Rectangle or ;
			p = &or ;
			double x, y, e;
			cout << "Enter value 'a','b' for rectangle\n";
			p->set();
			p->show();

		}
		else if(2==w)
		{
			Trapeze ot;
			p = &ot;
			cout << "Enter value 'a' , 'b', 'h' for trapeze \n";
			p->set();
			p->show();
		}
	}
	return 0;
}
