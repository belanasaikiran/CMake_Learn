#include <iostream>


float Addition(float n1, float n2){
    return n1 + n2;
}

float Division(float n1, float n2){
    return n1/n2;
}


void print_result(std::string result_type, float result_value){
    std::cout << result_type << " result:\t" << result_value << "\n";
}


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