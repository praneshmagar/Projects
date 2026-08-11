#include <iostream> 

int main()
{
    double temp;
    std::string starting_unit;
    std::string converted_unit;
    std::string farenheit;
    std::string celsius;
    std::string kelvin;
    double final_answer;

    std::cout << "what is the temperature you want converted? "<< '\n';
    std::cin >> temp;
    std::cout << "What is the Unit of that temperature? (C, F, K) " << '\n';
    std::cin >> starting_unit;
    std::cout << "what is the Unit you want the temperature to be convered to? (C, F, K)" << '\n';
    std::cin >> converted_unit;
    
    if (starting_unit == "C" || "c" && (converted_unit) == "F" || "f") {
        final_answer = (temp*9/5)+32.0;
        std::cout << "The temp converted from C to F is: " << final_answer << '\n';
    }
    else {
        std::cout << "The conversion isnt supported yet: ";
    } 
    return 0;
}