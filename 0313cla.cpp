#include<iostream>
using namespace std;
class A
{
private:
	int n1;
	int n2;

public:
	A():n2(0),n1(n2+2){}

	void Print()
    {
		cout << "n1:" << n1 << ", n2: " << n2 <<endl;
	}
};

int main()
{
	A a;
	a.Print();
	return 0;
}

