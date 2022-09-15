#include<iostream>
using namespace std;

class Area
{
	private:
		int length,width,  radius,  base,height,  side;
		int ra,ta,sa;
		float ca;
	public:
		//to calculate area of rectangle
		void setLenWid(int l,int w)
		{
			length=l;
			width=w;
		}
		 
		int getLen() { return length; }
		int getWid() { return width; }
		
		void recArea()
		{
			ra=length*width;
		}
		
		int getRecArea() { return ra; }
		
		//to calculate area of circle
		void setRad(int r)
		 { 
		 	radius=r; 
		 }
		int getRad() { return radius; }
		
		void cirArea()
		{
			ca=3.14*radius*radius;
		}
		float getCirArea() { return ca; }
		
		//to calculate area of triangle
		void setBaseHgt(int b,int h)
		{ 
			base=b; 
			height=h; 
		}
		int getBase() { return base; }
		int getHgt() { return height; }
		
		void triArea()
		{
			ta=0.5*base*height;
		}
		float getTriArea() { return ta; }
		
		//to calculate area of square
		void setSide(int s)
		{ 
			side=s; 
		}
		int getSide() { return side; }
		
		void sqrArea()
		{
			sa=side*side;
		}
		int getSqrArea() { return sa; }
};

int main()
{
	Area a1;
	
	a1.setLenWid(5,6);
	a1.recArea();
	cout<<"Area of the rectangle is "<<a1.getRecArea();
	
	a1.setRad(6);
	a1.cirArea();
	cout<<endl<<endl<<"Area of circle is "<<a1.getCirArea();
	
	a1.setBaseHgt(5,6);
	a1.triArea();
	cout<<endl<<endl<<"Area of the triangle is "<<a1.getTriArea();
	
	a1.setSide(6);
	a1.sqrArea();
	cout<<endl<<endl<<"Area of square is "<<a1.getSqrArea();
	return 0;
}
