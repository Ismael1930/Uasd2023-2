// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;


// Function for Selection sort
void selectionSort(vector<int> arr, int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in
		// unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		// Swap the found minimum element
		// with the first element
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}

// Function to print an array
void printArray(vector<int> arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program
int main()
{
 	int n = 500000;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    random_shuffle(arr.begin(), arr.end());

	auto start = high_resolution_clock::now();
    selectionSort(arr, n);
    //printArray(arr,n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Tiempo de ejecucion: " << duration.count() << " milisegundos" << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
