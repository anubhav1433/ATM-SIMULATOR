#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i;
void main()
{
struct detial
{
 char name[20];
 int an;
}d1={"Anubhav Mendhiratta",12345},d2={"Aryan Deo",12346},d3={"Raj Kiran",12347},d4;
int n,ch,a,b=0,h,d=0;
int e,f=0,g,x,q,s,t=5;
char c;
FILE *p[3],*r;
printf("WELCOME ");
printf("TO ");
printf("BANK OF INDIA\n");
getch();
printf("Enter your name : ");
gets(d4.name);
printf("Enter your acount number : ");
scanf("%d",&d4.an);
if(strcmp(d1.name,d4.name)==0&&d1.an==d4.an)
{

 p[0] = fopen("anubhav.txt","r");
 fscanf(p[0],"%d",&n);
 q=0;
 fclose(p[0]);
 p[0] = fopen("anubhav.txt","w");
}
else if(strcmp(d2.name,d4.name)==0&&d2.an==d4.an)
{
 p[1] = fopen("aryan.txt","r");
 fscanf(p[1],"%d",&n);
 q=1;
 fclose(p[1]);
 p[1] = fopen("aryan.txt","w");
}
else if(strcmp(d3.name,d4.name)==0&&d3.an==d4.an)
{
 p[2] = fopen("raj.txt","r");
 fscanf(p[2],"%d",&n);
 q=2;
 fclose(p[2]);
 p[2] = fopen("raj.txt","w");
}
else
{
printf("You don't have account in our bank\n");
getch();
n=0;
}
if(n==0)
{
 printf("THANK YOU ");
 printf("FOR VISITING ");
 printf("BANK OF INDIA");
 getch();
}
else
{
while(c!='N'&&c!='n')
{
printf(">>>>>>>>>>>>>MENU<<<<<<<<<<<<<\n");
printf("1. Balance Enquiry\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Transfer\n");
printf("\t     Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
 case 1 : 
	  printf("\3  Balance Enquiry  \3\n");
	  printf("Your Balance is Rs.%d\n",n);
	  getch();
	  break;
 case 2 : 
	  printf("\4  Deposit  \4\n");
	  printf("Enter the amount to be Deposit : Rs.");
	  scanf("%d",&a);
	  b=b+a;
	  n=n+a;
	  printf("Insert the cash and then press Enter\n");
	  getch();
	  printf("Deposit Sucessful\n");
	  getch();
	  break;
 case 3 : 
	  printf("\5  Withdraw  \5\n");
	  printf("Enter the amount to be Withdraw : Rs.\n");
	  scanf("%d",&h);
	  if(h<=n)
	  {
	  d=d+h;
	  n=n-h;
	  printf("COLLECT THE CASH\n");
	  }
	  else
	  {
	  printf("You don't have enough balance to withdraw\n");
	  }
	  getch();
	  break;
 case 4 : 
	  printf("\6  Transfer  \6\n");
	  printf("Enter the amount to be transfer : Rs.");
	  scanf("%d",&e);
	  if(e<=n)
	  {
	  printf("Enter the acount number : ");
	  scanf("%d",&g);
	  if(g==d1.an)
	  {
	   r = fopen("anubhav.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("anubhav.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else if(g==d2.an)
	  {
	   r = fopen("aryan.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("aryan.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else if(g==d3.an)
	  {
	   r = fopen("raj.txt","r");
	   fscanf(r,"%d",&s);
	   s=s+e;
	   fclose(r);
	   r = fopen("raj.txt","w");
	   fprintf(r,"%d",s);
	   fclose(r);
	  }
	  else
	  {
	   printf("This account is not related to our bank\n");
	   getch();
	   t=6;
	  }
	  if(t!=6)
	  {
	  t=5;
	  f=f+e;
	  n=n-e;
	  printf("Transfer sucessful\n");
	  }
	  }
	  else
	  {
	  printf("You don't have enough balance to transfer\n");
	  }
	  getch();
	  break;
 default: 
	  printf("Wrong Choice Entered\n");
	  x=1;
	  getch();
	  break;
}
if(x==1)
{
 c='Y';
 x=0;
}
else
{
 printf("Do you want to execute again (Y/N) : ");
 scanf("%s",&c);
}     //else
}     //while
fprintf(p[q],"%d\n",n);
fclose(p[q]);
printf("-----------------------------");
printf("BANK OF INDIA\n");
printf("-----------------------------");
printf("Your Name : %s\n",d4.name);
printf("Your Acount Number is : %d\n",d4.an);
printf("\4 You have Deposit : Rs.%d\n",b);
printf("\4 You have Withdraw : Rs.%d\n",d);
printf("\4 You have Transfer : Rs.%d\n",f);
printf("\4 Your Current Balance is Rs.%d\n",n);
printf("Thanks for Visiting\n");
printf("Bank of India\n");
printf("www.bankofindia.com\n");
getch();
}     //else
}
