#include <iostream>

using namespace std;

class Date {
	public:
		Date(int d, int m, int y){
			setDay(d);
			setMonth(m);
			setYear(y);
		}
		
		void setDay(int d){
			day = d;
		}
		
		int getDay(){
			return day;
		}
		
		void setMonth(int m){
			if((m <= 12) && (m >= 1)){
				month = m;
			}
			else
				month = 1;
		}
		
		int getMonth(){
			return month;
		}
		
		void setYear(int y){
			year = y;
		}
		
		int getYear(){
			return year;
		}
		
		void displayDate(){
			cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
		}
		
	private:
		int day;
		int month;
		int year;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Date myDate(5, 13, 2020);
	myDate.displayDate();
	
	return 0;
}