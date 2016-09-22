#include<stdio.h>
int main()
{
char p;
int islv,isup;
printf("Enter an alphabet");
scanf("%d",&p);
islv=(p=='a'||p=='e'||p=='i'||p=='o'||p=='u');
isup=(p=='A'||p=='E'||p=='I'||p=='O'||p=='U');
if(islv || isup)
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonant",c);
}
return 0;
}
