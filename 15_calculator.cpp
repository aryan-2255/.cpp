#include <iostream>


int main(){

    char op;        // support only 1 char youmake a mistake putting add insted of +
    double num1;
    double num2;
    double result;

    std::cout<<"********* CALCULATOR *************\n";

    std::cout<<"Enter either (+, - ,  *  , / ) : "; 
    std::cin>> op;

    std::cout<<"enter number 1 : ";
    std::cin>> num1;

    std::cout<<"enter number 2 : ";
    std::cin>> num2;

    switch(op){

        case '+':
        result = num1 + num2;                   // use result = num1 + num2 insted of dirct putting into cout
        std::cout<< "result is : " << result << '\n';
        break;

        case '-':
        result = num1 * num2;
        std::cout<< result << '\n' ;
        break;

        case '*':
        result = num1 * num2;
        std::cout<< result << '\n';

        case '/':
        result = num1 / num2;
        std::cout<< result << '\n';

        default:
        std::cout << "that was not a valid response \n "; 
        break;
    }

    std::cout<<"*******************************\n";



    return 0;
}   
