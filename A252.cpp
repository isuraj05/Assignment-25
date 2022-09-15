#include<iostream>
using namespace std;

class Time
{
	private:
		int hrs;
		int mins;
		int secs;
	public:
		void setHrs(int h) { hrs=h; }
		void setMins(int m) { mins=m; }
		void setSecs(int s) { secs=s; }
		
		int getHrs() { return hrs; }
		int getMins() { return mins; }
		int getSecs() { return secs; }
};

int main()
{
	Time t1;
	t1.setHrs(3);
	t1.setMins(45);
	t1.setSecs(50);
	cout<<t1.getHrs()<<":"<<t1.getMins()<<":"<<t1.getSecs();
	return 0;
}
