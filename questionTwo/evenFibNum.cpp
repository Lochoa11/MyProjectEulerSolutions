#include <iostream>
using namespace std;

int main(){
	
	int firstNum = 1;
	int secondNum = 2;
	int nextNum = 0;
	int totalEvenFibNumSum = 2;
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

<<<<<<< HEAD
	cout << "Total Even numbers is = " << totalEvenFibNumSum << endl;	
}


=======
	cout << "Total Even numbers is = " << totalEvenFibNumSum + 2 << endl;	
}
>>>>>>> ab8a37c4823c20c03ec6e251759c7a37a0ff5109
