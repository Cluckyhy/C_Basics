#include <stdio.h>

//���������Ƿ���ھ�����
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
//			printf("�±�Ϊ��%d %d\n", i, j);
//			return 1;
//		}
//	}
//  //�Ҳ���
//	return 0;
//}

//���÷����Ͳ���
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
	//�Ҳ���
	return 0;
}


int main() {

	//��Ŀ����
	//���Ͼ���
	//��Ŀ����
	//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
	//Ҫ��ʱ�临�Ӷ�С��O(N)

	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int row = 3;
	int col = 3;
	//�����Ͳ���
	int ret = FundNum(arr,k,&row,&col);
	if (ret == 1) {
		printf("�±��ǣ�%d %d\n", row, col);
		printf("�ҵ��ˣ�");
	}
	else {
		printf("û�ҵ���");
	}


	getchar();
	return 0;
}