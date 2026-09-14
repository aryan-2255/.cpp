#include <iostream>

int main(){

    // do while loop - do some block of code first, THEN repat again if condition is true

    int number;

    /*     while here see do while below

    while (number < 0)
    {
        std::cout<<"enter a positive number ";
        std::cin >> number;
    }

    std::cout<< "number is " << number;

    */


    do{
        std::cout<<"enter a positive number ";
        std::cin >> number;
    }while (number < 0);

    std::cout<< "number is " << number;
    

    return 0;
}