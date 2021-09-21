#include<iostream>
using namespace std;
class Box
{
    float length,breadth,height;
public:
    Box()
    {
        length = breadth = height = 0;
    }
    Box(float length, float breadth, float height)
    {
        this -> length = length;
        this -> breadth = breadth;
        this -> height = height;
    }
    float getVolume()
    {
        return length*breadth*height;
    }
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    float getHeight()
    {
        return height;
    }
    void setLength(float length)
    {
        this -> length = length;
    }
    void setBreadth(float breadth)
    {
        this -> breadth = breadth;
    }
    void setHeight(float height)
    {
        this -> height = height;
    }
    void printDim()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << getVolume() << endl;
    }
    bool operator<(Box obj)
    {
        if (getVolume() < obj.getVolume())
        {
            return true;
        }
        return false;
    }
    bool operator>(Box obj)
    {
        if (getVolume() > obj.getVolume())
        {
            return true;
        }
        return false;
    }
    
    bool operator<=(Box obj)
    {
        if (getVolume() <= obj.getVolume())
        {
            return true;
        }
        return false;
    }
    bool operator>=(Box obj)
    {
        if (getVolume() >= obj.getVolume())
        {
            return true;
        }
        return false;
    }
    bool operator==(Box obj)
    {
        if (getVolume() == obj.getVolume())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Box b1(10,20,30);
    Box b2(5,10,15);
    cout << "Dimensions of B1 are" << endl;
    b1.printDim();
    cout << "\nDimensions of B2 are" << endl;
    b2.printDim();
    std::cout << std::boolalpha;
    cout << "\nB1 < B2 is " << (b1 < b2) << endl;
    cout << "B1 <= B2 is " << (b1 <= b2) << endl;
    cout << "B1 > B2 is " << (b1 > b2) << endl;
    cout << "B1 >= B2 is " << (b1 >= b2) << endl;
    cout << "B1 == B2 is " << (b1 == b2) << endl;
    cout << "\nVolume of B1 < B2 is " << (b1 < b2) << endl;
    cout << "Volume of B1 <= B2 is " << (b1 <= b2) << endl;
    cout << "Volume of B1 > B2 is " << (b1 > b2) << endl;
    cout << "Volume of B1 >= B2 is " << (b1 >= b2) << endl;
    cout << "Volume of B1 == B2 is " << (b1 == b2) << endl;
}