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

    int A[M] = {
    500,
    400,
    1000
    },
        C[M][N] = {
            { 100, 80, 40,   3, 50,  56 },
            { 20,   9, 42,   8, 15,   7 },
            { 80,   1,  1, 100,  2,  10 }
    }, i, j, X[3] = { 0, 0, 0 };
    X[0] = C[0][0];
    for (i = 0, j = 0; j < N; ++i)
    {
        if (i == M)
        {
            cz[X[1]].dat[X[2]] = X[0];
            i = 0;
            ++j;
            X[0] = C[i][0];
            X[1] = 0;
        }
        if ((C[i][j] * A[i] < X[0] * A[X[1]]))
        {
            X[0] = C[i][j];
            X[1] = i;
            X[2] = j;
        }
    }
    for (i = 0; i < M; ++i)
    {
        cout << "С фабрики " << cz[i].FactN
            << " выгодно доставлять груз до населенного пункта № ";
        for (j = 0; j < N; ++j)
            if (cz[i].dat[j] > -1) cout << j + 1 << " ";
        cout << "\n";
    }
    system("pause");
    return;
}