#pragma once
#pragma once
#include "FetchClass.h"
#include "SortClass.h"

class BinClass : public FetchClass, public SortClass {
public:
	BinClass();
	int bFetch(int);
	static int bFetch(int[], int);

	void setArray(int[]);
	int* getArray();
	void showArray();
	void showFetch(int);
	void showArray(int[]);

	~BinClass();

	//protected:
	int* RandArray(int);
};
