#include <iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int breadth;
		void setter0();
        void setter1(int l,int b);
		void setter2(int n);		
		int getArea();
}rec;

void Rectangle:: setter0(){
    length=0;
    breadth=0;
}
void Rectangle::setter1(int l,int b)
{
	length = l;
    breadth = b;
}
void Rectangle:: setter2(int n){
    length=n;
    breadth=n;
}

int Rectangle::getArea()
{
	return length * breadth;
}

main()
{
    Rectangle rec;
    rec.setter0();
	int area = rec.getArea();
	cout << "Area : " << area << endl;
    rec.setter1(7,8);
	int area1 = rec.getArea();
	cout << "Area : " << area1 << endl;
    rec.setter2(5);
	int area2 = rec.getArea();
	cout << "Area : " << area2 << endl;   
	
}
