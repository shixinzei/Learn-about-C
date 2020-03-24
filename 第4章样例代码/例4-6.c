#include <stdio.h>
#include <string.h>
void main()
{
	char str1[200];
	char str2[200];
	int num;
	int len=0;
	int i;
	printf("请输入明文:");
	gets(str1);
	len=strlen(str1);
	for(i=0;i<len;i++){
		num=-1;
		if(str1[i]<='z'&&str1[i]>='a'){
			num=str1[i]-'a'+1;
			num=num*3%52;
		}else if(str1[i]<='Z'&&str1[i]>='A'){
			num=str1[i]-'A'+32;
			num=num*3%52;
		}
		if(num>0&&num<=26){
			str2[i]=num+'a'-1;
		}else if(num>=27&&num<=51){
			str2[i]=num+'A'-27;
		}else if(num==0){
			str2[i]='Z';
		}else{
			str2[i]=str1[i];
		}
	}
	str2[i]='\0';
	printf("密文为:%s\n",str2);
}
