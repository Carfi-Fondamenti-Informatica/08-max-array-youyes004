//
// Created by Yousef El Sayed on 11/12/2022.
//
#include "lib.h"
#include <iostream>
using namespace std;

float maxarray(int a) {
    float numeri [a];
    float b= numeri [0];
    for (int k=0; k<a ; k++)
        numeri [k]=0;
    for (int i=0; i<a ; i++ ) {
        cin >> numeri [i];
    }
    for (int j = 0; j < a; j++) {
        if (b < numeri[j])
            b = numeri[j];
    }
    return b;
}
