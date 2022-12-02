#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define price 400 // All ticket price is 400 

// Passanger info 
typedef struct pinfo
{
	int ticketno;
	char fname[20];
	char lname[20];
	char date[20];
	char time[20];
	char source[20];
	char destination[20];
}pinfo;


// All functions declaration
void bookticket();
void showallticket();
void showmyticket();
void updateticket();
void cancelticket();
void passticketwise();


// Main rpogram
int main()
{
	int ch;
	char user[20];
	char pass[20];
	printf("\t\t***Railway Ticket Genration System***\n");
	printf("\n");
	printf("\t***LOGIN MENU***\n");	
	printf("\t1.Admin Login.\n");	
	printf("\t2.User Login.\n");	
	printf("\t3.Exit.\n");	
	printf("\tYour choice = ");
	scanf("%d",&ch);
	printf("\n");

	switch(ch)
	{
		case 1:
			printf("\n");
			printf("\t***Admin Login***\n");
			printf("\tEnter username:- ");
			scanf("%s",&user);
			printf("\tEnter password:- ");
			scanf("%s",&pass);

			if(strcmp(user, "admin123") == 0 && strcmp(pass, "pass123") == 0)
			{
				printf("\tUsername and password are corret.\n");
				printf("\n");

				int c1;
				do
				{
					printf("\t***ADMIN MENU***\n");
					printf("\t1.Book Ticket.\n");
					printf("\t2.Show All Ticket.\n");
					printf("\t3.Update Ticket.\n");
					printf("\t4.Passanger Wise Ticket.\n");
					printf("\t5.Login Menu.\n");
					printf("\t6.Exit.\n");
					printf("\tEnter choice = ");
					scanf("%d",&c1);
					switch(c1)
					{
						case 1:
							bookticket();
						break;

						case 2:
							showallticket();
						break;

						case 3:
							updateticket();
						break;

						case 4:
						    passticketwise();
						break;

						case 5:
                        printf("\n");
							main();
						break;

						case 6:
							exit(0);
						break;

						default :
						printf("\n");
							printf("\tWrong Choice.\n");
						break;
					}
				}while(c1!=0);
			}
			else
			{
				printf("\n");
				printf("\tUsername and password are incorret.\n");
				printf("\tPlease login again.\n");
				printf("\n");
				main();
			}
			break;

		case 2:
			printf("\n");
			printf("\t***UserLogin***\n");
			printf("\tEnter username:- ");
			scanf("%s",&user);
			printf("\tEnter password:- ");
			scanf("%s",&pass);

			if(strcmp(user, "user123") == 0 && strcmp(pass, "pass123") == 0)
			{
				printf("\tUsername and password are corret.\n");
				printf("\n");

				int c2;
				do
				{
					printf("\t***USER MENU***\n");
					printf("\t1.Book Ticket.\n");
					printf("\t2.Show My Ticket.\n");
					printf("\t3.Cancel Ticke.\n");
					printf("\t4.Login Menu.\n");
					printf("\t5.Exit.\n");
					printf("\tEnter choice = ");
					scanf("%d",&c2);
					switch(c2)
					{
						case 1:
							bookticket();
						break;

						case 2:
							showmyticket();
						break;
					
						case 3:
						    cancelticket();
						break;
					
						case 4:
                            printf("\n");
						    main();
						break;

						case 5:
						    exit(0);
						break;

						default :
						printf("\n");
						printf("\tWrong Choice.\n");
					}
				}while(c2!=0);
			}
			else
			{
				printf("\n");
				printf("\tUsername and password are incorret.\n");
				printf("\tPlease login again.\n");
				printf("\n");
				main();
			}
			break;

		case 3:
			exit(1);
			break;

		default :
			printf("\t***Invalid choice***\n");
			printf("\n");
			main();
			break;
	}
	return 0;
}

// Booking ticket function
void bookticket()
{
	pinfo p;
    FILE  *fp;
	fp = fopen("ticketdata.txt","a");
	printf("\tEnter details\n");
	printf("\n");
	printf("\tEnter ticket no = ");
	scanf("%d",&p.ticketno);
	printf("\tEnter first name = ");
    scanf("%s",&p.fname);
	printf("\tEnter last name = ");
    scanf("%s",&p.lname);
	printf("\tEnter date(dd,mm,yyyy) in format = ");
    scanf("%s",&p.date);
	printf("\tEnter time hh:mmAM|PM in format = ");
    scanf("%s",&p.time);
	printf("\tEnter source = ");
    scanf("%s",&p.source);
	printf("\tEnter destination = ");
    scanf("%s",&p.destination);

    if(fp == NULL)
	{
		printf("File not found");
	}
	else
	{
        fwrite(&p,sizeof(pinfo),1,fp);
		printf("\tTicket Booked.\n");
		printf("\tThank You.\n");
	}
	fclose(fp);
}

// Show user ticket function
void showmyticket()
{
    pinfo p1;
    FILE *fp;
    int ticket,found=0;
    fp = fopen("ticketdata.txt","r");
    printf("\tEnter ticket no to search = ");
    scanf("%d",&ticket);
    while(fread(&p1,sizeof(pinfo),1,fp))
    {
        if(p1.ticketno == ticket)
        {
            found=1;
            printf("\n--------------------------------------------\n");
			printf("|------------------Ticket------------------|");
			printf("\n--------------------------------------------\n");
			printf("| Date:- %s\tTime:- %s     |\n",p1.date,p1.time);
			printf("| Ticket no:- %d\t\t\t   |\n",p1.ticketno);
			printf("| Name:- %s %s\t\t\t   |\n",p1.fname,p1.lname);
			printf("| Source:- %s\t\t\t           |\n",p1.source);
			printf("| Destination:- %s\t\t\t   |\n",p1.destination);
			printf("--------------------------------------------\n");
			printf("| Price = %d\t\t\t\t   |\n",price);
			printf("--------------------------------------------\n");
        }
    }
    if(!found)
    {
        printf("\tTicket not found.\n");
        printf("\n");
    }
    printf("\n");
}

// Showing all ticket function
void showallticket()
{
	pinfo p1;
    FILE *fp;
    fp =fopen("ticketdata.txt","r");
    printf("Ticket no\tFirst Name\tLast Name\tDate\t\tTime\t\tSource\t\tDestination\n");
    while(fread(&p1,sizeof(pinfo),1,fp))
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t%s\t\t%s\t\t%s\n",p1.ticketno,p1.fname,p1.lname,p1.date,p1.time,p1.source,p1.destination);
    }
    fclose(fp);
}


// Update ticket function
void updateticket()
{
    pinfo p1;
    FILE *fp,*fp1;
    int ticket,found=0;
    fp = fopen("ticketdata.txt","r");
    fp1 = fopen("temp.txt","w");
    printf("\tEnter ticket no to update = ");
    scanf("%d",&ticket);
    while(fread(&p1,sizeof(pinfo),1,fp))
    {
        if(p1.ticketno == ticket)
        {
            found=1;
            printf("\tEnter new first name = ");
            scanf("%s",&p1.fname);
            printf("\tEnter new last name = ");
            scanf("%s",&p1.lname);
            printf("\tEnter new date(dd,mm,yyyy) in format = ");
            scanf("%s",&p1.date);
            printf("\tEnter new time hh:mmAM|PM in format = ");
            scanf("%s",&p1.time);
            printf("\tEnter new source = ");
            scanf("%s",&p1.source);
            printf("\tEnter new destination = ");
            scanf("%s",&p1.destination);
        }
        fwrite(&p1,sizeof(pinfo),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1 = fopen("temp.txt","r");
        fp = fopen("ticketdata.txt","w");

        while(fread(&p1,sizeof(pinfo),1,fp1))
        {
            fwrite(&p1,sizeof(pinfo),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\tTicket not found.\n");
        printf("\n");
    }
    printf("\n");
        
}

// Cancel ticket function
void cancelticket()
{
    pinfo p1;
    FILE *fp,*fp1;
    int ticket,found=0;
    fp = fopen("ticketdata.txt","r");
    fp1 = fopen("temp.txt","w");
    printf("\tEnter ticket no to cancel = ");
    scanf("%d",&ticket);
    while(fread(&p1,sizeof(pinfo),1,fp))
    {
        if(p1.ticketno == ticket )
        {
            found=1;
            
        }
        else
        {
        fwrite(&p1,sizeof(pinfo),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        fp1 = fopen("temp.txt","r");
        fp = fopen("ticketdata.txt","w");

        while(fread(&p1,sizeof(pinfo),1,fp1))
        {
            fwrite(&p1,sizeof(pinfo),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\tTicket not found.\n");
        printf("\n");
    }
    printf("\n");
    printf("\tTicket Cancelled.\n"); 
}

// Passanger wise ticket function
void passticketwise()
{
    pinfo *p, p1;
    FILE *fp;
    int i,j;
    fp = fopen("ticketdata.txt","r");
    fseek(fp,0,SEEK_END);
    int n = ftell(fp)/sizeof(pinfo);
    p = (pinfo*)calloc(n,sizeof(pinfo));

    rewind(fp);
    for(i=1;i<n;i++)
    {
        fread(&p[i],sizeof(pinfo),1,fp);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i].ticketno < p[j].ticketno)
            {
                p1 = p[i];
                p[i] = p[j];
                p[j] = p1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t%s\t\t%s\t\t%s\n",p[i].ticketno,p[i].fname,p[i].lname,p[i].date,p[i].time,p[i].source,p[i].destination);
    }
    fclose(fp);
}