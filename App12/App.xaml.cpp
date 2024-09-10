#include <iostream>  
#include <string>  

using namespace std;

// 1. Проверка, является ли число четным или нечетным  
void EvenOdd() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "Число четное." << endl;
    }
    else {
        cout << "Число нечетное." << endl;
    }
}

// 2. Нахождение минимального из трех чисел  
void findMinimum() {
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    cout << "Наименьшее число: " << min << endl;
}

// 3. Калькулятор  
void calculator() {
    double a, b;
    cout << "Введите два числа a и b: ";
    cin >> a >> b;

    int choice;
    cout << "Меню:\n1) a + b \n2) a - b \n3) a * b \n4) a / b \n5) a % b\nВыберите пункт: ";
    cin >> choice;

    switch (choice) {
    case 1: cout << "Результат: " << a + b << endl; break;
    case 2: cout << "Результат: " << a - b << endl; break;
    case 3: cout << "Результат: " << a * b << endl; break;
    case 4:
        if (b != 0) {
            cout << "Результат: " << a / b << endl;
        }
        else {
            cout << "Ошибка: Деление на 0!" << endl;
        }
        break;
    case 5:
        cout << "Напоминание: a % b работает только для целых чисел." << endl;
        break;
    }
}

// 4. Проверка счастливого билета  
void checkLuckyTicket() {
    int ticket;
    cout << "Введите шестизначный номер билета: ";
    cin >> ticket;

    int sum1 = (ticket / 100000) + (ticket / 10000 % 10) + (ticket / 1000 % 10);
    int sum2 = (ticket / 100 % 10) + (ticket / 10 % 10) + (ticket % 10);

    if (sum1 == sum2) {
        cout << "Билет счастливый!" << endl;
    }
    else {
        cout << "Билет не счастливый." << endl;
    }
}

// 5. Приветствие в зависимости от времени суток  
void dayNicht() {
    int hours;
    cout << "Введите время (часы): ";
    cin >> hours;

    if (hours < 0 || hours >= 24) {
        cout << "Ошибка: Введите корректное время." << endl;
        return;
    }

    if (hours < 6) {
        cout << "Доброй ночи!" << endl;
    }
    else if (hours < 12) {
        cout << "Доброе утро!" << endl;
    }
    else if (hours < 18) {
        cout << "Добрый день!" << endl;
    }
    else {
        cout << "Добрый вечер!" << endl;
    }
}

// 6. Определение следующего дня  
void nextDay() {
    int day, month, year;
    cout << "Введите дату (день месяц год): ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Некорректная дата!" << endl;
        return;
    }

    if (month == 2) {
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (day > (leap ? 29 : 28)) {
            cout << "Некорректная дата!" << endl;
            return;
        }
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        cout << "Некорректная дата!" << endl;
        return;
    }

    day++;
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        if (day > 29) {
            day = 1;
            month++;
        }
    }
    else if (day > 31 || (month == 4 || month == 6 || month == 9 || month == 11 && day > 30)) {
        day = 1;
        month++;
    }

    if (month > 12) {
        month = 1;
        year++;
    }

    cout << "Следующий день: " << day << "." << month << "." << year << endl;
}

// 7. Звуки животных  
void zveriaSounds() {
    int choice;
    cout << "Выберите животное:\n1) Кошка\n2) Собака\n3) Курица\n4) Лошадь\n5) Корова\n6) Овца\n7) Поросенок\n8) Утка\nВаш выбор: ";
    cin >> choice;

    switch (choice) {
    case 1: cout << "Кошка= Мяу!" << endl; break;
    case 2: cout << "Собака= Гав!" << endl; break;
    case 3: cout << "Курица= Кукушка!" << endl; break;
    case 4: cout << "Лошадь= Иго-го!" << endl; break;
    case 5: cout << "Корова= Муу!" << endl; break;
    case 6: cout << "Овца= Бее!" << endl; break;
    case 7: cout << "Поросенок= Хрю!" << endl; break;
    case 8: cout << "Утка= Кря!" << endl; break;
    }
}

// 8. Определение знака зодиака и гороскопа  
void zodiag(); {
    int day, month;
    cout << "Введите дату своего рождения (день и месяц): ";
    cin >> day >> month;

    string zodiacSign;
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        zodiacSign = "Водолей";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiacSign = "Рыбы";
    }
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiacSign = "Овен";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiacSign = "Телец";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiacSign = "Близнецы";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiacSign = "Рак";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiacSign = "Лев";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        zodiacSign = "Дева";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        zodiacSign = "Весы";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        zodiacSign = "Скорпион";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiacSign = "Стрелец";
    }
    else {
        zodiacSign = "Козерог";
    }

    cout << "Ваш знак зодиака: " << zodiacSign << endl;
    cout << "Гороскоп на ближайшую неделю: ";
    cout << "у вас все будет хорошо!";

// 9. 
    void cheking(); {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number > 0) {
        cout << "Число положительное." << endl;
    }
    else if (number < 0) {
        cout << "Число отрицательное." << endl;
    }
    else {
        cout << "Число равно нулю." << endl;
    }
}

// 10.
    void showModul(); {
    int number;
    cout << "Введите число: ";
    cin >> number;
    cout << "Модуль числа: " << (number < 0 ? -number : number) << endl;
}

// Главная функция  
int main() {
    EvenOdd();
    findMinimum();
    calculator();
    checkLuckyTicket();
    dayNicht();
    nextDay();
    zveriaSounds();
    zodiag();
    cheking();
    showModul();

    return 0;
}