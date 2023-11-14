#include <iostream>

#include "addition.h"
#include "division.h"
#include "print_result.h"


int main(){

    float num1, num2, result_add, result_div;

    std::cout << "Enter first number \t";
    std::cin >> num1;
    std::cout << "Second first number \t";
    std::cin >> num2;


    result_add = Addition(num1, num2);
    result_div = Division(num2, num2);

    print_result("Addition", result_add);
    print_result("Division", result_div);


    return 0;
}