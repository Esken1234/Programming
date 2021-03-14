#include <iostream>
using namespace std;

struct IntArray {
    int* data;
    int size;
};

void create(IntArray& arr, int size)
{
    if (size <= 0)
    {
        cout << "Невозможно создать arr с длиной\n" << size;
        return;
    }
    arr.data = new int[size];
    if (!arr.data)
    {
        cout << "Невозможно создать arr с длиной\n" << size;
        return;
    }
    arr.size = size;
}
void create(IntArray* arr, int size)
{
    create(*arr, size);
}

int get(IntArray& arr, int index)
{
    if (index < 0 || index >= arr.size)
    {
        cout << "Индекс вне допустимого диапазона!\n" << arr.size;
        exit(1);
    }
    return arr.data[index];
}
int get(IntArray* arr, int index)
{
    return get(*arr, index);
}

void set(IntArray& arr, int index, int value)
{
    if (index < 0 || index >= arr.size)
    {
        cout << "Индекс вне допустимого диапазона!\n" << arr.size;
        exit(1);
    }
    arr.data[index] = value;
}
void set(IntArray* arr, int index, int value)
{
    set(*arr, index, value);
}

void resize(IntArray& arr, int newSize)
{
    if (newSize <= 0)
    {
        return;
    }

    if (newSize == arr.size)
    {
        return;
    }
    else if (newSize > arr.size)
    {
        int* newArray = new int[newSize];
        if (!newArray)
        {
            cout << "Невозможно создать arr с длиной\n" << newSize;
            return;
        }
        memcpy(newArray, arr.data, sizeof(int) * arr.size);

        for (int i = arr.size; i < newSize; ++i)
            newArray[i] = 0;

        delete[] arr.data;
        arr.data = newArray;
        arr.size = newSize;
    }
    else
    {
        int* newArray = new int[newSize];
        if (!newArray)
        {
            cout << "Невозможно создать arr с длиной\n" << newSize;
            return;
        }
        memcpy(newArray, arr.data, sizeof(int) * newSize);

        delete[] arr.data;
        arr.data = newArray;
        arr.size = newSize;
    }
}
void resize(IntArray* arr, int newSize)
{
    resize(*arr, newSize);
}

void destroy(IntArray& arr)
{
    if (!arr.data)
    {
        delete[] arr.data;
        arr.data = nullptr;
    }
    arr.size = 0;
}
void destroy(IntArray* arr)
{
    destroy(*arr);
}

void print(IntArray& arr)
{
    if (arr.size == 0)
    {
        puts("[]");
        return;
    }
    if (arr.size < 0)
    {
        return;
    }
    cout << "[" << get(arr, 0);
    for (int i = 1; i < arr.size; ++i)
        cout << ", " << get(arr, i);
    cout << "]\n";
}
void print(IntArray* arr)
{
    print(*arr);
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int size = 30;
    IntArray arr;

    create(arr, size);
    for (int i = 0; i < size; ++i)
        set(arr, i, i + 1);
    print(arr);

    resize(arr, 50);
    print(arr);

    resize(arr, 10);
    print(arr);

    destroy(arr);
}