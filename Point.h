#pragma once
#pragma once
#include <iostream>
using namespace std;

class Point
{
protected:
	long double x;
	long double y;
	long double z;

public:

	Point(long double x, long double y, long double z);
	Point();

	Point operator + (Point SecondPoint);
	Point operator + (int a);


	Point operator - (Point SecondPoint);
	Point operator - (int a);

	Point& operator= (Point SecondPoint);

	friend bool operator== (const Point& FirstPoint, const Point& SecondPoint);
	friend bool operator!= (const Point& FirstPoint, const Point& SecondPoint);
	friend std::ostream& operator<< (std::ostream& out, Point& point);

	void SetNewCoord();
};
struct Node
{
	Point point;
	Node* next;
};

class List
{
public:
	Node* head;
	List()
	{
		head = NULL;
	}
	void addNode(Point _point);
};
