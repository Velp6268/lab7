#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand(static_cast<unsigned>(time(NULL)));
    const int m = 9;
    int n;
    int** a;
    cout << "Введите  n: ";
    cin >> n;
    a = new int* [n];
    for (int i = 0; i < n; ++i)
        a[i] = new int[m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            a[i][j] = 1 + rand() % 100;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    for (int j = 0; j < m; ++j)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i][j];
        }
        cout << "Среднее арифметическое: " << j + 1 << " столбца: " << static_cast<double>(sum) / n << '\n';
    }
    return 0;
}