#include <iostream>
using namespace std;

bool isPalindrome(int x){
	int temp = x;
	int revNum = 0;
	while(temp > 0){
		revNum = temp % 10;
		revNum *= 10;
		temp %= 10;
	}

	temp = x;

	while(temp > 0){
		if(revNum % 10 == temp % 10){
			revNum %= 10;
			temp %= 10;
			continue;
		}
		return false;
	}

	return true;

}

bool isEvenDigits(int x){
	cout << "In isEvenDigits function" << endl;
	int numberOfXDigets = 0;
	int temp = x;

	while(temp > 0){
		temp /= 10;
		numberOfXDigets++;
	}

	if(numberOfXDigets % 2 == 0) {
		return true;
	} else {
		return false;
	}
}

int main(){

	int firstNum = 100;	
	int startingPoint = 0;
	int x = 0;
	int maxPalindrome = 0;

	while(firstNum < 1000){//increments first number
		int secondNum = 100;//recreates second number
		secondNum += startingPoint;//skips numbers that have been used before (1*2 vs 2*1)
		if(secondNum >= 1000){//tests to see if second number is over 1000
			continue;
		}
		x = firstNum * secondNum;//actual multiplication stored in x
		

		if(isEvenDigits(x) == true) {
			cout << "in isEvenDigits if" << endl;
			if(isPalindrome(x) == true){
				cout << "In isPalindrome is now" << endl;
					if(x > maxPalindrome){
						maxPalindrome = x;
						cout << "Palindrome found" << endl;
						cout << "First number: " << firstNum << endl;
						cout << "Second number: " << secondNum << endl;
						cout << "Their Palindrome is: " << x << endl;
					}
			}
		}
		firstNum++;
		startingPoint++;
	}
	return 0;
}