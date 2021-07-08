int partition(int arr[], int startIndex, int endIndex);

void quickSort(int arr[], int startIndex, int endIndex) {
	if (startIndex >= endIndex) {
		return;
	}
	
	int pivotIndex = partition(arr, startIndex, endIndex);
	quickSort(arr, startIndex, pivotIndex - 1);
	quickSort(arr, pivotIndex + 1, endIndex);
}

int partition(int arr[], int startIndex, int endIndex) {

}