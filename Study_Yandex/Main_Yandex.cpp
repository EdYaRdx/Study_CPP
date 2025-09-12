//Место для полезной инфы.

// Приставка unsigned перед типом делает его беззнаковым
// int main() {
//     unsigned int a = 123456;
//     std::cout << a * a << "\n";
// }

// Если при делении нужно получить обычное частное, то один из аргументов нужно привести к вещественному типу (например, double) с помощью оператора static_cast:
// double e = static_cast<double>(a) / b; // 2.(3) || double q = a * 1.0 / b; 

// Правильное сравнение чисел float через погрешность
// int main() {
//     double delta = 0.000001;
//     double x = 0.1, y = 0.2;
//     double sum = x + y;
//     if (std::abs(sum - 0.3) < delta) {
//         std::cout << "EQUAL ";
//     } else {
//         std::cout << "NOT EQUAL ";
//     }
//     std::cout << sum << "\n";
// }

// Калькулятор SWITCH
// #include <cstdint>
// int main() {
//     int64_t a, b;
//     char operation;
//     std::cin>> a >> operation >> b;
//     int64_t result;
//     switch (operation) {
//         case '+':
//             result = a + b;
//             break;
//         case '-':
//             result = a - b;
//             break;
//         case '*':
//             result = a * b;
//             break;
//         case '/':
//         case ':':
//             result = a / b;
//             break;
//         case '%':
//             result = a % b;
//             break;
//         default:
//             result = 0;
//     }
//
//     std::cout << result << "\n";
//}
//Выражения внутри скобок оператора switch и в блоках case должны быть простого целочисленного или символьного типа. 
//В приведённой выше программе значение + относится к типу char. Использование сложных типов (например, строк) приведёт 
//к ошибке компиляции

// Цикл range-based for
// int main() {
//     std::string line;
//     std::getline(std::cin, line);
//     for (char symbol : line) {
//         std::cout << symbol << "\t" << static_cast<int>(symbol) << "\n";
//     }
// }

// Индексы в vector
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//     int a = data[0];
//     int b = data[4];
//     data[2] = -3;
//
//     std::cout << data.size() << "\n"; //количество элементов вектора
// }

// Возвращение первого и последнего элемента без индекса
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//     std::cout << data.front() << "\n";
//     std::cout << data.back() << "\n";
// }

// Проверка на пустоту вектора
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//     if (!data.empty()) {
//         std::cout << data.front();
//     }
// }

// Оформление ГОСТ цикла по индексам)
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//
//     for (size_t i = 0; i != data.size(); ++i) {
//         std::cout << data[i] << " ";
//     }
// }

// Код по нахождению дубликатов
// int main() {
// std::vector<int> data = {1, 2, 3, 4, 5, 5};
//
// for (int i = 0; i + 1 < data.size(); ++i) { // i < data.size() - 1 в с++20
//     if (data[i] == data[i + 1]) {
//         std::cout << "Duplicate value: " << data[i] << "\n";
//     }
// }
// }

// Рассмотрим программу, считывающую числа с клавиатуры в вектор и затем удаляющую все нули в конце:
// int main() {
//     int x;
//     std::vector<int> data;
//     while (std::cin >> x) {
//         data.push_back(x);
//     }
//
//     while (!data.empty() && data.back() == 0) {
//         data.pop_back();
//     }
// }

// Многомерные векторы
// int main() {
//     size_t m, n;
//     std::cin >> m >> n;

//     std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

//     for (size_t i = 0; i != m; ++i) {
//         for (size_t j = 0; j != n; ++j) {
//             std::cin >> matrix[i][j];
//         }
//     }

//     for (size_t i = 0; i != m; ++i) {
//         for (size_t j = 0; j != n; ++j) {
//             std::cout << matrix[i][j] << "\t";
//         }
//         std::cout << "\n";
//     }
// }