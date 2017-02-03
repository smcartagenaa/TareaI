//
// Created by sandra milena on 3/02/2017.
//

#include <iostream>
#include <fstream>

using namespace std;

float sumToN(int n){

    ofstream out ("data.txt");

    float sum = 0.0;
    for (int i = 1; i <= n ; ++i) {
        sum += 1.0/i;
        out << i << "\t" << sum << endl;
    }


    out.close();

    return sum;
}

int main() {

    sumToN(11);

    return 0;
}

