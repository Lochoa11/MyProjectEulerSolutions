#include <iostream>
using namespace std;

int main(){
	int long x = 1;
	
	bool thisNumberWorks = false;
	
	while(thisNumberWorks == false){
		for(int i = 1; i <= 20; i++){
			if(x % i == 0){
				thisNumberWorks = true;
				continue;
			}
			else{
				thisNumberWorks = false;
				break;
			}
		}
		
		x++;
	}
	x--;
	cout << "the number is " << x << endl;
	
	return 0;
}