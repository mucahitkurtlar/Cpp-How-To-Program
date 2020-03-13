#define SIZE 10
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int arr[SIZE]; //SIZE boyutlu dizi olustur
	int *ptr = arr + SIZE; //ptr, dizinin son adresinden bir sonraki adresi refere edecek
	for(int *p = arr; p < ptr; p++) //pointeri dizinin adresi ile baslat, bu pointer ptr'den kucuk oldugu surece devam et, pointeri bir birim artir
		*p = rand() % 100; //pointerin isaret ettigi yere rastgele sayi yaz
	for(int *p = arr; p < ptr; p++)
		cout << *p << " "; //ayni bicimde bu sayilari ekrana bastir
	cout << endl;
	for(int i = 0; i < SIZE; i++)
		cout << arr[i] << " "; //ayni diziyi standart yontemle bastir
	cout << endl;
	return 0;
}
