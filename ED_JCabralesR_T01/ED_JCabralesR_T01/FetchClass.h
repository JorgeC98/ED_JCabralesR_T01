class FetchClass
{
public:
	FetchClass();
	virtual void setArray(int[]) = 0;
	virtual int* getArray() = 0;
	virtual void showArray() = 0;
	virtual void showFetch(int) = 0;
	virtual void showArray(int[]) = 0;
	~FetchClass();

protected:
	int* myArray; // CHECAR []
	virtual int* RandArray(int) = 0;
};