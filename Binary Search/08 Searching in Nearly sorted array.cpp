// https://www.geeksforgeeks.org/search-almost-sorted-array/
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
		int mid = l + (r - l) / 2;

		// If the element is present at
		// one of the middle 3 positions
		if (arr[mid] == x)
			return mid;
		if (mid > l && arr[mid - 1] == x)
			return (mid - 1);
		if (mid < r && arr[mid + 1] == x)
			return (mid + 1);

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 2, x); // this time check on mid-2 cz mid-1 is already checked

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 2, r, x); // this time check on mid+2 cz mid+1 is already checked
}
