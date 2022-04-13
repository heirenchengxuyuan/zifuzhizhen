//字符指针

#include<stdio.h>
int main(){
//	char ch='w';//定义字符ch为w
//	char *pc=&ch;// 字符指针存放字符地址
//	return 0;


//	const char *p="abcdef";// "abcdef"是一个常量字符串  这句相当于把首字母a的地址赋给p
	//字符串应该赋给const修饰的一个指针（const是让其内容不被修改）
//	printf("%c\n",*p); //输出为a
	//printf("%s\n",p); // 输出为abcdef    ???有什么区别呢
	
	
	char arr1[]="abcdef";// 虽然两值一样
	char arr2[]="abcdef";// 但是他们的地址不一样
	
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


