//What is the largest prime factor of the number 600851475143?

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
	
	for(int i = 2; i < x; i++){
		if (x % i == 0){
			return 0;
		}
	}
	return 1;
}

int main (){

	int maxPrime = 2;
	int long number = 600851475143;
	
	for(int i = 1; i < number; i++){
		if(number % i == 0){
			if(isPrime(i)){
				if(maxPrime < i){
					maxPrime = i;
					cout << "Max prime found: " << maxPrime << endl;
				}	
			}
		}
	}
	
	
	cout << "The max prime is: " << maxPrime << endl;
	
}