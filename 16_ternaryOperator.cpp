#include <iostream>


int main(){
   
   // ternary operator ?: - replacement to an if/else statement
  //                         condirion :   expression1 ? expresseion2 ;
   
    int grade = 70 ;

    // if (grade >= 60)
    // {
    //     std::cout<<"you pass";
    // }
    // else{
    //     std::cout<<"you fail";
    // }
    
    grade >= 60 ?  std::cout<<"you pass" :  std::cout<<"you fail";



    int number = 8;

    number % 2 ?  std::cout<<"odd" :  std::cout<<"even";

    return 0;
}   
