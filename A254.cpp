#include<iostream>
using namespace std;

class LargestNumber
{
	private:
		int a,b,c,large;
	public:
		void setNum(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		
		int getA() { return a; }
		int getB() { return b; }
		int getC() { return c; }
		
		void maxNum();
		
		int getMax() { return large; }
};	
void LargestNumber::maxNum()
{
	if(a>b)
		if(a>c)
			large=a;
		else
			large=c;
	
	else
		if(b>c)
			large=b;
		else
			large=c;
}

int main()
{
	LargestNumber l1;
	l1.setNum(8,5,3);
	l1.maxNum();
	cout<<"Largest number amomg "<<l1.getA()<<","<<l1.getB()<<" and "<<l1.getC()<<" is "<<l1.getMax();
	return 0;
}
