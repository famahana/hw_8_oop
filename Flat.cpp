#include "Flat.h"
#include <iostream>

Flat::Flat()
{
	area = 0;
	price = 0;
}

Flat::Flat(int area,int price)
{
	this->area = area;
	this->price = price;
}

bool Flat::operator==(Flat& obj)
{
	return this->area == obj.area;
}

bool Flat::operator>(Flat& obj)
{
	return this->price > obj.price;
}

Flat& Flat::operator=(const Flat& obj)
{
	this->area = obj.area;
	this->price = obj.price;
	return *this;
}



void Flat::print()
{
	std::cout << "Area:" << area << " Price:" << price <<  std::endl;
}
