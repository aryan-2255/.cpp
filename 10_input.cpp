#include <iostream>

// cout - (insertion operator)
// cin - (extraction operation)

int main(){

    std::string name;
    int age;

    std::cout<< "what your full name?:";    // for name
    std::getline(std::cin >> std::ws, name);


    std::cout<< "what your age?:";   // for age
    std::cin >> age;


    std::cout << "hello" << name << '\n';
    std::cout << "you are" << age << "year old";




    return 0;
}   