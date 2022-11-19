//#include <stdio.h>
//
//
////这里我只是想证明冒泡排序传的参数不同是可以排序的
//
//
//void bubble_sort_float(float arr[],int len) {
//	int i = 0;
//	for (i = 0; i < len - 1; i++) {
//		int j = 0;
//		for (j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				float tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	float arr[10] = {2.1,3.3,4.0,5.6,8.8,9.9,4.7,1.2,5.3,6.6};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort_float(arr,len);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%f ", arr[i]);
//	}
//	
//	getchar();
//	return 0;
//}