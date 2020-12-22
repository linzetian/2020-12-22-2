//strcat连接字符串函数，不能给自己追加
//strncat（*char *char int len）,字符串长度
//strstr（str1，str2）在str1中找子字符串str2，如果没有找到返回空指针

#include<stdio.h>
#include<string.h>
is_left_roate(char* str1, char* str2)
{
	int len = strlen(str1);
	strncat(str1,str1,len);
	char* p=strstr(str1,str2);
	if (p == NULL)//空指针，表示没有找到
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdef";//或者直接连接，省略strncat
	char arr2[] = "cdefaba";
	int ret = is_left_roate(arr1,arr2);
	if (ret == 0)
	{
		printf("No\n");
	}
	else
		printf("Yes\n");
	return 0;
}