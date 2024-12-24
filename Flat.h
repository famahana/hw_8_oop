#pragma once
class Flat
{
private:
	int area;
	int price;
public:
	Flat();
	Flat(int area,int price);
	bool operator==(Flat& obj);
	bool operator>(Flat& obj);
	Flat& operator=(const Flat& obj);
	void print();
};

