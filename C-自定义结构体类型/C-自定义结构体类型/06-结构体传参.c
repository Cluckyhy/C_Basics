//#include <stdio.h>
//
//struct S {
//	int a;
//	char c;
//	double d;
//};
//
////值传递
////void Init(struct S tmp) {
////	tmp.a = 10;
////	tmp.c = 'w';
////	tmp.d = 3.14;
////}
//
////址传递
//void Init(struct S* ps) {
//	ps->a = 10;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S tmp) {
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
////传地址的时候，一般如果不想改变实参的值，加上const;
//void Print2(const struct S* ps) {
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//
//
//int main() {
//
//	struct S s = { 0 };
//	//Init(s);
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//
//	getchar();
//	return 0;
//}