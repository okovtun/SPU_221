#include <iostream>
#include<iomanip>
using namespace std;

class Point {

private:
	int x = NULL;
	int y = NULL;

	Point& setX(int value) {
		if (value > 0) {
			x = value;
		}
		else {
			cout << "Error! X value must be greater than zero.\n";
		}
		return *this;
	}
	Point& setY(int value) {
		if (value > 0) {
			y = value;
		}
		else {
			cout << "\nError! Y value must be greater than zero.\n";
		}
		return *this;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

public:
	Point(int x, int y) {
		setX(x).setY(y);
	}
	double distance(Point& other) {
		return pow((pow(other.x - this->x, 2) + pow(other.y - this->y, 2)), 0.5);
	}

	friend double distance(Point& A, Point& B);
};

double distance(Point& A, Point& B) {
	return pow((pow(B.x - A.x, 2) + pow(B.y - A.y, 2)), 0.5);
}



int main() {

	Point A(1, 1);
	Point B(5, 5);
	Point C(12, 6);

	double distance_between_points = A.distance(B);
	cout << setprecision(2) << fixed;
	cout << distance_between_points << endl;

	distance_between_points = distance(C, B);
	cout << distance_between_points;

	return 0;
}