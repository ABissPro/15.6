#include <iostream>
#include <vector>

int main() {
    system("chcp 1251"); // Установить кодировку
    std::vector<int> numbers;

    while (true) {
        int input;
        std::cout << "Введите ряд чисел:\n";
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
            //добавление нового числа в отсортированный вектор
            auto it = numbers.begin();
            for (; it != numbers.end(); ++it) {
                if (*it > input) {
                    break;
                }
            }
            numbers.insert(it, input);

            // удаление лишних элементов
            if (numbers.size() > 5) {
                numbers.erase(numbers.begin());
            }
        }
    }

    return 0;
}
