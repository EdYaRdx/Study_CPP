// !!! 2_1 - введение в с++, основной синтаксис

#include <iostream>
#include <string>

// Cамая простая и короткая программа на C++ — это программа, которая ничего не делает.
//
// int main() {
//     return 0;
// }

// Hello, world!
//
// int main() {
//     std::cout << "Hello, world!\n";
// }

// Любая содержательная программа так или иначе обрабатывает данные в памяти. 
// Переменная — это именованный блок данных определённого типа. Чтобы определить переменную, нужно указать её тип и имя.
//
// int main() {
//     // Определяем переменную value целочисленного типа int
//     int value;
//     //Определяем переменные name и surname типа std::string (текстовая строка)
//     std::string name, surname;
//     std::cin >> name >> surname;
//     std::cout << name;
// }

// Программа, которая спрашивает имя пользователя и печатает персональное приветствие.
// int main() {
//     std::string name;
//     std::cout << "What is your name?\n";
//     //std::cin >> name; //Считывается только 1 вошедшее слово
//     std::getline(std::cin, name);
//     std::cout << "Hello, " << name << "!\n"; 
// }

// Отделение символов при выводе
// int main() {
//     int a;
//     int b;
//     int c;

//     std::cin >> a >> b >> c;

//     std::cout << a << " " << b << " " << c << "\n";
// }

// Задача 1
// int main() {
//     std::string text;
//     text = "C++ is a general-purpose programming language with a bias towards systems programming that\n  - is a better C\n  - supports data abstraction\n  - supports object-oriented programming\n  - supports generic programming.";
//     std::cout << text;
// }

// Задача 2
// int main() {
//     int a;
//     int b;
//     std::cin >> a >> b;
//     std::cout << a + b;
// }