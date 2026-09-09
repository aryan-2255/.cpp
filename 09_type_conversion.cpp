#include <iostream>

// type conversion - conversion a value of one data type to another   
//                    implicit = automatic
//                    explicit = precede value with new dat type 

int main(){

    // double x = (int) 3.14; 
    // std::cout << x;


    // char x = 100; 
    // std::cout << x;  // d is output as table binary funda

    int correct  = 8;
    int question  = 10; 
    double score = correct/(double)question * 100 ;
    std::cout << score << " %" ;

    return 0;
}   