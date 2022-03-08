#include <iostream>

//
// Created by user on 3/8/2022.
//
void read(int &size, int* v) {
    std::cout << "Dati lungimea listei: ";
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        std::cout << "v[" << i << "]= ";
        std::cin >> v[i];
    }
}

void show(int size, int* v)
{
    for (int i = 0; i < size; i++)
        std::cout<<v[i]<<" ";
    std::cout<<std::endl;
}

