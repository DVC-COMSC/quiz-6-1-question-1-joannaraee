#include "main.cpp"
#include <iostream> 

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integer values (begin < end): "; 
        cin >> begin >> end; 
        if (begin >= end) {
            cout << "Invalid input! Please make sure begin < end. " << endl; 
        }
    } while (begin >= end); 
}

int getNextPrime(int begin) {
    begin ++
    while (true) {
        if (isPrime(begin)) {
            return begin; 
        }
        begin ++
    }
}

int getPrevPrime(int end) {
    end--; 
    while (true) {
        if (isPrime(end)) {
            return end; 
        }
        end--; 
    }
}




