#include <iostream>
/* 
program that asks the user to enter an amount of money in the format 
of dollars and remaining cents. The program should calculate 
and print the minimum number of coins (quarters, dimes, nickels and pennies) 
that are equivalent to the given amount.
*/

int main(){
    std::cout << " Please enter the amount of money to convert:" << std::endl;
    int dollars , cents; 
    std::cout << "# of dollars: " ;
    std::cin >> dollars ;
    std::cout << "# of cents: " ; 
    std::cin >> cents;

    int total = dollars*100 + cents ;

    int q , d , n , p ; 
    q = total/25 ;
    d = (total%25)/10 ;
    n = (total-q*25-d*10)/5 ;
    p = total - q*25 - d*10 - n*5 ; 

    std::cout << "The coins are " << q << " quarters, " << d << " dimes, " << n 
    << " nickels and " << p << " pennies" << std::endl;
}
