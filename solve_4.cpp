#include <iostream>
using namespace std;

int main() {
	
  	float n, jumbil = 0, total = 0, rata = 0;
	
	for(int i = 1; i > 0; i++) { 
		cin >> n;
		if(n == -999){
			break;
		}
		jumbil = jumbil + 1;
		total = total + n;
	}
	rata = total / jumbil;
		cout << "Banyak Bilangan : " << jumbil << endl;
		cout << "Jumlah Total : " << total << endl;
		cout << "rata - rata : " << rata << endl;
		
		return 0;
}
