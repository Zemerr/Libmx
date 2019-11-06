#include "../inc/libmx.h"

int quickint(int *arr, int left, int right) {
    int l = left;
    int r = right;
    int p = arr[left + (right - left)/2];
    int count = 0;

    while (l <= r) {

		int i = left;
//		l = left;

        while ( arr[i] < p) {
//			if (arr[i] == p ) { 

//				l = i;
//				break;
//			}
//			else {
        	i++;
        	l = i;
			}
//		}

        int j = right;
        while (arr[j] >= p && j >= left) {
		//	if (arr[j] == p ) {
          //       r = j;
            //     break;
             //}
            // else {
             j--;
             r = j;
             }
	//	}
        if (arr[l] > arr[r]) {
            mx_swap_int(&arr[l], &arr[r]);
            count++;
        }

    l++;
    r--;
    }

    if (l < right)
      count = count + quickint(arr, l, right);
	if ( r > left)
      count = count + quickint(arr, left, r);
    return count;
} 
/*
int main() {
//    int arr[] =  {4, 3, 7, 4, 6, 2, 4, 1, 9};
	int arr[] =  {13, 10, 8, 7, 13, 10, 8, 7};
//int arr[] = {4, 3, 7, 4, 6, 2, 4, 1, 1, 1, 6, 6, 7, 0, 23, 76, 5, 5, 4, 4, 9};
//	int arr[] = {5,4,6,-2,0,10,9};	

    printf("%d rrrrrrr\n", quickint( arr, 0, 7));
	
//	quickint( arr, 0, 8);
    for (int i = 0; i<=7; i++)
        printf("%d\n ", arr[i]);

}*/
