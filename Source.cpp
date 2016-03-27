#include <iostream>
#include "searchSortAlgorithms.h"
using namespace std;


template <class sort>
void print(sort array [],int lgth);

int main ()
{
	int arrayList[] = {10, 6, 36, 95, 173, 646, 989,1,56,106,-2,3,4,5,999};

	cout <<"Input:";
	print(arrayList,15);
	selectionSort (arrayList, 15);
	cout << "Sorted:";
	print (arrayList, 15);
	cin.get();
	return 0;
}
template <class sort>
void print (sort array[], int lgth)
{
	for (int x=0; x<lgth;x++)
		cout<< array[x] << " ";
	cout << endl;
}
