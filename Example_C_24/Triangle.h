#pragma once

//Header ==> Base/Parent Class

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

using namespace std;

class Triangle
{
public:
	Triangle();

	Triangle(int);

	int getHeight() const;

	void setHeight(int);

	~Triangle();

	double getArea(int) const;


private:
	int height;

};

#endif // !TRIANGLE_H



