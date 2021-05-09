#include <iostream>

/*
Write a program that inputs two grades separated by a space.  

If both grades are below a score of sixty then the program should output the message:

Student Failed:(

If both grades are greater than or equal to ninety five then the program should output the message:

Student Graduated with Honors:)

Otherwise the program should output the message:

Student Graduated! 
*/
int main(){
    int grade1 , grade2 ;
    std::cout << "Please enter 2 grades, separated by a space: " ;
    std::cin >> grade1 >> grade2 ;

    if ((grade1<60)&&(grade2<60)){
        std::cout << " Student Failed :( " << std::endl;
    }
    else if ((grade1>=95)&&(grade2>=95)){
        std::cout << "Student Graduated with Honors:)" << std::endl;
    }
    else{
        std::cout << "Student Graduated!" << std::endl;
    }


}