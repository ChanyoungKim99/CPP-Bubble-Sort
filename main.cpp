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
// 2개씩 묶어서 비교 후, 큰 값을 뒤로 보내기

// size가 5개일 시, 
// 4번 비교 (index 0, 1) (index 1, 2) (index 2, 3) (index 3, 4)
// 3번 비교 (index 0, 1) (index 1, 2) (index 2, 3) 
// 2번 비교 (index 0, 1) (index 1, 2) 
// 1번 비교 (index 0, 1)

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
// 여전히 Sequential Sort, Selection Sort와 성능이 같다.
// Big O의 관점이 아니라면, BubbleSort가 조금은 빠르다.

// 정렬 알고리즘의 최적화는 쉽지가 않다..

int main()
{
	const int SIZE{ 5 };
	int array[SIZE]{ 8, 7, 2, 3, 1 };

	BubbleSort(array, SIZE);
	PrintArray(array, SIZE);
}