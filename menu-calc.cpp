#include<iostream>

int firstnum;
int secondnum;
char op;
int result;
int add(int firstnum, int secondnum);
int subtract(int firstnum, int secondnum);
int multiply(int firstnum, int secondnum);
int divide(int firstnum, int secondnum);



int main(){
    std::cout << "Please enter two number's: ";
    std::cin >> firstnum >> secondnum;
    std::cout << "Please choose an operator: + - * /";
    std::cin >> op;
    
    if (op == '+')
        {
            result = add(firstnum, secondnum);
        }
    else if (op == '-')
        {
            result = subtract(firstnum, secondnum);
        }
    else if (op == '*')
        {
            result = multiply(firstnum,secondnum);
        }        
    else if (op == '/')
        {
            result = divide(firstnum,secondnum);
        }

    std::cout << "Result: " << result;
    
    return 0;
}



int add(int firstnum, int secondnum){
        return firstnum + secondnum;
}
int subtract(int firstnum, int secondnum){
        return firstnum - secondnum;
}
int multiply(int firstnum, int secondnum){
        return firstnum * secondnum;
}
int divide(int firstnum, int secondnum){
        return firstnum / secondnum;
}
