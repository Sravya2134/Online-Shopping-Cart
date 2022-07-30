#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct account
{
	char name[20];
	char address[40];
  	long long int pin;
  	long long int mobno[10];
  	char mailid[100];
}s;
struct cart
{
	int sno;
	char item[15];
	int q;
	int cost;
};
static int totalCost;
main()
{
	static int a[20];
	int k,c=1,i,j,acc,l=0;
	char name[20];
	char items[15][150]={"Sandisk_16GB   ","Mouse          ","Keyboard       ",
						 "Adidas         ","Nike           ","Puma           ",
						 "iPhone_13      ","Samsung_A52    ","Oneplus_Nord2  ",
						 "Zara           ","Dnmx           ","Netplay        ",
						 "Dell_Inspiron  ","Mac_Book       ","Lenovo_Thinkpad"};
	int cost[15]={350,300,450,
				  3550,5000,2800,
				  119900,29999,45000,
				  3549,2399,1299,
				  72000,129900,55000};
	for (i=15;i<=100;i+=5)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);
		printf("");
		for (j=0; j<i;j+=2)
			printf(" ");
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83)
			Sleep(100);
	}
	system("cls");
	int wlc,wlc2,wlc3;
	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" ONLINE SHOPPING";
	char welcome4[50]="   CART ";
	printf("\n\n\n\n\n\t\t\t\t");
	for( wlc=0; wlc<strlen(welcome);wlc++)
	{
		printf(" %c",welcome[wlc]);
		Sleep(100);
	}
	printf("\n\n\n\t\t\t\t   ");
	for(wlc2=0; wlc2<strlen(welcome2) ;wlc2++)
	{
		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}
	printf("\n\n\n\t\t      ");
	for(wlc3=0; wlc3<strlen(welcome3) ;wlc3++)
	{
		if(welcome3[wlc3]!='D')
			printf(" %c",welcome3[wlc3]);
		else
			printf(" %c",welcome3[wlc3]);
		Sleep(100);
	}
	printf("\n\n\n\t\t\t     ");
	for(wlc3=0; wlc3<strlen(welcome4) ;wlc3++)
	{
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E')
			printf(" %c",welcome4[wlc3]);
		else
			printf(" %c",welcome4[wlc3]);
		Sleep(100);
	}
	sleep(5);
	system("cls");
	printf("\n\n\n\n\n\t   Please Enter Your Name\n\t   ");
 	gets(s.name);
 	system("cls");
 	printf("\n\n\n\n\tHello %s\n\tHiii..\n\tFollow the instructions as suggests",s.name);
 	sleep(3);
 	system("cls");
	do
	{
		if(c==1) 
		{
			if(l==1)
				system("cls");
		printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\n4 - Shirts");
		printf("\n5 - Laptops\n\nAny other number to exit\n");
		printf("\nEnter number --->");
  		scanf("%d",&c);
  		switch(c)
  		{
  		case 1:
   		{
    		int c1;
    		printf("Enter\n1 - Sandisk 16 GB - Rs.350\n2 - Mouse         - Rs.300\n");
			printf("3 - Keyboard      - Rs.450\n\nOther number to exit this category\n");
    		printf("\nEnter number --->");
    		scanf("%d",&c1);
    		switch(c1)
    		{
    			case 1:
			    {
			      int n;
			      printf("You have chose Sandisk 16GB with Rs.350.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			       a[0]++;
			       totalCost+=350;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 2:
			    {
			      int n;
			      printf("You chose Mouse with Rs.300.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			    	a[1]++;
			        totalCost+=300;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 3:
			    {
			      int n;
			      printf("You chose Keyboard with Rs.450.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			      	a[2]++;
			       	totalCost+=450;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    default:
				{
      				printf("Exit from Computer Accesories\n");
      				break;
     			}
			     
			}
			break;
		}
		case 2:
		{
			int c2;
			printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike   - Rs.5000\n3 - Puma   - Rs.2800\n\nOther number to exit this category\n");
    		printf("\nEnter number --->");
			scanf("%d",&c2);
    		switch(c2)
    		{
    			case 1:
			    {
			      int n;
      			  printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			       a[3]++;
			       totalCost+=3550;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 2:
			    {
			      int n;
  				  printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			    	a[4]++;
			        totalCost+=5000;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 3:
			    {
			      int n;
			      printf("You chose Puma Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			      	a[5]++;
			       	totalCost+=2800;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    default:
				{
      				printf("Exit from Shoes Category\n");
      				break;
     			}
			     
			}
			break;
		}
		case 3:
   		{
    		int c3;
    		printf("Enter\n1 - iphone_13      - Rs.119900\n2 - Samsung_A52    - Rs.29999\n3 - Oneplus_Nord2  - Rs.45000\n\nOther number to exit this category\n");
    		scanf("%d",&c3);
    		switch(c3)
    		{
    			case 1:
			    {
			      int n;
			      printf("You chose iphone_13 with Rs.119900.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			       a[6]++;
			       totalCost+=119900;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 2:
			    {
			      int n;
			      printf("You chose SamsungA52 with Rs.29999.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			    	a[7]++;
			        totalCost+=29999;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 3:
			    {
			      int n;
			      printf("You chose Oneplus_Nord2 with Rs.45000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			      	a[8]++;
			       	totalCost+=45000;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    default:
				{
      				printf("Exit from Mobiles Category\n");
      				break;
     			}
			     
			}
			break;
		}
		case 4:
   		{
    		int c4;
    		printf("Enter\n1 - Zara    - Rs.3549\n2 - Dnmx    - Rs.2399\n3 - Netplay - Rs.1299\n\nOther to exit this category\n");
    		printf("\nEnter number --->");
			scanf("%d",&c4);
    		switch(c4)
    		{
    			case 1:
			    {
			      int n;
			      printf("You chose Zara with Rs.3549.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			       a[9]++;
			       totalCost+=3549;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 2:
			    {
			      int n;
			      printf("You chose Dnmx with Rs.2399.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			    	a[10]++;
			        totalCost+=2399;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 3:
			    {
			      int n;
			      printf("You chose Netplay with Rs.1299.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			      	a[11]++;
			       	totalCost+=1299;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    default:
				{
      				printf("Exit from Shirts Category\n");
      				break;
     			}
			     
			}
			break;
		}
		case 5:
   		{
    		int c5;
    		printf("Enter\n1 - Dell_Inspiron   - Rs.72000\n2 - Mac_Book        - Rs.129900\n3 - Lenovo_Thinkpad - Rs.55000\n\nOther number to exit this category\n");
    		printf("\nEnter number --->");
			scanf("%d",&c5);
    		switch(c5)
    		{
    			case 1:
			    {
			      int n;
			      printf("You chose Dell_Inspiron with Rs.72000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			       a[12]++;
			       totalCost+=72000;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 2:
			    {
			      int n;
			      printf("You chose Mac_Book with Rs.129900.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			    	a[13]++;
			        totalCost+=129900;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    case 3:
			    {
			      int n;
			      printf("You chose Lenovo_Thinkpad with Rs.55000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
			      scanf("%d",&n);
			      if(n==1)
			      {
			      	a[14]++;
			       	totalCost+=55000;
			      }
			      printf("Your Cost in Cart is %d\n",totalCost);
			      break;
			    }
			    default:
				{
      				printf("Exit from Laptops Category\n");
      				break;
     			}
			     
			}
			break;
		}
		}
		
		  system("cls");
		  printf("%s's cart\n",s.name);
		  printf("\n----------------------------------------------------------------------");
		  printf("\nId_no\tItems\t\t   Quantity\t\t\tCost\n");
		  printf("----------------------------------------------------------------------\n");
		  for(i=0;i<15;i++)
		  {
		   if(a[i]!=0)
		   	  printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
		  }
		  l=1;
		  printf("\n\n\nTotal Cost\t\t\t\t%d/-\n\n\n",totalCost);
		  printf("Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \n4 to Final Bill\nAny other number to Exit\n");
     	  printf("\nEnter number --->");
		  scanf("%d",&c);
  		  }
		if(c==2)
		{
			int id;
			printf("Enter id to delete item\n");
		    scanf("%d",&id);
		    a[id]=delete_item(items,a,cost,id);
		    printf("Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \n4 to Final Bill\nAny other number to Exit\n");
     		printf("\nEnter number --->");
			 scanf("%d",&c);
		  }
		if(c==3)
		{
		    int id;
		    printf("Enter id to Change quantity of an item\n");
		    scanf("%d",&id);
		    a[id]=quantity(items,a,cost,id);
		    printf("Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \n4 to Final Bill\nAny other number to Exit\n");
		    printf("\nEnter number --->");
			scanf("%d",&c);
		}
		if(c==4)
		{
			finalbill(items,a,cost);
		}
	}while(c==1 || c==2 || c==3);
	
}
int delete_item(char items[][150],int a[],int cost[],int id)
{
	   int i;
	   if(id>=0&&id<15)
	   {
		   totalCost=totalCost-(cost[id]*a[id]);
		   a[id]=0;
	   }
	   else
	   {
	   		printf("Enter Valid id\n");
	   }
	    system("cls");
	    printf("Updated %s cart's Items \n",s.name);
	    printf("\n----------------------------------------------------------------------");
	    printf("\nId_no\tItems\t\t   Quantity\t\t\tCost\n");
	    printf("----------------------------------------------------------------------\n");
		for(i=0;i<15;i++)
	    {
	     if(a[i]!=0)
	    	printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
	    }
	    printf("\n\n\nTotal Cost\t\t\t\t\t%d/-\n\n\n",totalCost);
	    
	return a[id];
}
int quantity(char items[][150],int a[],int cost[],int id)
{
		int q,i;
		printf("Enter quantity to be changed of an item\n");
		printf("\nEnter quantity --->");
		scanf("%d",&q);
		   if(id<15&&id>=0)
		   {
		    if(q>0 && a[id]>0)
			{  
		        if(q<a[id]) 
		     {
		      int dec=a[id]-q;
		      a[id]=q;
		       totalCost=totalCost-(cost[id]*dec);
		     }
		     if(q>a[id]) 
		     {
		      int inc=q-a[id];
		      a[id]=q;
		       totalCost=totalCost+(cost[id]*inc); 
		     }
		     if(q==a[id]) 
		     {
		      a[id]=q;
		       totalCost=totalCost+0; 
		     }       
		    }
		      else
		       printf("Item has no Quantity.Please Try again\n");
		     }
		   else
		    printf("Enter Valid id\n");
		    system("cls");
		    printf("Updated %s cart's Items \n",s.name);
		    printf("\n----------------------------------------------------------------------");
		    printf("\nId_no\tItems\t\t   Quantity\t\t\tCost\n");
		    printf("----------------------------------------------------------------------\n");
		    for(i=0;i<15;i++)
		    {
		    	if(a[i]!=0)
		    		printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
		    }
		    printf("\n\n\nTotal Cost\t\t\t\t\t%d/-\n\n\n",totalCost);
		    
	return a[id];
}
finalbill(char items[][150],int a[],int cost[])
{
		int i,j,m,p,u=2,pin,mode;
		long long int card;
		FILE *fp;
		struct cart c[20];
		system("cls");
		do
		{
		acco:
		printf("\n\n\n\n\n\tPLEASE WAIT WHILE WE ARE REDIRECTING YOU TO LOGIN PAGE..........");
		sleep(5);
		system("cls");
		printf("\n\n\n\n\n\t   \t\tEnter \n\n\t\t\t    1 - create new account\n");
		printf("\t         \t    2 - login to account\n");
		printf("\n\t         Enter number --->");
		scanf("%d",&m);
		switch(m)
		{
				case 1:
				{
					u=2;
					system("cls");
					printf("\n\nEnter address to finalising bill\n");
					scanf("%s",s.address);
					printf("\nEnter pincode\n");
					scanf("%lld",&s.pin);
					printf("\nEnter mobile number for receiving updates\n");
					scanf("%lld",&s.mobno);
					printf("\nEnter mail id\n");
					scanf("%s",s.mailid);
					goto bill;
				}
							break;
				case 2:
				{
					system("cls");
					printf("\n\n\n\n\tYOU DONT HAVE ANY EXISTING ACCOUNT PLEASE CREATE A NEW ACCOUNT ");
					printf("\n\tPLEASE WAIT A SECOND....");
					sleep(4);
					system("cls");
					goto acco;
				}
							break;
				
		}
		}
		while(u==1);
		bill:
		printf("\n\n\n\n\tPLEASE WAIT WHILE YOUR ACCOUNT IS BEING CREATING....");
		system("cls");
		printf("\n\n\n\n\tCONGRATULATIONS DEAR %s",s.name);
		printf("\n\tYOUR ACCOUNT IS CREATED SUCCESFULLY");
		sleep(5);
		system("cls");
		printf("\n\n\n\n\tPLEASE WAIT WHILE WE ARE REDIRECTING YOU TO BILLING PLATFORM ");
		sleep(5); 
		system("cls");
		printf("\n\n\n\n\tYOUR TOTAL BILL AMOUNT IS:%d",totalCost);
		printf("\n\tEnter the mode of payment");
		printf("\n\n\t\t1.CASH\n\t\t2.CREDIT");
		printf("\n\n\tEnter number --->");
		scanf("%d",&p);
		switch(p)
		{
			case 1: system("cls");
					mode=1;
					goto last;
						break;
			case 2: printf("\n\n\n\n\n\tEnter the Card number:");
					scanf("%lld",&card);
					mode=2;
					printf("\n\tEnter card pin:");
					scanf("%d",&pin);
					system("cls");
					printf("\n\n\n\n\tPLEASE WAIT WHILE WE ARE PROCESSING YOUR PAYMENT ");
					sleep(3);
					system("cls");
					printf("\n\n\n\n\tYOUR PAYMENT WAS SUCCESSFUL");
					sleep(2);
					
						break;
					
		}
		last:
		system("cls");
		printf("\n\n\n\n\tPLEASE WAIT WHILE WE ARE FINALISEING YOUR ORDER ");
		sleep(3);
		system("cls");
		printf("========================================================================\n");
		printf("=======INVOICE==========================================================\n\n");
		printf("                                                  Order No:4322492323   \n\n");
		printf("------------------------------------------------------------------------\n");
        printf("Id_no\tItems\t\t   Quantity\t\t\tCost\n");
	    printf("------------------------------------------------------------------------\n");
	    for(i=0;i<15;i++)
		{
			if(a[i]!=0)
			{
		   		printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
			}
		}
		printf("\n\n\nTotal Cost\t\t\t\t\t%d/-\n",totalCost);
		if(mode==1)
			printf("\n  Mode of payment: CASH\n\n\n\n");
		if(mode==2)
			printf("\n  Mode of payment: CARD \n\n\n\n");
	    printf("\t        \tName     : %s\n",s.name);
	    printf("\t        \tAddress  : %s\n",s.address);
	    printf("\t        \tPincode  : %lld\n",s.pin);
	    printf("\t        \tMobile No: %lld\n",s.mobno);
	    printf("\t        \tEmail id : %s\n",s.mailid);
	    printf("\n\n\t\tTHANKS FOR SHOPPING PLEASE SHOP AGAIN\n");
		printf("========================================================================\n");
	    for(i=0,j=0;i<15;i++)
	    {
	    	if(a[i]!=0)
	    	{
	    		c[i].sno=j;
	    		strcpy(c[i].item,items[i]);
	    		c[i].q=a[i];
	    		c[i].cost=cost[i];
	    		j++;
	    	}
	    }
		fp=fopen("C:/Users/USER/Desktop/psp core/cart1.txt","w");
		fwrite(&s,sizeof(struct account),1,fp);
	    for(i=0;i<20;i++)
		{
			if(a[i]!=0)
			{
				fwrite(&c[i],sizeof(struct cart), 1, fp);
			}
		}
	    fclose(fp);

}

