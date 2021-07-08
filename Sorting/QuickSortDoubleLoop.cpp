int partition(int arr[], int startIndex, int endIndex);

void quickSort(int arr[], int startIndex, int endIndex) {
    // condition of the end of the recursion: when startIndex is larger than or equal to endIndex
	if (startIndex >= endIndex) {
		return;
	}
	
    // get the index of the pivot
	int pivotIndex = partition(arr, startIndex, endIndex);
    // according to pivot, divide the array into two part and sort them respectively
	quickSort(arr, startIndex, pivotIndex - 1);
	quickSort(arr, pivotIndex + 1, endIndex);
}

int partition(int arr[], int startIndex, int endIndex) {
	// use the 1st element as the pivot
	int pivot = arr[startIndex];
	int left = startIndex;
	int right = endIndex;

    while (left != right) {
        // control the right pointer and shift it left
        while (left < right && arr[right] > pivot) {
            right--;
        }
        // control the left pointer and shift it right
        while (left < right && arr[left] <= pivot) {
            left++;
        }
        // swap the element at left and right
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    // swap the element at pivot and coincident point
    arr[startIndex] = arr[left];
    arr[left] = pivot;
    return left;
}