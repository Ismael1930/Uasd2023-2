// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;


// A function to implement bubble sort 
void bubbleSort(vector<int> arr, int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) 
  
        // Last i elements are already 
        // in place 
        for (j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]); 
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
	int n = 400000;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    random_shuffle(arr.begin(), arr.end());

	auto start = high_resolution_clock::now();
    bubbleSort(arr, n);
    //printArray(arr,n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Tiempo de ejecucion: " << duration.count() << " milisegundos" << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
