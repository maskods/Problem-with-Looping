#include <iostream>
using namespace std;

int main() {
	
	int n, genap = 0, ganjil = 0, positif = 0, negatif = 0;
	
	for(int i = 1; i > 0; i++) { 
		cin >> n;
		if(n == -999){
			break;
		}
		if (n%2 == 0) {
			genap = genap + 1;
		} else {
			ganjil ganjil + 1;
		}
		if (n > 0) {
			positif = positif + 1;
		} else if (n < 0){
			negatif = negatif + 1;
		}
	}
		cout << "Bilangan Genap : " << genap << endl;
		cout << "Bilangan ganjil : " << ganjil << endl;
		cout << "Bilangan Positif : " << positif << endl;
		cout << "Bilangan Negatif : " << negatif;
		return 0;
}
