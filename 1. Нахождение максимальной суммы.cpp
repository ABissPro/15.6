#include <iostream>
#include <vector>

void maxSubarraySum(std::vector<int>& arr) {
    int n = arr.size();

    //хранение текущей суммы и максимальной суммы
    int current_sum = arr[0];
    int max_sum = arr[0];

    //Индексы начала и конца максимальной последовательности
    int start_index = 0;
    int end_index = 0;
    int temp_start = 0;

    for (int i = 1; i < n; ++i) {
        if (current_sum + arr[i] > arr[i]) {
            current_sum += arr[i];  //добавление элементов
        }
        else {
            current_sum = arr[i];   //новая последовательность
            temp_start = i;         //Обновление временного стартового индекса
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;      //обновление макс суммы
            start_index = temp_start;   //обновление индекса начала
            end_index = i;              // обновление индекса конца
        }
    }

    std::cout << "Максимальная сумма: " << max_sum << std::endl;
    std::cout << "Индексы: [" << start_index << ", " << end_index << "]" << std::endl;
}

int main() {
    system("chcp 1251"); // Установить кодировку
    std::vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    maxSubarraySum(arr);

}
