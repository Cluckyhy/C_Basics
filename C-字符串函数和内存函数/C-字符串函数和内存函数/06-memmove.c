//#include <stdio.h>
//#include <assert.h>
//
//
////�Լ�ģ��ʵ��memmove����
//void* my_memmove(void* dest, const void* src, size_t count) {
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src) {
//		//��ǰ����>��
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else {
//		//�Ӻ󡪡�>ǰ
//		while (count--) {
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//
//
//int main() {
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�Լ�д��my_memcpy����ʤ���ص�������
//	//my_memcpy(arr3 + 2, arr3, 20);
//	//memmove����ʤ�ڴ���ص�����
//	//memmove(arr3+2,arr3,20);
//	//C���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
//	//���·��֣�Vs2019�����µ�memcpy���Դ����ص�����
//	//memcpy(arr3 + 2, arr3, 20);
//
//	//my_memmove(arr3 + 2, arr3, 20);
//	my_memmove(arr3, arr3 + 2, 20);
//
//
//	getchar();
//	return 0;
//}