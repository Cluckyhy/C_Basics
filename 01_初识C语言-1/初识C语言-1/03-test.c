//#include <stdio.h>
//
////#define  定义的标识符常量
//#define MAX 10 
//
////枚举常量  枚举---（一一列举）
////性别：男，女，保密
////三原色：红，绿，蓝
//
////枚举类型 - enum 
////性别枚举
//enum Sex {
//	Male,
//	Femal,
//	Secret
//};
////颜色枚举
//enum Color {
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//
//
//int main() {
//
//	//Male,Femal,Secret 叫做枚举常量
//	//enum Sex s = Femal;
//	//printf("%d\n", Male);   // 0
//	//printf("%d\n", Femal);  // 1
//	//printf("%d\n", Secret); // 2
//	//printf("%d\n", s);      // 1
//
//	//enum Color color = RED;
//	//color = BLUE;
//	//printf("%d\n", color);
//
//	//注意，一个中文字占两个字符，加上结尾符号0，所以数组大小不能小于7，数组大小小于7的话就会打印出乱码的东西
//	//但是我们一般不加数组长度，让字符串自适应
//	char ch[12] = "陈慧亿加油!";  //数组  
//	printf("%s\n", ch);
//	//在定义数组里面如果没加0，也不能打印出正常的值
//	char ch2[] = { 'a','b','c','\0'};
//	printf("%s\n", ch2);
//	//"abc" --- 'a','b','c','\0'--'\0'是字符串的结束标志  '\0'的值为0
//	char ch3[] = "abc";
//	printf("%s\n", ch3);
//
//
//	//strlen -- string length -计算字符串长度的
//	//注意，字符串的结束标志是不算作字符串内容的
//	printf("%d\n", strlen(ch));  //11
//	printf("%d\n", strlen(ch2)); //3
//	printf("%d\n", strlen(ch3)); //3
//
//
//
//	//int arr[MAX] = { 0 };
//	//printf("%d\n", MAX);
//
//	//const常属性
//	//const int n = 10;  //n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[10] = { 0 };
//	//int arr[n] = { 0 };
//	//n = 2;
//
//	//const修饰的常量
//	//const int num1 = 10;
//	//printf("%d\n", num1); 
//	//num1 = 20;
//
//	//字面常量
//	//3；
//	//5;
//	//10;
//
//
//	getchar();
//	return 0;
//}