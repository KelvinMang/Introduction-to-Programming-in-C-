#include <iostream>
#include <cmath> 
#include <iomanip>
/* program that prompts for metric weight and height 
and outputs the BMI with two decimal places. */

int main(){
    double height , weight ;
    std::cout << "Please enter weight in kilograms: " ; 
    std::cin >> weight ;
    std::cout << "Please enter height in meters: " ; 
    std::cin >> height ;
    double BMI ; 
    BMI = weight/(height*height) ;
    std::cout << "BMI is: " << std::fixed << std::setprecision (2) << BMI << std::endl;
}