#include <iostream>


int main(){
    
    double temp;
    char unit;

    std:: cout << "******Temperature conversion *****\n";
    std:: cout << "F = Fahrenheit\n";
    std:: cout << "C = Celsius\n";
    std:: cout << "What unit would you like to convert to: ";

    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout<< "enter the temperatiure in celcius";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is  " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout<< "enter the temperatiure in faranhaite";
        std::cin >> temp;

        temp = (temp - 32)/1.8;
        std::cout << "temperature is  " << temp << "C\n";
    }
    else{
        std::cout<<"plese enter c or f";
    }
    
    
    
    
    
    return 0;
}   
