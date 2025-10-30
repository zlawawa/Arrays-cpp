#include <iostream>
#include <cmath>
#ifdef _WIN32
#include <windows.h>
#endif
#include "29oct25.h"
int main(){
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif

    int Task;
    std::cout << "Выберите номер задачи 1-10: \n";
    std::cout << "1. Задача №1 \n";
    std::cout << "2. Задача №2 \n";
    std::cout << "3. Задача №3 \n";
    std::cout << "4. Задача №4 \n";
    std::cout << "5. Задача №5 \n";
    std::cout << "6. Задача №6 \n";
    std::cout << "7. Задача №7 \n";
    std::cout << "8. Задача №8 \n";
    std::cout << "9. Задача №9 \n";
    std::cout << "10. Задача №10 \n";
    std::cin >> Task;
    switch (Task){
        case 1: {
            output1();
            break;
            }
        case 2: {
            output2();
            break;
        }
        case 3: {
            output3();
            break;
        }
        case 4: {
            output4();
            break;
        }
        case 5: {
            output5();
            break;
        }
        case 6: {///
            output6();
            break;
        }///
        case 7: {
            output7();
            break;
        }
        case 9: {
            output9();
            break;
        }
        case 10: {
            output10();
            break;
        }
        default: {
            std::cout << "error\n";
            break;
        }
    }
    return 0;
}