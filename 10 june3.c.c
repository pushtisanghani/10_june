#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("p.txt","a");
	if (p==NULL)
	{
		printf("coule not file open");
	}
	else
	{
		printf("Enter data =");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add successful...");
	}
	fclose(p);
	printf("\n===================\n");
	p=fopen("p.txt","r");
	if(p==NULL)
	{
		printf("coule not file open");
	}
	else
	{
		while(fgets(data,25,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}

