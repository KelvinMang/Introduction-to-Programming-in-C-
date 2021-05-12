#include<iostream>
/*
program that inputs four numbers separated by spaces.  
The program should count how many odd and even numbers there are. 
The program should then output one of three possibilities depending on 
how many even and odd numbers are entered:
*/

int main (){
    int n1 , n2 , n3 , n4 ;
    std::cout << "Please enter 4 positive integers, separated by a space: " << std::endl;
    std::cin >> n1 >> n2 >> n3 >> n4 ;
    int odd = 0 , even = 0 ;

    if (n1%2 == 0){
        even +=1 ;
    }
    else {
        odd+=1 ; 
    }
    if (n2%2 == 0){
        even +=1 ;
    }
    else {
        odd+=1 ; 
    }
    if (n3%2 == 0){
        even +=1 ;
    }
    else {
        odd+=1 ; 
    }
    if (n4%2 == 0){
        even +=1 ;
    }
    else {
        odd+=1 ; 
    }
    if(even>odd){
        std::cout << "more evens" << std::endl;
    }
    else if (odd > even) {
        std::cout << "more odds" << std::endl;
    }
    else{
        std::cout << "same number of evens and odds" << std::endl;
    }

}