#include <stdio.h>
#include <stdlib.h>

struct S {
	int n;
	int arr[];	//���������Ա	//40
};



int main() {

	struct S s;
	printf("%d\n", sizeof(s));
	struct S* p = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
	p->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++) {
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", p->arr[i]);
	}
	//�ͷ�
	free(p);
	p = NULL;

	getchar();
	return 0;
}