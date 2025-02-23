#include <iostream>
#include <vector>

int main()
{
	system("chcp 1251"); // Установить кодировку
	int res = 9;
	std::vector<int> a = {2, 7, 11, 15};

	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] + a[i + 1] == res) {
			std::cout << "Найдены соседние элементы: " << a[i] << " и " << a[i + 1] << std::endl;
			break;
		}
		else {
			std::cout << "Пара не найдена\n";
		}
	}
}