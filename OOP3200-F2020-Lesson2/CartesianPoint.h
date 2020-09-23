#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__

#include <string>
class CartesianPoint
{
public:

	//Constructor
	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	// Copy Constructor
	CartesianPoint(const CartesianPoint& point2);

	/* operator overloads*/
	CartesianPoint operator+(const CartesianPoint& point2) const;

	double operator-(const CartesianPoint& pointTo) const;
	bool operator==(const CartesianPoint& other_point) const;

	//friend overloads
	friend std::ostream& operator<<(std::ostream& out, const CartesianPoint& point);
	friend std::istream& operator>>(std::istream& in, CartesianPoint& point);

	//Accessors
	// get x
	int GetX() const; 

	// get y
	int GetY() const;

	//Mutators
	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& pointTo) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int m_X; // x-axis (horizontal) value
	int m_Y;  // y-axis (vertical) value
};

#endif /* defined */