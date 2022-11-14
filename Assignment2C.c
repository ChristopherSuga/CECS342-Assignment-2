#include <stdio.h>
typedef struct
{
	char* name;
	int unsigned age;
} person;

//functions for quicksort
void swap(double* x, double* y);
void qsort2(double* a, int n);
void qsort_recursion(double array[], int low, int high);
int partition(double array[], int low, int high);

int main(int argc, char* argv[])
{
    double numbers[]= {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};
    person people[] = { {"Hal", 20}, {"Susann", 31}, {"Dwight", 19}, {"Kassandra", 21}, {"Lawrence", 25}, {"Cindy", 22}, {"Cory", 27}, {"Mac", 19}, {"Romana", 27}, {"Doretha", 32}, {"Danna", 20},
        {"Zara", 23}, {"Rosalyn", 26}, {"Risa", 24}, {"Benny", 28}, {"Juan", 33}, {"Natalie", 25} };
	int numbersLength = sizeof numbers / sizeof numbers[0];
	int peopleLength = sizeof people / sizeof people[0];
	qsort2(numbers, numbersLength);
	for (int i = 0; i < numbersLength; i++) {
		printf("%f ", numbers[i]);
		printf("\n");
	}
	qsort2(people, peopleLength);
	for (int i = 0; i < peopleLength; i++) {
		printf("%s %d ", people[i].name,people[i].age);
		printf("\n");
	}
};






//quick sort array a with n elements in place
//pseudo code converted to C from https://www.geeksforgeeks.org/quick-sort/
//changed partition function to swap first then increment i. Was the other way around leading to uglier code.
void qsort2(double* a, int n) {
	qsort_recursion(a, 0, n - 1);
}
//swap function that takes a pointer to two elements in the array and swaps them
void swap(double* x, double* y) {
	//saves x in a temp value
	double temp = *x;
	//assigns y to the x value
	*x = *y;
	//assigns the saved x value to the y value
	*y = temp;
}
//the recursive portion of quicksort algorithm. Takes an array, the lowest index, and the highest index.
void qsort_recursion(double array[], int left, int right) {
	if (left < right) {
		//calls the partition function to find the pivot number
		//the sorting is done in partition function
		int pivot = partition(array, left, right);
		//recursive call that splits the array in two on the left side of the pivot number
		qsort_recursion(array, left, pivot - 1);
		//recursive call that splits the array in two on the right side of the pivot number
		qsort_recursion(array, pivot + 1, right);
	}
}
//function that sorts the elements of an array based on the right most number. Takes an array, the lowest index, and the highest index.
int partition(double array[], int left, int right) {
	//assigns the pivot to the rightmost element
	double pivot = array[right];
	int i = left;
	//loops over the array
	for (int j = left; j < right; j++) {
		//if the element is smaller than the pivot then swaps the elements of i and j. After swapping increments i 
		if (array[j] <= pivot) {
			swap(&array[i], &array[j]);
			i++;
		}
	}
	//after the loop ends the old pivot is swapped with i. By the end of this function all elements lower than the pivot will be to the left and all elements higher than the pivot will be to the right
	swap(&array[i], &array[right]);
	//returns the index of the element that the array is sorted around
	return(i);
}