//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main() {
//
//	//int ch = 0;
//
//	//ctrl + z
//	//EOF -- end of file  文件结束标志 --> -1;
//	//while ((ch = getchar()) != EOF) {
//	//	putchar(ch);
//	//}
//	//printf("结束循环！");
//	//char password[20] = { 0 };
//	//int ch = 0;
//	//int ret = 0;
//	//printf("请输入密码：>\n");
//	//scanf("%s", password);
//	////printf("%s\n", password);
//	////输入缓冲区还剩一个'\n'
//	////读取一下'\n'
//	////getchar();
//	//while ((ret = getchar()) != '\n') {
//	//	;
//	//}
//	//printf("请确认密码（Y/N）");
//	//ch = getchar();
//	//if (ch == 'Y') {
//	//	printf("确认成功！");
//	//}
//	//else {
//	//	printf("放弃确认！");
//	//}
//
//
//	//计算n的阶乘
//	//int n = 0;
//	//int sum = 1;
//	//printf("请输入一个整数\n");
//	//scanf("%d", &n);
//	//for (int i = 1; i <= n; i++) {
//	//	sum *= i;
//	//}
//	//printf("sum = %d", sum);
//	
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码：");
//		scanf("%s", password);   
//		// == 不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
//		//if (password == "123465") {
//		//	printf("登录成功！");
//		//	break;
//		//}
//
//		//strcmp 如果参数一大于参数二，返回一个大于0的数，
//		//参数一小于参数二，返回一个小于0的数，
//		//参数一等于参数二，返回0
//		if (strcmp(password,"123456")==0) {
//			printf("登录成功！");
//			break;
//		}
//	}
//	if (i == 3) {
//		printf("三次密码均输出错误，登录失败！");
//	}
//
//
//
//
//	getchar();
//	return 0;
//}