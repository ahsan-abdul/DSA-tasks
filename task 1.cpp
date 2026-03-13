//#include<iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual double area() = 0;
//	virtual~Shape() {};
//
//};
//class Circle:public Shape {
//	double radius;
//public:
//	Circle(double r) {
//		radius = r;
//	}
//	double area()override {
//		return 3.14 * radius * radius;
//	}
//
//};
//class Rectangle:public Shape {
//	double length, width;
//public:
//	Rectangle(double l, double w) {
//		length = l;
//		width = w;
//
//	}
//	double area()override {
//		return length * width;
//
//	}
//};
//int main()
//{
//	Shape* shapes[2];
//
//	shapes[0] = new Circle(5);
//	shapes[1] = new Rectangle(5, 7);
//
//	for (int i = 0; i < 2; i++)
//	{
//		cout << "Shape " << i + 1 << " Area : " << shapes[i]->area() << endl;
//		delete shapes[i];
//	}
//
//}