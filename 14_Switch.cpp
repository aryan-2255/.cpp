#include <iostream>


// int main(){
   
//    // switch - dalternative to using many  " else if " statement.
//   //                 compare one value agiainst matching cases
   
//     int month;

//     std::cout << "Enter the monts (1 - 12) : " ;
//     std::cin >> month;

//     switch (month){
        
//         case 1 :
//         std::cout << " it is january" ;
//         break;

//         case 2 :
//         std::cout << " it is feburary ";
//         break;

//         case 3 :
//         std::cout << " it is march" ;
//         break;

//         case 4 :
//         std::cout << " it is april ";
//         break;

//         case 5 :
//         std::cout << " it is may" ;
//         break;

//         case 6 :
//         std::cout << " it is june ";
//         break;

//         case 7 :
//         std::cout << " it is july" ;
//         break;

//         case 8 :
//         std::cout << " it is august ";
//         break;

//         case 9 :
//         std::cout << " it is september" ;
//         break;

//         case 10 :
//         std::cout << " it is octomber ";
//         break;

//         case 11 :
//         std::cout << " it is november" ;
//         break;

//         case 12 :
//         std::cout << " it is december ";
//         break;
//     }
    



//     return 0;
// }   




int main(){
   
   // switch - dalternative to using many  " else if " statement.
  //                 compare one value agiainst matching cases
   
    char grade;

    std::cout<<" what letter grade ";
    std::cin>>grade;

    switch (grade){
        case 'A':
        std::cout<<"you did great";
        break;

        case 'B':
        std::cout<<"you did good";
        break;

        case 'c':
        std::cout<<"you ok ok  ";
        break;

        case 'D':
        std::cout<<"you did below average";
        break;

        case 'E':
        std::cout<<"you did poor";
        break;

        case 'F':
        std::cout<<"you failed";
        break;


    }



    return 0;
} 