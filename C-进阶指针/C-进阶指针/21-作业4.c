#include <stdio.h>

//查找数字是否存在矩阵函数
//int FundNum(int arr[3][3],int k,int row,int col) {
//	int i = 0;
//	int j = col-1;
//	while (i<row&&j>=0) {
//		if (arr[i][j] > k) {
//			j--;
//		}
//		else if (arr[i][j] < k) {
//			i++;
//		}
//		else{
//			printf("下标为：%d %d\n", i, j);
//			return 1;
//		}
//	}
//  //找不到
//	return 0;
//}

//利用返回型参数
int FundNum(int arr[3][3], int k, int* row, int* col) {
	int i = 0;
	int j = *col - 1;
	while (i < *row && j >= 0) {
		if (arr[i][j] > k) {
			j--;
		}
		else if (arr[i][j] < k) {
			i++;
		}
		else {
			*row = i;
			*col = j;
			return 1;
		}
	}
	//找不到
	return 0;
}


int main() {

	//题目名称
	//杨氏矩阵
	//题目内容
	//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
	//要求：时间复杂度小于O(N)

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int row = 3;
	int col = 3;
	//返回型参数
	int ret = FundNum(arr,k,&row,&col);
	if (ret == 1) {
		printf("下标是：%d %d\n", row, col);
		printf("找到了！");
	}
	else {
		printf("没找到！");
	}


	getchar();
	return 0;
}