#include <iostream>

using namespace std;

int main(){
	int *ptr = NULL; //bos bir pointer olusturuyoruz
	ptr = new int; //bu pointerin int degeri isaret edecegini belirtiyoruz
	*ptr = 42; //pointeri derefere edip atama yapiyoruz
	cout << *ptr << endl; //pointerin isaret ettigi adresteki degeri basiyoruz
	cout << ptr << endl; //pointerin isaret ettigi adresi basiyoruz
	delete ptr; //is bitince de adresi serbest birakiyoruz

	int *parr = NULL; //bos bir pointer olusturuyoruz
	parr = new int[5]; //bu pointerin dinamik olarak bes elemanli diziyi isaret edecegini belirtiyoruz
	for(int i = 0; i < 5; i++) //dizi elemanlarina atama yapıyor...
	       parr[i] = i;
	for(int i = 0; i < 5; i++)
		cout << parr[i] << " "; //..ve onlari bastiriyoruz
	cout << endl;
	delete []parr; //is bitince dizi adreslerini serbest birakiyoruz
	return 0;
}
