#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 

class Point
{

   int x;

   int y;

public:

   Point(int x, int y)

   {

      this->x = x;

      this->y = y;

   }

   int getX() const { return x; }

   int getY() const { return y; }
};
 

class myComparator
{

public:

    int operator() (const Point& p1, const Point& p2)

    {

        return p1.getX() > p2.getX();

    }
};
 

int main ()
{

    priority_queue <Point, vector<Point>, myComparator > pq;

    pq.push(Point(10, 2));

    pq.push(Point(2, 1));

    pq.push(Point(1, 5));
 

    while (pq.empty() == false)

    {

        Point p = pq.top();

        cout << "(" << p.getX() << ", " << p.getY() << ")";

        cout << endl;

        pq.pop();

    }
 

    return 0;
}