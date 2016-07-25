#pragma once
class money
{
	int Grv;
	int Kop;
public:
	money();
	money(int Gryvna, int Kopeyka);
	void Add_grv(int Gryvna);
	void Add_kop(int Kopeyka);
	money operator+(const money & t) const;
	money Sum(const money&t)const;
	void Show()const;
	~money();
};

