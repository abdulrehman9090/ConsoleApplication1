//#include<iostream>
//using namespace std;
//
//class Shape {
//public:
//	virtual void displayArea() = 0;
//};
//
//
//
//class Triangle : public Shape {
//private:
//	double length;
//	double base;
//public:
//	Triangle(double, double);
//	void displayArea();
//};
//
//Triangle::Triangle(double l, double b) {
//	this->length = l;
//	this->base = b;
//}
//
//
//
//void Triangle::displayArea() {
//	double area = (length * base) / 2;
//	cout << "Area of square is : " << area << endl;
//}
//
//
//
//
//class Rectangle : public Shape {
//private:
//	double length;
//	double width;
//public:
//	Rectangle(double, double);
//	void displayArea();
//};
//
//Rectangle::Rectangle(double l, double w) {
//	this->length = l;
//	this->width = w;
//}
//
//
//
//void Rectangle::displayArea() {
//	double area = length * width;
//	cout << "Area of square is : " << area << endl;
//}
//
//
//
//
//class Square : public Shape {
//private: 
//	double length;
//public:
//	Square(double);
//	void displayArea();
//};
//
//Square::Square(double l) {
//	this->length = l;
//}
//
//
//
//void Square::displayArea() {
//	double area = length * length;
//	cout << "Area of square is : " << area << endl;
//}
//
//
//int main() {
//
//	Shape* s = new Triangle(5, 4);
//	s->displayArea();
//	delete s;
//
//	s = new Rectangle(5, 4);
//	s->displayArea();
//	delete s;
//
//	s = new Square(5);
//	s->displayArea();
//	delete s;
//	
//
//	return 0;
//}