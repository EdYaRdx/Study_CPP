// !!! 2_3 - Ветвления и циклы

#include <iostream>
#include <string>

// Условия можно комбинировать с помощью логических операторов && (и), || (или) и ! (не). 
// Рассмотрим пример, где проверяется принадлежность точки разным интервалам на прямой.
// int main() {
//     int a, b, x;
//     /* Тут должна быть логика заполнения объявленных переменных,
//     но мы её опустили, чтобы не отвлекаться */

//     if (a <= x && x <= b) {
//         // точка x лежит на отрезке [a; b]
//     } else {
//         // точка x лежит вне отрезка [a; b]
//     }

//     // то же самое можно было бы проверить так:
//     if (!(x < a || x > b)) {  // отрицание
//         // точка x лежит на отрезке [a; b]
//     } else {
//         // точка x лежит вне отрезка [a; b]
//     }
// }
// !!! Обратите внимание, что двойное неравенство некорректно проверять через a <= x <= b. 
//     Так можно написать, но смысл будет совсем другим: результат сравнения a <= x будет 
//     приведён к нулю или единице, и полученное число будет сравниваться с b.
// 
// !!! Операторы && и || ведут себя лениво: если первого аргумента уже достаточно для ответа, то второй аргумент вычисляться не будет. 
//     Например, в выражении condition1 && condition2 второе условие не вычисляется, если первое ложно. 

// Сравнени чисел float, из-за разнице в СС ответ будет неправильным - NOT EQUAL 0.3, хотя 0.1 + 0.2 = 0.3
// int main() {
//     double x = 0.1, y = 0.2;
//     if (x + y == 0.3) {
//         std::cout << "EQUAL";
//     } else {
//         std::cout << "NOT EQUAL ";
//     }
//     std::cout << x + y << "\n";
// }

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

// Калькулятор if - else
// #include <cstdint>
// int main() {
//     int64_t a, b;
//     char operation;
//     std::cin >> a >> operation >> b;
//     int64_t result = 0;
//     if (operation == '+') {
//         result = a + b;
//     } else if (operation == '-') {
//         result = a - b;
//     } else if (operation == '*') {
//         result = a * b;
//     } else if (operation == '/' || operation == ':') {
//         result = a / b;
//     } else if (operation == '%') {
//         result = a % b;
//     }
//     std::cout << result << "\n";
// }

// Калькулятор switch
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

// Оператор goto, лучше не использовать его в своих проектах по ряду причин. 
// int main() {
//     again:  // метка — это произвольное имя с двоеточием
//
//     std::cout << "How old are you?\n";
//     int age;
//     std::cin >> age;
//
//     if (age < 0 || age >= 128) {
//         std::cout << "Wrong age...\n";
//         goto again;  // безусловный прыжок в место, помеченное меткой
//     }
//
//     std::cout << "Your age is " << age << ".\n";
//
// }

// Цикл While
//
// int main() {
//     int n = 1;
//     while (n <= 10) {
//         std::cout << n << "\t" << n * n << "\n"; // "\t" табуляция, выравнивание по колонкам фикс. ширины.
//         ++n;
//     }
// }

// Цикл do-while
// Отличие от цикла while заключается в том, что первая итерация всегда выполняется безусловно. 
// Только после её завершения проверяется условие цикла. Если оно истинно, то цикл продолжается
// int main() {
//     int n = 1;
//     do {
//         std::cout << n << "\t" << n * n << "\n";
//         ++n;
//     } while (n <= 10);
// }

// Цикл for 
//for (initialization; condition; action) {
//    // тело цикла
//}
// Таблица квадратов через for
// int main() {
//     for (int i = 1; i <= 10; ++i) {
//         std::cout << i << "\t" << i * i << "\n";
//     }
// }

// Цикл range-based for
// int main() {
//     std::string line;
//     std::getline(std::cin, line);
//     for (char symbol : line) {
//         std::cout << symbol << "\t" << static_cast<int>(symbol) << "\n";
//     }
// }

// Таблица умножения
// int main() {
//     for (int i = 1; i <= 10; ++i) {
//         for (int j = 1; j <= 10; ++j) {
//             std::cout << i * j << "\t";
//         }
//         std::cout << "\n";
//     }
// }

// Использование break.
// int main() {
//     int sum = 0;
//     while (true) {
//         int x;
//         std::cin >> x;
//         if (x == 0) {
//             break;
//         }
//         sum += x;
//     }
//     std::cout << sum << "\n";
// }

// int main() {
//     std::string name;
//     while (std::getline(std::cin, name)) {
//         std::cout << "Hello, " << name << "!\n";
//     }
// }

// Задача 1
// int main() {
//     int x1, y1, x2, y2;
//     std:: cin >> y1 >> x1 >> y2 >> x2;
//     if (y1 == y2) {
//         std::cout << "YES";
//     } else if (x1 == x2) {
//         std::cout << "YES";
//     } else if (std::abs(x1-y1) == std::abs(x2-y2)) {
//         std::cout << "YES";
//     } else if (x1 + y1 == x2 + y2) {
//         std::cout << "YES";
//     } else {
//         std::cout << "NO";
//     }
// }

// Задача 2
// int main() {
//     int a, b, c;
//     std::cin >> a >> b >> c;

//     int sum = a + b + c;
//     int mx, mn, sr;

//     if (a > b && a > c) {
//         mx = a;
//     } else if (b > a && b > c) {
//         mx = b;
//     } else {
//         mx = c;
//     }

//     if (a < b && a < c) {
//         mn = a;
//     } else if (b < a && b < c) {
//         mn = b;
//     } else {
//         mn = c;
//     }
//     sr = sum - mx - mn;

//     if (mx * mx == mn * mn + sr * sr) {
//         std::cout << "YES";
//     } else if (mn + sr > mx ) {
//         std::cout << "NO";
//     } else {
//         std::cout << "UNDEFINED";
//     }
// }

// Задача 3
// int main() {
//     int year;
//     std::cin >> year;

//     if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
//         std::cout << "YES";
//     } else { 
//         std::cout << "NO";
//     }
// }

// Задача 4
// int main() {
//     int mounth, year;
//     std::cin >> mounth >> year;

//     if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
//         std::cout << 31;
//     } else if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) {
//         std::cout << 30;
//     } else if (((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) && mounth == 2) {
//         std::cout << 29;
//     } else { 
//         std::cout << 28;
//     }
// }

// Задача 5
// int main() {
//     int n, k;
//     std::cin >> n >> k;

//     for (int j = 1; j < n; ++j) {
//         std::cout << "   ";
//     }

//     for (int i = 1; i <= k; ++i) {
//         if (i < 10) {
//             std::cout << " " << i << " ";
//         } else {
//             std::cout << i << " ";
//         }
  
//         if (i % 7 == (8 - n) % 7) {
//             std::cout << "\n";
//         } 
//     }
// }

// Задача 6
// int main() {
//     int x ;
//     std::cin >> x;
//     int sum = 0;
    
//     while (x > 0) {
//         sum += x % 10;
//         x /= 10;
//     }

//     std::cout << sum;
// }

// Задача 7
// #include <cmath>
// int main() {
//     int n = 0;
//     std::cin >> n;
//     double ans = 0;
//     for (int i = 2; i <= n; i += 1) {
//         ans = ans - (pow((-1), i+1) / i);
//     }
//     std::cout << 1 - ans << "\n";
// }
