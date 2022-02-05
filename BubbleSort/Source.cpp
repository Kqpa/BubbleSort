#include "Source.h"

int main()
{

    int size;
    float* numbers;

    cout << "Enter size of array: ";
    cin >> size;

    if (size < 2)
    {
        cout << "Size has to be more than one." << endl;
        return 0;
    }

    numbers = new float[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter index " << i << ": ";
        cin >> numbers[i];
    }

    cout << "The original order is: " << endl;

    print(numbers, size);

    cout << "The sorted order is: " << endl;

    sort(numbers, size);

    print(numbers, size);

    delete[] numbers;

    numbers = NULL;
}

void sort(float* sortedArray, const int size)
{

    bool isSwapped;

    do
    {
        isSwapped = false;

        for (int i = 0; i < size - 1; i++)
        {
            if (sortedArray[i] > sortedArray[i + 1])
            {
                swap(&sortedArray[i], &sortedArray[i + 1]);
                isSwapped = true;
            }
        }

    } while (isSwapped == true);
}

void swap(float* index1, float* index2)
{
    float mid;
    mid = *index1;
    *index1 = *index2;
    *index2 = mid;
}

void print(float* array, const int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (i != size)
        {
            cout << array[i] << "  ";
        }
        else if (i == size)
        {
            cout << endl;
        }
    }
}