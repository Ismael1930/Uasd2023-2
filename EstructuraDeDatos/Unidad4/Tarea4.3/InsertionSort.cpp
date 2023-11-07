// C++ program for insertion sort

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function to sort an array using
// insertion sort
void insertionSort(vector<int> arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, 
		// to one position ahead of their
		// current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(vector<int> arr, long n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{   
    int n = 10000;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    random_shuffle(arr.begin(), arr.end());

	auto start = high_resolution_clock::now();
    insertionSort(arr, n);
    //printArray(arr,n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Tiempo de ejecucion: " << duration.count() << " milisegundos" << endl;

	return 0;
}
// This is code is contributed by rathbhupendra
