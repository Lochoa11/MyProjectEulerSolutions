#include <iostream>
using namespace std;

int main(){
	
	int firstNum = 1;
	int secondNum = 2;
	int nextNum = 0;
	int totalEvenFibNumSum = 0;
	while(nextNum <= 4000000){

		nextNum = firstNum + secondNum;
		// 0 = 1 + 2
		// 3
		
		if(nextNum >= 4000000) break;
		// 3 >= 4000000
		
		if (nextNum % 2 == 0){
			//3 % 2 NOT TRUE
			totalEvenFibNumSum += nextNum;
			cout << "Even fib number found: " << nextNum << endl;
			cout << "Next Number is:        " << totalEvenFibNumSum << endl;
		}
		
		firstNum = secondNum;
		// 1 = 2
		// 2 = 2
		secondNum = nextNum;
		// 2 = 3 
		// 3 = 3
	}

	cout << "Total Even numbers is = " << totalEvenFibNumSum + 2 << endl;	
}