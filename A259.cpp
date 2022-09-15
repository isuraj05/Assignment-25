#include<iostream>
using namespace std;

class Circle
{
	private:
		int radius;
		float area;
	public:
		void setRad(int r) { radius=r; }
		int getRad() { return radius; }
		
		void cirArea()
		{
			area=3.14*radius*radius;
		}
		float getCirArea() { return area; }
};

int main()
{
	Circle c1;
	c1.setRad(6);
	c1.cirArea();
	cout<<"Area of circle is "<<c1.getCirArea();
	return 0;
}
