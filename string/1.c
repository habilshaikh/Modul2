 #include<stdio.h>

int str_len(char str[100])
{
	int len=0,i;
	
	while (str[len]!='\0'){
	len ++;
	
		
	}
	return len;
}

int main()
{
	
  char str[100];
  printf("Enter a string = ");
  gets(str);
  
  int lenght = str_len(str);
  
  printf("lenght of the string is = %d\n  ",lenght);
  return 0;
}

