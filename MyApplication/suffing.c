#include<stdio.h>
#include<string.h>
int main()
{
    char data[50],stuff[50],dstuff[50];
    int i,j,count,len;

    printf("enter the data:");
    scanf("%s",data);

    len=strlen(data);
    count=0,j=0;
    for (i = 0; i < len; ++i)
    {
    	if(data[i]=='1')
    	{
    		count++;
    	}
    	else
    	{
    		count=0;
    	}
    	stuff[j]=data[i];
    	j++;

    	if(count==5 && data[i+1]=='1')
    	{
    		stuff[j]='0';
    		j++;
    		count=0;
    	}
    }
    stuff[j]='\0';
    printf("stuff data is:%s\n",stuff);

//desuffing 
    len=strlen(stuff);
    count=0,j=0;
    for(i=0;i<len;i++)
    {
    	if(stuff[i]=='1')
    	{
    		count++;
    	}
    	else
    	{
    		count=0;
    	}
    	dstuff[j]=stuff[i];
    	j++;
    	if(count==5 && stuff[i+1]=='0')
    	{
    		count=0;
    		i++;
    	}

    }
    dstuff[j]='\0';
    printf("desuffed data: %s\n",dstuff);
    return 0;
}  

   