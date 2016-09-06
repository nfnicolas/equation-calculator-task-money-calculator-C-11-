//Калькулятор с применением с++11,сделано не до конца
#include<iostream>
#include<type_traits>
using namespace std;
template<typename T>
struct Number {
	T num;
	void set() { cin >> num; }
};
template<typename T,typename Y>
Number<typename common_type<T,Y>::type>
operator+(const Number<T>&lhs, const Number<Y>&rhs) 
{ 
	return{ lhs.num + rhs.num };
}
template<typename T,typename Y>
Number<typename common_type<T,Y>::type>
operator-(const Number<T>&lhs, const Number<Y>&rhs)
{
	return{ lhs.num - rhs.num };
}
int main(int argc, char*argv[])
{
	cout << "This calculator perfoms arithmetic operations such: ' + ' ' - ' ' / ' '*'\n";
	cout << "enter two numbers please\n";
	Number<int>n{ 0 };
	Number<double>m{ 0 };
	n.set();
	m.set();
	cout << "enter action\n"; 

	//......

	cout << (n + m).num;
	cout << (n - m).num;
	return 0;
}
