#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int imag;
	public:
		void setReal(int r) { real=r; }
		void setImag(int i) { imag=i; }
		
		int getReal() { return real; }
		int getImag() { return imag; }
};

int main()
{
	Complex c1;
	c1.setReal(5);
	c1.setImag(3);
	cout<<c1.getReal()<<"+"<<c1.getImag()<<"i";
	return 0;
}
