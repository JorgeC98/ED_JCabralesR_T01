#pragma once
class SortClass
{
public:
	SortClass();
	void selection(int[]);
	void insertion(int[]);
	void bubble(int[]);
	void quickSort(int[], int, int);
	void mergeSort(int[], int, int);
	void merge(int[], int, int, int);
	~SortClass();
};
