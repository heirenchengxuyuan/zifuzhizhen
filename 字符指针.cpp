//�ַ�ָ��

#include<stdio.h>
int main(){
//	char ch='w';//�����ַ�chΪw
//	char *pc=&ch;// �ַ�ָ�����ַ���ַ
//	return 0;


//	const char *p="abcdef";// "abcdef"��һ�������ַ���  ����൱�ڰ�����ĸa�ĵ�ַ����p
	//�ַ���Ӧ�ø���const���ε�һ��ָ�루const���������ݲ����޸ģ�
//	printf("%c\n",*p); //���Ϊa
	//printf("%s\n",p); // ���Ϊabcdef    ???��ʲô������
	
	
	char arr1[]="abcdef";// ��Ȼ��ֵһ��
	char arr2[]="abcdef";// �������ǵĵ�ַ��һ��
	
	char *p1="abcdef";
	char *p2="abcdef";
	
	if(p1==p2){
		//TODO
		printf("same\n");
	}else{
		//TODO
		printf("no same\n");
	}
	
	if(arr1==arr2){
		//TODO
		printf("same\n");
	}else{
		//TODO
		printf("no same\n");
	}
	
	
	
	
	
	
	return 0;
}


