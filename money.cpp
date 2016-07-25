#include "money.h"
#include<iostream>


money::money()
{
}
money::money(int Gryvna, int Kopeyka)
{
	Grv = Gryvna;
	Kop = Kopeyka;
}
void money::Add_grv(int Gryvna)
{
	Grv += Gryvna;
}
void money::Add_kop(int Kopeyka)
{
	Kop += Kopeyka;
	Grv += Kop / 100;
	Kop %= 100;
}
money money:: operator+(const money&t)const
{
	money sum;
	sum.Kop = Kop + t.Kop;
	sum.Grv = Grv + t.Grv + sum.Kop / 100;
	//sum.Kop %= 100;
	return sum;
}
void money::Show()const
{
	std::cout << Grv << " " << Kop << " \n";
}

money::~money()
{
}