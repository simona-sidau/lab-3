#include <cassert>
#include "../problems/PrimeNumbersSequence.h"
#include "../problems/SequenceInterval.h"

//
// Created by user on 3/8/2022.
//
void runTests()
{
    // tests for primeNumbersSequence
    int n, k;
    int* v= new int[100]{1, 3, 18, 7, 5, 12, 14};
    int* result = new int [100];
    n = 7;
    primeNumberSequence(n,v, k, result);
    assert( k == 2);
    assert(result[0] == 7);
    assert(result[1] == 5);

    delete[] v;

    int* u =new int[100] {3, 9, 3, 13, 37};
    n = 5;

    primeNumberSequence(n,u, k, result);
    assert(result[0] == 3);
    assert(result[1] == 13);
    assert(result[2] == 37);
    assert(k == 3);

    delete[] u;

    int* w= new int[100]{8, 17, 16, 2, 3, 5, 17, 29, 58, 16, 13, 67};
    n = 12;

    primeNumberSequence(n, w, k, result);
    assert(k == 5);
    assert(result[0] == 2);
    assert(result[1] == 3);
    assert(result[2] == 5);
    assert(result[3] == 17);
    assert(result[4] == 29);

    delete[] w;

    //tests for sequenceInterval
    int a, b;
    int* v1 = new int[100]{1, 2, 7, 8, 11, 27, 13, 6, 8};
    n = 9;
    a = 5;
    b = 10;
    sequenceInterval(n,v1, a, b, k, result);
    assert(k == 2);
    assert(result[0] == 7);
    assert(result[1] == 8);

    delete [] v1;
    int* u1 =new int[100] {1, 2, 7, 8, 11, 27, 13, 6, 5, 10, 78};
    n = 11;
    sequenceInterval(n,u1, a, b, k, result);
    assert(k == 3);
    assert(result[0] == 6);
    assert(result[1] == 5);
    assert(result[2] == 10);

    delete [] u1;

    int* w1 = new int[100]{0, 89, 5, 6, 34, 35, 7, 5, 4, 7, 785, 12, 13};
    a = 1;
    b = 10;
    n = 13;
    sequenceInterval(n, w1, a, b, k, result);
    assert(k == 4);
    assert(result[0] == 7);
    assert(result[1] == 5);
    assert(result[2] == 4);
    assert(result[3] == 7);

    delete [] w1;
}

