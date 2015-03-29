//What is the largest prime factor of the number 600851475143?

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
	int primeSqrt = (int)sqrt(x);
	for(int i = 2; i < primeSqrt; i++){
		if (x % i == 0){
			return 0;
		}
	}
	return 1;
}

int main (){

	int maxPrime = 1;
	int squarRootInt = (int)sqrt(600851475143);
	
	for(int i = 1; i < squarRootInt; i++){
		if(600851475143 % i == 0){
			if(i > maxPrime){
				if(isPrime(maxPrime)){
					maxPrime = i;
					cout << "Max prime found: " << maxPrime << endl;
				}	
			}
		}
	}
	
	
	cout << "The max prime is: " << maxPrime << endl;
	cout << "The max squarRootInt is: " << squarRootInt << endl;
	
}