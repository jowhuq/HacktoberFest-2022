#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public:
		void read()
		{
			cout<<"\n Enter The REAL PART:";
			cin>>real;
			cout<<"\n Enter The IMAGINARY PART:";
			cin>>img;
		}
		complex operator + (complex c2)
		{
			complex c3;
			c3.real=real+c2.real;
			c3.img=img+c2.img;
			return c3;
		}
		void display()
		{ 
			cout<<real<<"+"<<img<<"i";
		}
};
int main()
{
	complex c1, c2, c3;
	int choice, cont;
	cout<<"\n\n Enter The First Complex Number:";
	c1.read();
	cout<<"\n\n Enter The Second Complex Number:";
	c2.read();
	c3=c1+c2;  //binary+overloaded
	cout<<"\n\n SUM=";
	c3.display();
	return 0;
}
