#include <iostream>
#include <vector>

int main() {
    system("chcp 1251"); // Установить кодировку
    std::vector<int> numbers;
    std::cout << "Введите ряд чисел:\n";
    while (true) {
        int input;
       
        std::cin >> input;

        if (input == -1) {
            if (numbers.size() >= 5) {
                std::cout << numbers[4] << std::endl;
            }
            else {
                std::cerr << "Недостаточно чисел для вывода пятого" << std::endl;
            }
        }
        else if (input == -2) {
            break;
        }
        else {
            if (numbers.empty()) {
                numbers.push_back(input);
            }
            else {
                size_t i = 0;
                while (i < numbers.size() && numbers[i] <= input) {
                    i++;
                }
                numbers.insert(numbers.begin() + i, input);
            }           
            
            while (numbers.size() > 5) {
                numbers.pop_back();
            }

        }
    }
}
