#include <iostream> // підключення стандартної бібліотеки для вводу/виводу
using namespace std;

struct TTime { // структура TTime
    int Hour; // години (0–23)
    int Min; // хвилини (0–59)
    int Sec; // секунди (0–59)
};

int CheckTime(TTime T); // перевірка правильності часу

TTime SubHour(TTime T, int N); // зменшення на N годин

void PrintTime(TTime T); // виведення часу

void RunTimeTask(); // вхід у завдання
