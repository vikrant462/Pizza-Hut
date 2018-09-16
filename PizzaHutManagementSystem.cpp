//To see customer list...........Id=(manager@123)
//...............................password=(12345)
#include<iostream>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<process.h>    
#include<unistd.h>     
#include<string.h>
#include <ctime>
using namespace std;

void gotoxy(long x, long y) 
      {
           COORD pos = {x, y};
           SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      }

homepage()
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED );
	int i;
	cout<<"\n\n\n";

	cout<<"\t   |\t\t                    LOVELY PROFESSIONAL UNIVERSITY                          |\n";
	cout<<"\t   |\t\t           Department Of Computer Science And Engineering                   |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
	cout<<"\t   |\t\t                       A MINI PROJECT ON                                    |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1 );
	cout<<"\t   |\t\t                           PIZZA HUT                                        |\n";
	cout<<"\t   |\t\t                                                                            |\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5 );
	cout<<"\t   |\t\t        BY:                                         GUIDE:                  |\n";
	cout<<"\t   |\t\t     -------------                                -----------               |\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6 );
	cout<<"\t   |\t\t   VIKRANT CHAUDHARY                         Mr. PRAVEEN SEHGAL Sir         |\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3 );
	cout<<"\t   |\t\t   Reg No.-> 11703065                                                       |\n";
	cout<<"\t   |\t\t   Roll NO.->52                                                             |\n";
  
	
	//for(int i=17;i<97;i++)
	
	for(int i=0;i<13;i++)
	{
		gotoxy(11,i+3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i );
		cout<<"||";
		gotoxy(100,i+3);
		cout<<"||";
	}
	
	int k;
	for(int i=0;i<92;i++)
	{
		if(i>9)
		k=i%10;
		else
        k=i;
		gotoxy(10+i,3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),k);
		cout<<"*";
		gotoxy(10+i,16);
		cout<<"*";
	
	}
	getch();

}

/////////////////////////////////


string Date()
{
time_t rawtime;
  class tm * timeinfo;
  char buffer[80];
  time (&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer,sizeof(buffer),"%d-%m-%Y",timeinfo);
  string date(buffer);
  return date;
}

string Time()
{
time_t rawtime;
  class tm * timeinfo;
  char buffer[80];
  time (&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer,sizeof(buffer),"%I:%M:%S",timeinfo);
  string time(buffer);
  return time;
}
///////////////////////


///////////////////////////////////////
char piza[20],burger[20],beverg[20];
string orderDate,orderTime;
//////////////////////////////////////
class Pizza_Hut
{
	public:
    char name[20],adrs[20],email_id[30],itm[20],itm_typ[20],mob[15],pass[20],size[20],crust[20],payment[20];
    char cdate[20],ctime[20];
    int qnt=0;
	float bill=0,crustbill=0,sizebill=0;
	

	void customer_information()
	{
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		    orderDate=Date(); 
          strcpy(cdate, orderDate.c_str()); 
		   orderTime=Time();
		   strcpy(ctime, orderTime.c_str()); 
            cout<<" Signup For Ordering: \n";
            cout<<"Mobile NO: ";
            cin.ignore();
            gets(mob); 
			cout<<"Password: ";
            cin>>pass;  
			cin.ignore(); 
            cout<<"Name: ";
            gets(name);
			cout<<"Address: ";
            gets(adrs);
            cout<<"Email address: ";
            gets(email_id);
            u:
            int option=0;
            cout<<"Payment Mode: \n";
            cout<<"   1:Cash On Delivery\n";
            cout<<"   2:Debit Card\n";
            cout<<"   3:Paytm\n";
            cin>>option;
           switch(option)
	   {
	 	case 1:
	 		strcpy(payment,"Cash On Delivery");
	 		break;
	 	case 2:
	 		strcpy(payment,"Debit Card");
	 		break;
		case 3:
	 		strcpy(payment,"Paytm");
	 		break;
		default:
		    cout<<"Choose Valid Option";	 	
	 		goto u;
	   }   
	                                                           
            cout<<"\n\t\t\t~~~~~~~:)Order Sucessfully Placed(:~~~~~~~\n";
            getch();
	}
	
	void display_customer_info()
	{ 
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<endl<<"\n\n\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6 );
	    cout<<endl<<"\t||\t\t\tDate Of Booking: "<<cdate;
	    cout<<endl<<"\t||\t\t\tTime Of Booking: "<<ctime;
	     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
		cout<<endl<<"\t||\tMobile_NO: "<<mob<<"\t\t\t"<<itm<<itm_typ;                    
		cout<<endl<<"\t||\tName: "<<name<<"\t\t\t\t"<<"Total bill = Rs"<<bill<<" x "<<qnt<<" = Rs"<<bill*qnt;
		cout<<endl<<"\t||\tAddress: "<<adrs<<"\t\t\t\t10% Discount Bill=Rs"<< 0.9*(bill*qnt);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		cout<<endl<<"\t||\t\t\tEmail Address : "<<email_id<<"\t\t\t";
		cout<<endl<<"\t||\t\t\tExpected Arrival 30 minute later";
		cout<<endl<<"\t||\t\t\tPayment Mode :) "<<payment;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout<<endl<<"\t||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}
	
	char* get_mobile_no()
	{
		return mob;
	}
	
	char* get_Name()
	{
		return name;
	}
	
	char* get_Address()
	{
		return adrs;
	}
	
	char* get_Email_id()
	{
		return email_id;
	}
	
	int option,t=0;
 void menu()
 {
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		int choice;
	cout<<"\t\t(: Happy Menu Selection :)\n";
	cout<<"\t\t=========================\n";
	cout<<"\t\t1: Pizza\n";
	cout<<"\t\t2: Burger\n";
	cout<<"\t\t3: Beverages\n";
	cout<<"\t\t4: Exit\n";
	cin>>choice;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	switch(choice)
	{
		case 1:
	cout<<"\t\tPizza Selection\n";
	cout<<"\t\t*****************************\n";
	cout<<"\t\t Pizza_list\t\t\tPrice\n";
	cout<<"\t\t____________\t\t\t____________\n";
	cout<<":)\t\t1: Margherita\t\t\tRs 120\n";
	cout<<"\t\t2: Peepy Paneer\t\t\tRs 150\n";
	cout<<"\t\t3: Farm house\t\t\tRs 200\n";
	cout<<"\t\t4: Deluxe Veggie\t\tRs 250\n";
	cout<<"\t\t5: Not Intrested\n";
	cin>>option;
	   switch(option)
	   {
	 	case 1:
	 		strcpy(piza,"Margherita");
	 		bill=120;
	 		break;
	 	case 2:
	 		strcpy(piza,"Peepy Paneer");
	 		bill=150;
	 		break;
		case 3:
	 		strcpy(piza,"Farm house");
	 		bill=200;
	 		break;
		case 4:
	 		strcpy(piza,"Deluxe Veggie");
	 		bill=250;
	 		break;	 	 	
	 	case 5:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }   
	   
	    cout<<"\t\tEnter the quantity of Pizza You Want\n";
	    cin>>qnt;
	 		strcpy(itm,"Pizza (:->");
	 		strcpy(itm_typ,piza); 
	 		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	      t:
	      cout<<"\t\tSelect the size of PIZZA\n";
	      cout<<"\t\t******************************\n";
	      cout<<"\t\t1 :Small Size\n";
	      cout<<"\t\t2 :Medium Size\n";
	      cout<<"\t\t3 :Large Size\n"; 
	      cout<<"\t\t4 :Xtra_Large Size\n"; 
	      cin>>option;
	      switch(option)
	   {
	 	case 1:
	 		strcpy(size,"Small Size");
	 		sizebill=0.5;
	 		break;
	 	case 2:
	 		strcpy(size,"Medium size");
	 		sizebill=1;
			break;
		case 3:
	 		strcpy(size,"Large size");
	 		sizebill=2;
			break;	
		case 4:
	 		strcpy(size,"Large size");
	 		sizebill=3;
			break;		
		default:
		    cout<<"Enter Valid Choice";	 	
	 		goto t;
	   }
	 		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
			int option;
			 c:
	cout<<"\t\tNeed special Crust\n";
	cout<<"\t\t**********************************\n";
	cout<<"\t\t Crust_list\t\t\tPrice_cost\n";
	cout<<"\t\t ___________\t\t\t___________\n";
	cout<<"\t\t1: Fresh Pan\t\t\tRs 50\n";
	cout<<"\t\t2: Cheese Burst\t\t\tRs 70\n";
	cout<<"\t\t3: Wheat thin crust\t\tRs 80\n";
	cout<<"\t\t4: No Need\n";

	cin>>option;
	
	   switch(option)
	   {
	 	case 1:
	 		strcpy(crust,"Fresh Pan");
	 		crustbill=50;
	 		break;
	 	case 2:
	 		strcpy(crust,"Cheese Burst");
	 		crustbill=70;
	 		break;
		case 3:
	 		strcpy(crust,"Wheat Thin crust");
	 		crustbill=80;
	 		break;	   	 	
	 	case 4:
	 		cout<<"/t/tEnjoy your order";
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		goto c;
	   }
	     
	   
	break;
	
	case 2:
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			int option;
	cout<<"\t|\tBurger Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t Burger_list \t\t\tPrice\n";
	cout<<"\t|\t1: Taco Burger\t\t\tRs 60\n";
	cout<<"\t|\t2: Canyon Creek Burger\t\tRs 80\n";
	cout<<"\t|\t3: Cheese Burger\t\tRs 90\n";
	cout<<"\t|\t4: Turkey Burger\t\tRs 100\n";
	cout<<"\t|\t5: Mushroom Stuffed \t\tRs 120\n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>option;
	   
	   switch(option)
	   {
	 	case 1:
	 		strcpy(burger,"Taco Burger");
	 		bill=60;
	 		break;
	 	case 2:
	 		strcpy(burger,"Canyon Creek");
	 		bill=80;
			break;
		case 3:
	 		strcpy(burger,"Cheese Burger");
	 		bill=90;
			break;
		case 4:
	 		strcpy(burger,"Turkey Burger");
	 		bill=100;
	 		break;	
		case 5:
	 		strcpy(burger,"Mushroom stuffed");
	 		bill=120;
	 		break;	  	 	
	 	case 6:
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the burger quantity";
	 		cin>>qnt;
	 		strcpy(itm,"Burger (:->");
	 		strcpy(itm_typ,burger);                      
	}
	break;
	
    case 3:
  {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			int option;
	cout<<"\t|\tBeverages Selection\n";
	cout<<"\t--------------------------\n";
	cout<<"\t|\t Beverages_list\t\t\tPrice\n";
	cout<<"\t|\t1: Apple Cider\t\t\tRs 80\n";
	cout<<"\t|\t2: Hot chocolate\t\tRs 90\n";
	cout<<"\t|\t3: Coffee\t\t\tRs 95\n";
	cout<<"\t|\t4: Milk Shake\t\t\tRs 100\n";
	cout<<"\t|\t5: Coca Cola\t\t\tRs 110\n";
	cout<<"\t|\t6: Not Intrested\n";
	cin>>option;
	
	   switch(option)
	   {
	 	case 1:
	 		strcpy(beverg,"Apple Cider");
	 		bill=80;
	 		break;
	 	case 2:
	 		strcpy(beverg,"Hot Chocolate");
	 		bill=90;
	 		break;
		case 3:
	 		strcpy(beverg,"Coffee");
	 		bill=95;
	 		break;
		case 4:
	 		strcpy(beverg,"Milk Shake");
	 		bill=100;
	 		break;	
		case 5:
	 		strcpy(beverg,"Coca Cola");
	 		bill=110;
	 		break;			   	 	
	 	case 6:
	 		cout<<"Have look on another items";
		     menu();
			 break;
		default:
		    cout<<"Enter Valid Choice";	 	
	 		menu();
	   }
	    cout<<"Enter the beverg quantity";
	 		cin>>qnt;
	 		strcpy(itm,"BEVERAGES (:->");
	 		strcpy(itm_typ,beverg);      
	}
	break;
	
	case 4:
		exit (0);
	default:
		cout<<"Enter Valid Option";
		menu();
		break;
}
}
};  
 char* login()
{
	char mob[20];
	cout<<"\n\t\t\tIn Order To Login\n";
	cout<<"\t\t\tEnter the Mobile No.\n\t\t\t";
	cin>>mob;
	return mob;
}
fstream file;
Pizza_Hut phut;
 //////
 main_page()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6 );
	    gotoxy(90,20);
	    cout<<"Current Date: "<<Date();
	    gotoxy(90,21);
	    cout<<"Current Time: "<<Time();
	    int n;
	    //cout<<endl;
	    //system("color 1234");
	    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED );
	    gotoxy(90,22);
	    cout<<"___________________ ";
	    gotoxy(90,23);
		cout<<"|Enter Your Choice| ";
		gotoxy(90,24);
		cout<<"------------------- ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2 );
		gotoxy(90,25);
		cout<<">>>>>>>>>>>>>>>>>>>>>>>>>> ";
		gotoxy(90,26);
		cout<<":   1.Menu List         :\n";
		gotoxy(90,27);
		cout<<":   2.Customer list     :\n";
		gotoxy(90,28);
		cout<<":   3.Show Order        :\n";
		gotoxy(90,29);
		cout<<":   4.Change Order      :\n";
		gotoxy(90,30);
		cout<<":   5.Cancel Order      :\n";
		gotoxy(90,31);
		cout<<":   6.Exit              :\n";
	    gotoxy(90,32);
		cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>\n\t\t";
		gotoxy(90,33);
		cin>>n;
		return (n);
		
}

 /////
void save_customer_data()
{
	file.open("file.dat",ios::out|ios::app);
	phut.customer_information();
	file.write((char*)&phut,sizeof(phut));
	file.close();
	cout<<endl<<endl<<"Order Has Been Sucessfully Placed...";
	getchar();
}
 
void display_customer_list()
{
	t:	
	system("cls");
	char id[20];
	char password[20];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout<<"\n\t\t\tManager Access Only :";
	cout<<"\n\t\t\t===================== :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	cout<<"\n\t\t\tEnter The ID :\n\t\t\t";
	cin>>id;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout<<"\n\t\t\tEnter The Password :\n\t\t\t";
	cin>>password;
	if(strcmp(id,"manager@123")==0 && strcmp(password,"12345")==0)
	{
		cout<<"\n\t\t\t\t\tSuccessful Login\n";
	}
	else
	{
		cout<<"\n\t\t\tInvalid Access Retry:\n";
		getch();
		goto t;
	}
	system("cls");
	cout<<"\n\t\t\t\t================================\n\t\t\t\t\tDetails Of Customer\n\t\t\t\t================================\n";
	 
	file.open("file.dat",ios::in);
	while(file.read((char*)&phut,sizeof(phut)))
	{
		phut.display_customer_info();
		//cout<<endl<<"\t______________________________________________\n"<<endl;
	}
	file.close();
	getch();
	system("cls");
}
 
 
void display_order(char* mob_no)
{
	bool found;
	 char password[20];
	 cout<<"\n\t\t\tEnter Password:\n\t\t\t";
	 cin>>password;
		 found=false;
	file.open("file.dat",ios::in);
	while(file.read((char*)&phut,sizeof(phut)))
	{
		if(strcmp(phut.get_mobile_no(),mob_no)==0 && strcmp(password,phut.pass)==0)
		{
			system("cls");
			phut.display_customer_info();
			found=true;
		}
	}
	
	file.close();
	if(found == false)
	{
	cout<<"\n\nNo record found...";
	}   
	getch();
	system("cls");
}
 
 void cancel_order(char* mob_no)
{
	char password[20];
	 cout<<"\n\t\t\tEnter Password:\n\t\t\t";
	 cin>>password;
	file.open("file.dat",ios::in|ios::out);
	fstream file2;
	file2.open("Temp.dat",ios::out);
	file.seekg(0,ios::beg);
	while(file.read((char*)&phut,sizeof(phut)))
	{
		if(strcmp(phut.get_mobile_no(),mob_no)!=0 || strcmp(password,phut.pass)!=0)
		{
			file2.write((char*)&phut,sizeof(phut));
		}
	}
	file2.close();
	file.close();
	remove("file.dat");
	rename("Temp.dat","file.dat");
	cout<<endl<<endl<<"\Your Order Has Been Canceled...";
	getch();
}
 
void change_order(char* mob_no)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	char password[20];
	 cout<<"\n\t\t\tEnter Password:\n\t\t\t";
	 cin>>password;
	bool found=false;
	system("cls");
	cout<<"\t\t\tEdit contact\n===============================\n\n";
	//cout"\t::Enter the Order number of customer to edit:";
	//login();
    //cin>>mob_no;
	
	file.open("file.dat",ios::in|ios::out);
	while(file.read((char*)&phut,sizeof(phut)) && found==false)
	{
		if(strcmp(phut.get_mobile_no(),mob_no)==0 && strcmp(password,phut.pass)==0)
		{
			phut.display_customer_info();
            cout<<"\nPlease Enter The New Details of Order: "<<endl;
			phut.customer_information();
			int pos=-1*sizeof(phut);
			file.seekp(pos,ios::cur);
			file.write((char*)&phut,sizeof(phut));
			cout<<endl<<endl<<"\t Order Successfully Updated...";
			found=true;
		}
	}
	file.close();
	if(found==false)
		cout<<endl<<endl<<"Contact Not Found...";
}

//////////////////////////////////

//////////////////////////////////
int main()
{
	int p;
	char mob_no[15];
	homepage();
	lbl:
	p=main_page();
	switch(p)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		case 1:
			phut.menu();
			save_customer_data();
			system("cls");
		    goto lbl;
		case 2:
			system("cls");
			display_customer_list();
		    goto lbl;
		case 3:
			strcpy(mob_no,login());
			display_order(mob_no);
			goto lbl;
		case 4:
			strcpy(mob_no,login());
		    change_order(mob_no);
		    goto lbl;
		case 5:
			strcpy(mob_no,login());
		    cancel_order(mob_no);
		    system("cls");
		    goto lbl;
		    
		case 6:
		    exit (0);	
		default:
			printf("                      You have Entered Invalid Option Please Retry\n");
		    goto lbl;	     	
	}
	return 0;
}
