#include <iostream>

/*
a program that asks the user to enter a number of quarters, dimes, nickels and pennies and 
then outputs the monetary value of the coins in the format of dollars and 
remaining cents.
*/
int main(){
    int q , d, n , p ;
    std::cout << "Please enter the number of coins:" << std::endl ;
    std::cout << "# of quarters: " ;
    std::cin >> q ;
    std::cout << "# of dimes: " ;
    std::cin >> d ; 
    std::cout << "# of nickels: " ;
    std::cin >> n ; 
    std::cout << "# of pennies: " ; 
    std::cin >> p ;

    int total ; 
    total = q*25 + d*10 + n*5 + p ; 

    int dollars , cents ;
    dollars = total/100 ;
    cents = total%100 ;

    std::cout << "The total is " << dollars << " dollars and " << cents << " cents " << std::endl;


}
