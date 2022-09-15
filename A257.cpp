#include<iostream>
using namespace std;

class Greatest
{
	private:
		int a,b,c,great;
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
		
		void grtNum();
		
		int getGrt() { return great; }
};	
void Greatest::grtNum()
{
	if(a>b)
		if(a>c)
			great=a;
		else
			great=c;
	
	else
		if(b>c)
			great=b;
		else
			great=c;
}

int main()
{
	Greatest g1;
	g1.setNum(9,2,5);
	g1.grtNum();
	cout<<"Greatest number amomg "<<g1.getA()<<","<<g1.getB()<<" and "<<g1.getC()<<" is "<<g1.getGrt();
	return 0;
}
