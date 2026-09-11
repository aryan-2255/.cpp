#include <iostream>


int main(){
   
   // if statement - do something if a conditon is true.
  //                 if not then don't do it
   
    int age;

    std::cout << "Enter your age :";
    std::cin >> age;

    
    if (age >= 100){
        std::cout << "you are too old drink at your home not allowed to site";
    }

    else if ( age >= 18){
        std::cout<< "welcome to the site";
    }

    else if (age < 12){
        std::cout << "you are too minor less than 12 drink milk";
    }

    else{
        std::cout<<"not allowed age less then 18";
    }


    return 0;
}   
