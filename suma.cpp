//
// Created by sandra milena on 3/02/2017.
//

#include <iostream>

using namespace std;

float sumToN(int n){
    float sum = 0.0;
    for (int i = 1; i <= n ; ++i) {
        sum += 1.0/i;
        cout << i << "\t" << sum << endl;
    }
    return sum;
}

int main() {

    sumToN(11);

    return 0;
}

