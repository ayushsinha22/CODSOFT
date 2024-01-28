#include<iostream>

int main()
{
    char operations; 

    double num1;
    double num2;
    double result;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Choose an operation(+ ,- , * , /): ";
    std::cin >> operations;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operations)
    {
    case '+' : 
    result = num1 + num2;
        break;

    case '-' : 
    result = num1 - num2;
        break;
        
    case '*' : 
    result = num1 * num2;
        break;
    
    case '/' : 
    result = num1 / num2;
        break;
    
    default: 
    std::cout << "Invalid response.";
        break;
    }

    std::cout << "Result: " << result;      // the calculator won't display a result if this line is missing

    return 0;
}