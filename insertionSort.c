#include <stdio.h>

void insertionSort(int *testData, int num) {
  
	int i, j;
	int key;

	for (j = 1; j < num; j++) {

		key = testData[j];		// this is the value need to compared each time
		i = j - 1;				// start from one element before the current key element, elements sequence before the current key element should be a sorted sequence already

		// compare and move the element one by one to the right until finished or found a larger element than the current key element
		while (i >= 0 && testData[i] > key) {
			testData[i + 1] = testData[i];
			i--;
		}

		testData[i + 1] = key;	// this is the location need to be inserted 

	}
}


int main() {

	int testData[] = {7, 6, 5, 4, 10, 3, 2, 1};

	// need to specify the length of the array correctly
	insertionSort(testData, 8);

	return 0;
}
