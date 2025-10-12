#include<iostream>
using namespace std;
struct ad
{
	int real;
	int img;
};
void add(struct ad c,struct ad d)
{
	int real=c.real+d.real;
	int img = c.img+d.img;
	cout << "Result: " << real << " + " << img << "i" << endl;
}

int main()
{
	ad a, b;
	cout << "Input the Real part of first complex number: "; cin >> a.real;
	cout << "Input the imaginary part of the first complex number: "; cin >> a.img;
	cout << "Input the Real part of second complex number: "; cin >> b.real;
	cout << "Input the imaginary part of the second complex number: "; cin >> b.img;
	cout << "First Complex number: " << a.real << " + " << a.img <<"i"<< endl;
	cout << "Second Complex number: " << b.real << " + " << b.img << "i" << endl;
	add(a, b);
	return 0;
}