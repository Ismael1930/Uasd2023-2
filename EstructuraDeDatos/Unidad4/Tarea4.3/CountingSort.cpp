#include <bits/stdc++.h>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void countingSort(vector<int>& arr) {
    int max = *max_element(arr.begin(), arr.end());
    vector<int> count(max + 1, 0);

    for (int i = 0; i < arr.size(); i++) 
        count[arr[i]]++;
    

    for (int i = 1; i < count.size(); i++) 
        count[i] += count[i - 1];
    

    vector<int> output(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < arr.size(); i++) 
        arr[i] = output[i];
    
}

void printArray(vector<int> inputArray, int n)
{
	for (int i = 0; i < n; i++)
        cout << inputArray[i] << " ";
}

// Driver code
int main()

{

	// Input array
	int n = 1000000;
    vector<int> inputArray(n);

    for (int i = 0; i < n; i++) {
        inputArray[i] = i + 1;
    }
    random_shuffle(inputArray.begin(), inputArray.end());
    //printArray(inputArray, n);


    auto start = high_resolution_clock::now();  
	// Output array
	countingSort(inputArray);
    //printArray(inputArray, n);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Tiempo de ejecucion: " << duration.count() << " milisegundos" << endl;

	return 0;
}
