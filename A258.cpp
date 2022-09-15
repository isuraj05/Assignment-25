#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length, width,area;
	public:
		void setLenWid(int l,int w) { length=l; width=w; }
		
		int getLen() { return length; }
		int getWid() { return width; }
		
		void recArea()
		{
			area=length*width;
		}
		
		int getRecArea() { return area; }
};

int main()
{
	Rectangle r1;
	r1.setLenWid(5,6);
	r1.recArea();
	cout<<"Area of the rectangle is "<<r1.getRecArea();
	return 0;
}
