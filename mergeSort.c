#include <stdio.h>

// bottom up merge sort

void merge(int *testData, int left, int middle, int right) {
	
	int size_left = middle - left + 1;
	int size_right = right - middle;
	int sub_left[8];			//how to define the dynamically changed size of the sub list?
	int sub_right[8];	
	int i;
	int m, n;

	// create the left sub list
	for (i = 0; i < size_left ; i++) {
		sub_left[i] = testData[left + i];
	}
	sub_left[i] = 99999;		// add one more infiniate large element to indicate the end, how to express the infiniate large number?

	// create the right sub list
	for (i = 0; i < size_right; i++){
		sub_right[i] = testData[middle + 1 + i];
	}
	sub_right[i] = 99999;

	m = 0;	// left sub list index
	n = 0;	// right sub list index
	
	for (i = left; i <= right; i++) {
		if (sub_left[m] <= sub_right[n]) {
			testData[i] = sub_left[m];
			m++;
		}else {
			testData[i] = sub_right[n];
			n++;
		}

	}
}


void mergeSort(int *testData, int left, int right) {

	int middle;
	if (left < right) {
		middle = (left + right) / 2;
	
		mergeSort(testData, left, middle);
		mergeSort(testData, middle + 1, right);

		merge(testData, left, middle, right); 
	}

}


int main() {

	int testData[] = {7, 6, 5, 4, 10, 3, 2, 1, 6};

	mergeSort(testData, 0, 8);	// the array length arguments are very important

	return 0;
}
