
#include <iostream> 
#include <vector> 

void getTwoValues(int &begin, int &end); 
void getNextPrime(int begin); 
void getPrevPrime(int end); 

bool isPrime(int n) {
    if (n <= 1)
        return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; 
    }
    return true; 
}




