// Векторы и строки

#include <iostream>
#include <string>
#include <vector>

// Программа, заполняющая вектор элементами и печатающая их через пробел
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//     for (int elem : data) {
//         std::cout << elem << " ";
//     }
// }

// Инициализация вектора
// int main() {
//     std::vector<std::string> v1;  // пустой вектор строк
//     std::vector<std::string> v2(5);  // вектор из пяти пустых строк
//     std::vector<std::string> v3(5, "hello");  // вектор из пяти строк "hello"
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

// Если вам не хочется делать много лишних проверок, а в корректности индекса вы не уверены, 
// то можно использовать функцию at:
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};
//     //std::cout << data[42] << "\n";  // неопределённое поведение: может произойти всё что угодно
//     std::cout << data.at(0) << "\n";  // напечатается 1
//     std::cout << data.at(42) << "\n";  // произойдёт исключение std::out_of_range — его можно будет перехватить и обработать
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

// Удалить все элементы из вектора можно с помощью функции clear

// Принцип реаллокации вектора
// int main() {
//     std::vector<int> data = {1, 2};
//     std::cout << data.size() << " " << data.capacity() << "\n";

//     data.push_back(3);
//     std::cout << data.size() << " " << data.capacity() << "\n";

//     data.push_back(4);
//     std::cout << data.size() << " " << data.capacity() << "\n";

//     data.push_back(5);
//     std::cout << data.size() << " " << data.capacity() << "\n";
// }

// Резервиврование места в векторе
// int main() {
//     std::vector<std::string> words;

//     size_t words_count;
//     std::cin >> words_count;

//     words.reserve(words_count);

//     for (size_t i = 0; i != words_count; ++i) {
//         std::string word;
//         std::cin >> word;

//         words.push_back(word);
//         std::cout << words.size() << " " << words.capacity() << "\n";
//     }

//     for (size_t i = 0; i != words_count; ++i) {
//         std::cout << words[i] << " ";
//     }
// }

// reserve and resize
// int main() {
//     std::vector<int> data = {1, 2, 3, 4, 5};

//     data.reserve(10);  // поменяли резерв, но размер вектора остался равным пяти

//     data.resize(3);  // удалили последние элементы 4 и 5
//     data.resize(6);  // получили вектор 1, 2, 3, 0, 0, 0
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

// Сортировка по возрастанию 
// #include <algorithm>
// int main() {
//     std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};

//     // Сортировка диапазона вектора от начала до конца
//     std::sort(data.begin(), data.end());

//     for (size_t i = 0; i != data.size(); ++i) {
//         std::cout << data[i] << " ";
//     }
// }
// В функцию sort передаются так называемые итераторы, ограничивающие рассматриваемый диапазон. 
// В нашем случае мы передаём диапазон, совпадающий со всем вектором, от начала до конца. 
// Соответствующие итераторы возвращают функции begin и end (не путать с front и back!). 
// Итераторы можно считать обобщёнными индексами (но они могут быть и у контейнеров, не допускающих обычную индексацию). 
// Подробнее про итераторы мы поговорим в отдельном параграфе.

// Для сортировки по убыванию можно передать на вход обратные итераторы rbegin() и rend(), 
// представляющие элементы вектора в перевёрнутом порядке:

// String
// int main() {
//     std::string s = "Some string";

//     // приписывание символов и строк
//     s += ' ';  // добавляем отдельный символ в конец, это аналог push_back
//     s += "functions";  // добавляем строку в конец
//     std::cout << s << "\n";  // Some string functions

//     // выделение подстроки
//     // подстрока "string" из 6 символов начиная с 5-й позиции
//     std::string sub1 = s.substr(5, 6);
//     std::cout << sub1 << "\n";
//     // подстрока "functions" с 12-й позиции и до конца
//     std::string sub2 = s.substr(12);
//     std::cout << sub2 << "\n";

//     // поиск символа или подстроки
//     size_t pos1 = s.find(' ');  // позиция первого пробела, в данном случае 4
//     size_t pos2 = s.find(' ', pos1 + 1);  // позиция следующего пробела (11)
//     size_t pos3 = s.find("str");  // вернётся 5
//     size_t pos4 = s.find("#");  // вернётся std::string::npos

//     std::cout << pos1 << " " << pos2;
// }

// int main() {
//     std::string s = "Some string functions";

//     // вставка подстроки
//     s.insert(5, "std::");
//     std::cout << s << "\n";  // Some std::string functions

//     // замена указанного диапазона на новую подстроку
//     s.replace(0, 4, "Special");
//     std::cout << s << "\n";  // Special std::string functions

//     // удаление подстроки
//     s.erase(8, 5);  // Special string functions
// }

// Задача 1
int main() {
    std::vector<std::string> pas;

}