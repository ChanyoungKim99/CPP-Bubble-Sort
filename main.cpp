#include <iostream>

void PrintArray(int input[], int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << input[i] << " ";
	}
	std::cout << std::endl;
}

void Swap(int& value1, int& value2)
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

// Bubble Sort
// 2���� ��� �� ��, ū ���� �ڷ� ������

// size�� 5���� ��, 
// 4�� �� (index 0, 1) (index 1, 2) (index 2, 3) (index 3, 4)
// 3�� �� (index 0, 1) (index 1, 2) (index 2, 3) 
// 2�� �� (index 0, 1) (index 1, 2) 
// 1�� �� (index 0, 1)

void BubbleSort(int input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (input[j] > input[j + 1])
			{
				Swap(input[j], input[j + 1]);
			}
		}
	}
}

// Ot = O (n ^ 2)
// Os = O (n)
// ������ Sequential Sort, Selection Sort�� ������ ����.
// Big O�� ������ �ƴ϶��, BubbleSort�� ������ ������.

// ���� �˰������� ����ȭ�� ������ �ʴ�..

int main()
{
	const int SIZE{ 5 };
	int array[SIZE]{ 8, 7, 2, 3, 1 };

	BubbleSort(array, SIZE);
	PrintArray(array, SIZE);
}