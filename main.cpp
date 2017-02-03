//
// Created by sandra milena on 3/02/2017.
//

#include <iostream>

using namespace std;

bool isPrime(int number){
    int c = 0;
    for (int i = 3; i < number; ++i) {
        if (number%i == 0){
            c++;
        }
    }
    return c == 0;
}

int main() {

    return 0;
}

