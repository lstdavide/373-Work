


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Integer.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 10; ++i) {
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;

        Integer int1(num1);
        Integer int2(num2);

        int randomOperation = rand() % 4;
        char operation;
        
        switch (randomOperation) {
            case 0: operation = '+'; break;
            case 1: operation = '-'; break;
            case 2: operation = '*'; break;
            case 3: operation = '/'; break;
        }

        try {
            switch (operation) {
                case '+':
                    std::cout << int1.getValue() << " + " << int2.getValue() << " = " << (int1 + int2).getValue() << std::endl;
                    break;
                
                
                
                case '-':
                    std::cout << int1.getValue() << " - " << int2.getValue() << " = " << (int1 - int2).getValue() << std::endl;
                    break;
                
                
                
                case '*':
                    std::cout << int1.getValue() << " * " << int2.getValue() << " = " << (int1 * int2).getValue() << std::endl;
                    break;
                
                
                
                case '/':
                    std::cout << int1.getValue() << " / " << int2.getValue() << " = " << (int1 / int2).getValue() << std::endl;
                    break;
            }
        
            
        } catch (const std::runtime_error& e) {
            std::cout << "Error: " << e.what() << std::endl;
        
        }
    
        
    }
    
    return 0;
}