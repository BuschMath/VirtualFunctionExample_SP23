#include <iostream>

using namespace std;

class parent
{
public:
	parent() {};

	virtual void Print()
	{
		cout << "This is the parent!\n";
	}

};

class child : public parent
{
public:
	child() {};

	void Print()
	{
		cout << "This is the child!\n";
	}
};

class childTwo : public parent
{
public:
	childTwo() {};
};

int main()
{
	parent p;
	child c;
	childTwo c2;

	p.Print();
	c.Print();
	c2.Print();

	return 0;
}