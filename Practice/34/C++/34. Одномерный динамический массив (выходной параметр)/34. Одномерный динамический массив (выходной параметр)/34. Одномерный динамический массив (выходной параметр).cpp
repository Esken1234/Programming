#include <iostream>
using namespace std;

void create(int** arr, int len, int start = 0, int inc = 0)
{
    if (len <= 0)
    {
        cout << "Не удалось создать массив с длиной\n" << len;
        return;
    }
    *arr = new int[len];
    if (!arr)
    {
        cout << "Не удалось создать массив с длиной\n" << len;
        return;
    }
    for (int i = 0; i < len; ++i)
    {
        (*arr)[i] = start;
        start += inc;
    }
}

int* sort(int* arr, int len)
{
    if (len <= 0)
    {
        cout << "Не удается отсортировать массив длиной\n" << len;
        return arr;
    }
    if (!arr)
    {
        cout << "Не удается отсортировать массив.\n";
        return arr;
    }

    int value, j;
    for (int i = 1; i < len; ++i)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = value;
    }
    return arr;
}

int* print(int* arr, int len)
{
    if (len == 0)
    {
        cout<<"[]\n";
        return arr;
    }
    if (len < 0)
    {
        cout << "Невозможно вывести массив с длиной" << len;
        return arr;
    }
    if (!arr)
    {
        cout << "Невозможно вывести массив.\n";
        return arr;
    }
    cout << "[" << *arr;
    for (int i = 1; i < len; ++i)
        cout << "," << arr[i];
    cout << "]\n";
    return arr;
}

void destroy(int** arr)
{
    if (!*arr)
    {
        delete[] * arr;
        *arr = nullptr;
    }
}

int main(int argc, char* argv[])
{
    int len = 0, start = 0, inc = 0;
    cin >> len >> start >> inc;
    int* arr;
    create(&arr, len, start, inc);
    sort(arr, len);
    print(arr, len);
    destroy(&arr);
    return 0;
}