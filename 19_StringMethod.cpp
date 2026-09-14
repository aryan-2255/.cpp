#include <iostream>


int main(){
    std::string name;

    std::cout << "Enter your name";
    std::getline(std::cin,name);

    if (name.length() > 12){
        std::cout <<"you name can not be greater than 12 characters";
    }
    
    
    
    
    
    return 0;
}   
