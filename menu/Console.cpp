#include <iostream>
#include "PrintMenu.h"
#include "ReadAndShow.h"
#include "../problems/PrimeNumbersSequence.h"
#include "../problems/SequenceInterval.h"

//
// Created by user on 3/8/2022.
//
void console()
{
    int* arr = new int[100];
    int* result = new int[100];
    int size, resultSize;
    char choice;
    bool consoleOn = true;
    while(consoleOn)
    {
        printMenu();
        std::cout<<"Intorduceti optiunea: ";
        std::cin>>choice;
        switch (choice) {
            case '1':
                read(size, arr);
                break;
            case '2':
                show(size, arr);
                break;
            case '3':
                primeNumberSequence(size, arr, resultSize, result);
                show(resultSize, result);
                break;
            case '4':
                int a, b;
                std::cout<<"a=";
                std::cin>>a;
                std::cout<<"b=";
                std::cin>>b;
                sequenceInterval(size, arr, a, b, resultSize, result);
                show(resultSize, result);
                break;
            case 'x':
                std::cout<<"Sfarsitul programului";
                consoleOn = false;
                break;
            default:
                std::cout<<"Optiune gresita! Reincercati!"<<std::endl;
                break;

        }
    }

    delete [] result;
    delete[] arr;
}

