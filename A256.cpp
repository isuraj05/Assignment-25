#include<iostream>
using namespace std;

class Square
{
	private:
		int n,sqr;
		static int count;
	public:
		void setN(int a) { n=a; }
		int getN() { return n; }
		
		void calSqr()
		{
			count+=1;
			sqr=n*n;
		}
		
		int getCount() { return count; }
		
		int getSqr() { return sqr; }
};
int Square::count=0;

int main()
{
	Square s1;
	s1.setN(5);
	s1.calSqr();
	cout<<"Square of "<<s1.getN()<<" is "<<s1.getSqr()<<endl;
	cout<<"The function has been called "<<s1.getCount()<<" times";
	return 0;
}
