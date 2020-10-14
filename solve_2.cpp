#include <iostream>
using namespace std;

int main()
{
	int n,i,data,min,max;

	cin >> n;

	
   for(i = 0; i < n; i++) {
      cin >> data;
      if(min > data) {
   			min = data;
		   }
		if(max < data) {
   			max = data;
		   }
   }
   
   cout << "Minimal : " << min << endl;
   cout << "Maksimal : " << max;
 return 0;
}
