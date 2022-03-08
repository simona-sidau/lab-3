#include <iostream>
#include "PrintMenu.h"
#include "ReadAndShow.h"

//
// Created by user on 3/8/2022.
//
void console()
{
    int* arr = new int[100];
    int size;
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
            case 'x':
                std::cout<<"Sfarsitul programului";
                consoleOn = false;
                break;
            default:
                std::cout<<"Optiune gresita! Reincercati!"<<std::endl;
                break;

        }
    }

    delete[] arr;
}

