#include <iostream>

using namespace std;

class Car {
	private:
		float hp;
		string model;
	public:
		Car(float h, string m){
			model = m;
			hp = h;
		}
		
		void setHp(float h){
			hp = h;
		}
		
		float getHp(){
			return hp;
		}
		
		void setModel(string m){
			model = m;
		}
		
		string getModel(){
			return model;
		}
		
		void print(){
			cout << getModel() << "\t" << getHp() << endl;
		}
};
int main(int argc, char** argv) {
	Car yerliAraba(200.5, "SUV");
	yerliAraba.print();
	yerliAraba.setModel("Sedan");
	yerliAraba.print();
	Car yabanciAraba(255.3, "BMW");
	yabanciAraba.print();
	
	return 0;
}