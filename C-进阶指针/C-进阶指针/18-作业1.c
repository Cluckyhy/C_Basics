//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//#include <math.h>
//
//
////作业二函数
//void reverse_str(char* str) {
//	assert(str);
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
////作业三函数
//int Sum(int a, int n) {
//	int i = 0;
//	int sum = 0;
//	int pre = 0;
//	for (i - 0; i < n; i++) {
//		pre = pre * 10 + a;
//		sum += pre;
//	}
//	return sum;
//}
//
////作业七函数
//void printarr(int arr[],int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Move(int arr[],int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left<right) {
//		//从左边找偶数
//		while ((left<right)&&(arr[left] % 2 == 1)) {
//			left++;
//		}
//		//从右边找奇数
//		while ((left < right)&&(arr[right] % 2 == 0)) {
//			right--;
//		}
//		if (left < right) {
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//
//
//
//
//int main() {
//
//	////作业一
//	//unsigned long pulArray[] = { 6,7,8,9,10 };
//	//unsigned long* pulPtr; 
//	//pulPtr = pulArray;
//	////注意这里的*(pulPtr+3)取出的是一个空间
//	////下面代码是将pulArray里面的9改成了12
//	//*(pulPtr + 3) += 3;
//
//	////所以这里打印的是6和12
//	//printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	
//	////作业二
//	////逆序用户输入的字符串
//	////定义字符数组
//	//char arr[256] = { 0 };
//	////scanf("%s", arr);		//遇到空格就停止读取
//	//gets(arr);	//读取一行
//	//reverse_str(arr);
//	//printf("逆序后的字符串\n%s\n", arr);
//
//	////作业三
//	////计算求和，求Sn = a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//	//int a = 0;
//	//int n = 0;
//	//int ret = 0;
//	//scanf("%d%d", &a, &n);
//	//ret = Sum(a, n);
//	//printf("所有值的和为：%d", ret);
//
//	////作业四
//	////打印出1--100000之间所有自幂数
//	//int i = 0;
//	////1、求出i的位数
//	//for (i = 1; i <= 100000; i++) {
//	//	int temp = i;
//	//	int sum = 0;
//	//	int n = 1;	//每位数至少是1位
//	//	while (temp /= 10) {
//	//		n++;
//	//	}
//	//	//2、求出每位数的n次幂之和
//	//	temp = i;
//	//	while (temp) {
//	//		sum += pow(temp%10,n);
//	//		temp /= 10;
//	//	}
//	//	//3、比较
//	//	if (sum == i) {
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	//作业五
//	//打印菱形
//	//      *      
//	//     ***     
//	//    *****    
//	//   *******   
//	//  *********  
//	// ***********
//	//*************
//	// ***********
//	//  *********
//	//   *******
//	//    *****
//	//     ***
//	//      *
//	//自己的挫代码
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 13; i++) {
//	//	for (j = 1; j < 14; j++) {
//	//		if (i <= 6) {
//	//			if (j < (14 / 2) - i || j >(14 / 2) + i) {
//	//				printf(" ");
//	//			}
//	//			else {
//	//				printf("*");
//	//			}
//	//		}
//	//		else {
//	//			if (j>i+1-(14/2) && j<21-i-1) {
//	//				printf("*");
//	//			}
//	//			else {
//	//				printf(" ");
//	//			}
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//
//	////正确写法
//	//int line = 0;
//	//printf("请输入你想要的菱形：\n");
//	//scanf("%d", &line);
//	////打印上半部分
//	//int i = 0;
//	//for (i = 0; i < line; i++) {
//	//	int j = 0;
//	//	for (j = 0; j < line-1-i; j++) {
//	//		//打印空格
//	//		printf(" ");
//	//	}
//	//	for (j = 0; j < 2*i+1; j++) {
//	//		//打印*
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//	////打印下半部分
//	//for (i = 0; i < line - 1; i++) {
//	//	int j = 0;
//	//	for (j = 0; j <i+1; j++) {
//	//		//打印空格
//	//		printf(" ");
//	//	}
//	//	for (j = 0; j < 2*(line - i - 1)-1; j++) {
//	//		//打印*
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//	
//	//作业六
//	////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水(编程实现)
//	//int money = 0;
//	//int total = 0;
//	//int empty = 0;
//	//printf("请输入你有多少钱：\n");
//	//scanf("%d", &money);
//	//total = money;
//	//empty = money;
//	//while (empty>=2) {
//	//	total += empty/2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("total：%d", total);
//
//
//	//作业七
//	////将一组数据奇数放前面，偶数放后面
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	//Move(arr,len);
//	//printarr(arr,len);
//
//	//作业八
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//200是个整型，实际存储在内存中是4个字节，32位bit位
//	//00000000 00000000 00000000 11001000
//	//200非要存在char类型中，char空间只能放1个字节，8位bit位，所以截取最后8位存放到char a中
//	//所以a中存放的是11001000
//	//100是个整型，实际存储在内存中是4个字节，32位bit位
//	//00000000 00000000 00000000 01100100
//	//100非要存放到char类型中，char空间只能存放1个字节，8位bit位，所以要截取最后8位存放到char b中
//	//所以b中存放的是01100100
//	c = a + b;
//	//当要执行a+b时，会发生整型提升
//	//因为a的类型是无符号的char类型，所以高位直接补0  所以a - 00000000 00000000 00000000 11001000，如果这里的a是char类型的话，高位补的就是符号位1，因为11001000会视最前面的1为符号位
//	//同理b也是无符号char类型，整型提升在高位补0，    所以b - 00000000 00000000 00000000 01100100
//	//在执行a+b
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100  -->300
//	//但是要是把上面的32位存放到unsigned char类型的c，又要进行截取，
//	//所以c中存放的是00101100		-->44
//	//在进行%d输出时，又是有符号位10进制输出，补码--00000000 00000000 00000001 00101100。是正数所以直接输出300
//	//c这时有要整型提升，因为c是unsigned char类型的，直接高位补0，补码--00000000 00000000 00000000 00101100，是正数，直接输出44
//	printf("%d %d", a + b, c);
//
//	
//
//	getchar();
//	return 0;
//}