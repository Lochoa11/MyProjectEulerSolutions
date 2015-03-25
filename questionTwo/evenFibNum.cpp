#include <iostream>
using namespace std;

int main(){
	
	int firstNum = 1;
	int secondNum = 2;
	int nextNum = 0;
	int totalEvenFibNumSum = 0;
	while(nextNum <= 4000000){

		nextNum = firstNum + secondNum;
		
		if(nextNum >= 4000000) break;
		
		if (nextNum % 2 == 0){
			totalEvenFibNumSum += nextNum;
			cout << "Even fib number found: " << nextNum << endl;
			cout << "Next Number is:        " << totalEvenFibNumSum << endl;
		}
		
		firstNum = secondNum;
		secondNum = nextNum;
	}

	cout << "Total Even numbers is = " << totalEvenFibNumSum << endl;	
}