#pragma once

// Header ==> Derived/Child class

#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream>
#include "Triangle.h"
using namespace std;

class Isosceles : public Triangle
{
public:
	Isosceles();

	Isosceles(int, int, int);

	int getBase() const;

	int getSideOne() const;

	void setBase(int);

	void setSideOne(int);

	~Isosceles();

	int getPerimeter() const;

	void printInfo() const;

private:
	int base;
	int sideOne;

};

#endif // !ISOSCELES_H



