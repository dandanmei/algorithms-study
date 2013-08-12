#include <stdio.h>


void selectionSort(int *testData, int num) {

  int min;
	int i, j;

	int t;		// record a temp index
	int tmp;	// record a temp value

	for (i = 0; i < num - 1; i++) {

		min = testData[i];
		tmp = testData[i];

		for (j = i+1; j < num; j++) {
			if (min > testData[j]) {
				min = testData[j];		// update the mini value
				t = j;					// record the mini index
			}
		}                         

		// swap 
		testData[i] = min;
		testData[t] = tmp;
	}

}


int main() {

	int testData[] = {7, 6, 5, 4, 10, 3, 2, 1};

	selectionSort(testData, 8);

	return 0;
}
