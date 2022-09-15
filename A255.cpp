#include<iostream>
using namespace std;

class ReverseNumber
{
	private:
		int n, rev;
	public:
		void setN(int a) { n=a; }
		int getN() { return n; }
		
		void revNum();
		int getRev() { return rev; }
};
void ReverseNumber::revNum()
{
	int r=0,x=n;
	while(x!=0)
	{
		r=r*10+x%10;
		x=x/10;
	}
	rev=r;
}

int main()
{
	ReverseNumber r1;
	r1.setN(956);
	r1.revNum();
	cout<<"Reverse of "<<r1.getN()<<" is "<<r1.getRev();
	return 0;
}
