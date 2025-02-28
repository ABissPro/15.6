#include <iostream>
#include <vector>

void printSorted(const std::vector<int>& vec) {
    size_t pos = 0;  //мето первого неотрицательного элемента

    //Поиск первого неотрицательного элемента
    while (pos < vec.size() && vec[pos] < 0) {
        pos++;
    }
    int left = pos - 1;
    int right = pos;

    while (left >= 0 || right < vec.size()) { //печать элементов с первого неотрицательного
        if (left < 0) {
            std::cout << vec[right++] << ' ';
        }
        else if (right >= vec.size()) {
            std::cout << vec[left--] << ' ';
        }
        else {
            if (abs(vec[left]) <= vec[right]) {
                std::cout << vec[left--] << ' ';
            }
            else {
                std::cout << vec[right++] << ' ';
            }
        }
    }
}

int main() {
    std::vector<int> vec = { -100, -50, -5, 1, 10, 15 };

    printSorted(vec);

    return 0;
}