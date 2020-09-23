#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__

#endif /* defined */

#include <string>
class CartesianPoint
{
public:


	CartesianPoint(int x = 1, int y = 1);

	// get x
	int GetX();

	// get y
	int GetY();

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(CartesianPoint pointTo) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value
};