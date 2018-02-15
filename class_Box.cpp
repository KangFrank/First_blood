#include<iostream>
using namespace std;

class Box
{
	public:
		double length;//length of a box
		double breadth;//breadth of a box
		double height;//height of a box
};

int main()
{
	Box box1;//define a object named box1 with a Box class
	//Box box2;//
	double volume=0.0;

	//details of box1
	box1.length=5.0;
	box1.height=6.0;
	box1.breadth=7.0;
    volume=box1.length*box1.height*box1.breadth;
    cout<<"box1's volume is "<<volume<<endl;
    return 0;
}