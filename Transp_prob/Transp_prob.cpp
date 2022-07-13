// Transp_prob.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

const int N = 6;
const int M = 3;

struct {
    int dat[N];
    char FactN[10];
} cz[M] = { {{-1, -1, -1, -1, -1, -1}, { "1" }},
            {{-1, -1, -1, -1, -1, -1}, { "2" }},
            {{-1, -1, -1, -1, -1, -1}, { "3" }}
};

void main(void)
{
    setlocale(LC_ALL, "rus");

}