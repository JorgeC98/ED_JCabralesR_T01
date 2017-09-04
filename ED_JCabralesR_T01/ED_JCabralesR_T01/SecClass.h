#pragma once
#include "FetchClass.h"
class SecClass : public FetchClass
{
public:
	SecClass();
	int sFetch(int);
	static int sFetch(int[], int);

	virtual void setArray(int[]);
	virtual int* getArray();
	virtual void showArray();
	virtual void showFetch(int);
	virtual void showArray(int[]);
	~SecClass();
protected:
	virtual int* RandArray(int);
};
