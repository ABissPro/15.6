#include <iostream>
#include <vector>

void printSorted(const std::vector<int>& vec) {
    size_t pos = 0;  //мето первого неотрицательного элемента
    bool goLeft = true;  //направление движения

    //Поиск первого неотрицательного элемента
    while (pos < vec.size() && vec[pos] < 0) {
        pos++;
    }
    
    while (pos < vec.size()) { //печать элементов с первого неотрицательного
        std::cout << vec[pos] << ' ';

        if (goLeft && pos > 0) {
            std::cout << vec[pos - 1] << ' ';  //влево
            pos--;
        }
        else {
            pos++;  //вправо
        }

        goLeft = !goLeft;  //смена направления
    }
}

int main() {
    std::vector<int> vec = { -100, -50, -5, 1, 10, 15 };

    printSorted(vec);

    return 0;
}