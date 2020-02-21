#include <iostream>

using namespace std;

class Point {
	public:
		Point(float x = 0, float y = 0){
			Point::x = x;
			Point::y = y;
		}
		void setPoint(float x, float y){
			Point::x = x;
			Point::y = y;
		}
		void setX(float x){
			Point::x = x;
		}
		void setY(float y){
			Point::y = y;
		}
		float getX(){
			return x;
		}
		float getY(){
			return y;
		}
		void printPoint(){
			cout << "(" << x << ", " << y << ")\n";
		}
		float shiftX(float n){
			return x += n;
		}
		float shiftY(float n){
			return	y += n;
		}


	private:
		float x, y;
};

class Vector {
	public:
		Vector(float startX = 0, float startY = 0, float endX = 0, float endY = 0){
			setStartPoint(startX, startY);
			setEndPoint(endX, endY);
		}

		void setStartX(float x){
			startPoint.setX(x);
		}
		void setStartY(float y){
			startPoint.setY(y);
		}
		void setEndX(float x){
			endPoint.setX(x);
		}
		void setEndY(float y){
			endPoint.setY(y);
		}
		void setStartPoint(float x, float y){
			setStartX(x);
			setStartY(y);
		}
		void setEndPoint(float x, float y){
			setEndX(x);
			setEndY(y);
		}
		void printVector(){
			cout << "(" << startPoint.getX() << ", " << startPoint.getY() << "), (" << endPoint.getX() << ", " << endPoint.getY() << ")\n";
		}
	private:
		Point startPoint;
		Point endPoint;


};

int main(){
	float n;
	Vector myVector;
	myVector.printVector();

	cout << "Set start x: ";
	cin >> n;
	myVector.setStartX(n);

	cout << "Set start y: ";
	cin >> n;
	myVector.setStartY(n);

	cout << "Set end x: ";
	cin >> n;
	myVector.setEndX(n);

	cout << "Set end y: ";
	cin >> n;
	myVector.setEndY(n);

	myVector.printVector();

	return 0;
}
