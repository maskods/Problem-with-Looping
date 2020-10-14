#include <iostream>
using namespace std;

int main()
{
	int n,i,data = 0;
	
   for(i = 1; i <= 10; i++) {
      cin >> n;
      data = data + n;
   }
   
   cout << data;
 return 0;
}
