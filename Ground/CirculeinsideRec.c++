#include<iostream>
using namespace std;

bool rectangleInCircle(int w, int h, int radius) {
	int rectangle,circule;
	rectangle=w*h;
	circule=2*3.14*radius;
	if(rectangle<circule)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
   cout<<rectangleInCircle(8,6,5);
}