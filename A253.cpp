#include<iostream>
using namespace std;

class Factorial
{
	private:
		int a,fact;
	public:
		void setA(int x) { a=x;}
		int getA() { return a; }
		
		void calFact();
		int getFact() { return fact; }
};
void Factorial::calFact()
{
	int i,f=1;
	if(a<=0)
	{
		fact=1;
		return;
	}
	
	for(i=1;i<=a;i++)
		f=f*i;
	fact=f;
}

int main()
{
	Factorial f1;
	f1.setA(5);
	f1.calFact();
	cout<<"Factorial of "<<f1.getA()<<" is "<<f1.getFact();	 
	return 0;
}
