void swap(int arr[], int firstIndex, int secondIndex);

void bubbleSort(int arr[], int startIndex, int endIndex) {
	for (int i = startIndex; i < endIndex; i++) {
		for (int j = startIndex; j < endIndex - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j + 1);
			}
		}
	}
}

void swap(int arr[], int firstIndex, int secondIndex) {
	int temp = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = temp;
}