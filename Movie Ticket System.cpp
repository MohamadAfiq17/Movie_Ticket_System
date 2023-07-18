#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int pric( int, int );

int main()
{
	char name[100];
	int age, movieCode, quantityTicket, totalPrice; 
	float showtime, ticketPrice;
	
	cout<<"************************************************************"<<endl
	    <<"************************************************************"<<endl
	    <<"                         WELCOME TO                         "<<endl
	    <<"                    GOLDEN SCREEN CINEMA                    "<<endl
		<<"************************************************************"<<endl
		<<"************************************************************"<<endl
	<<endl;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Movie code: "<<endl
	    <<"1. Fantastic Beasts: The Crimes Of Grinderwald"<<endl 
		<<"2. How To Train Our Dragon"<<endl 
		<<"3. Polis Evo 2"<<endl 
		<<endl
		<<"Please choose your movie code: ";
	cin>>movieCode;
	cout<<endl;
	
	
	if (movieCode==1)
	{
		ticketPrice=13.00;
		cout<<"Showtimes Code:"<<endl
			<<"1. 5:30 PM"<<endl
			<<"2. 8:15 PM"<<endl
			<<"3. 11:00 PM"<<endl
			<<endl
			<<"Please choose your showtimes code: "<<endl;
		cin>>showtime;
		cout<<endl;
		
		if (showtime==1)
		{
			cout<<"Your movie is Fantastic Beasts: The Crimes Of Grinderwald"<<endl
		    	<<"Your movie time at 5:30 PM at hall 7"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
	
		 else if (showtime==2)
		{
			cout<<"Your movie is Fantastic Beasts: The Crimes Of Grinderwald"<<endl
		    	<<"Your movie time at 8:15 PM at hall 7"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==3)
		{
			cout<<"Your movie is Fantastic Beasts: The Crimes Of Grinderwald"<<endl
		    	<<"Your movie time at 11:00 PM at hall 7"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else
		{
			cout<<"Invalid Showtime Code"<<endl;
				
		}
	}
		
	else if (movieCode==2)
	{
		ticketPrice=12.00;
		cout<<"Showtimes Code:"<<endl
			<<"1. 3:50 PM"<<endl
			<<"2. 7:45 PM"<<endl
			<<"3. 8:45 PM"<<endl
			<<endl
			<<"Please choose your showtimes code: "<<endl;
		cin>>showtime;
		cout<<endl;
		
		if (showtime==1)
		{
			cout<<"Your movie is How To Train Our Dragon"<<endl
		    	<<"Your movie time at 3:50 PM at hall 6"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==2)
		{
			cout<<"Your movie is How To Train Our Dragon"<<endl
		    	<<"Your movie time at 7:45 PM at hall 5"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==3)
		{
			cout<<"Your movie is How To Train Our Dragon"<<endl
		    	<<"Your movie time at 8:45 PM at hall 6"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else
		{
			cout<<"Invalid Showtime Code"<<endl;
		}
	}
	
	else if (movieCode==3)
	{
		ticketPrice=10.00;
		cout<<"Showtimes Code:"<<endl
			<<"1. 4:10 PM"<<endl //hall 2
			<<"2. 4:40 PM"<<endl //hall 9
			<<"3. 5:25 PM"<<endl //hall 10
			<<"4. 6:45 PM"<<endl
			<<"5. 7:15 PM"<<endl
			<<"6. 8:00 PM"<<endl
			<<endl
			<<"Please choose your showtimes code: "<<endl;
		cin>>showtime;
		cout<<endl;
	
		if (showtime==1)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 4:10 PM at hall 2"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==2)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 4:40 PM at hall 9"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==3)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 5:25 PM at hall 10"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==4)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 6:45 PM at hall 2"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==5)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 7:15 PM at hall 9"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else if (showtime==6)
		{
			cout<<"Your movie is Polis Evo 2"<<endl
		    	<<"Your movie time at 8:00 PM at hall 10"<<endl
		    	<<"Price for a ticket is RM "<<ticketPrice<<endl;
		}
		
		else
		{
			cout<<"Invalid Showtime Code"<<endl;
		}

	}
	
	else
	{
		cout<<"Invalid Movie Code"<<endl;
	}
	cout<<endl
	<<"Enter quantity of ticket: "<<endl;
	cin>>quantityTicket;
	
	totalPrice =  pric(ticketPrice,quantityTicket);
	
	cout<<"Total price: RM"<<totalPrice<<endl;
		
	
	return 0;
}

int pric ( int price, int quantity)
   	{
    	int newPrice;
   		newPrice = price*quantity;
   		
   	    return newPrice;
    }
