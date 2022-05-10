#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qpizza=0;
	//food item sold
	int Srooms=0,Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Spizza=0;
	//Total price of iteams
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_pizza=0;
    
    cout<<"\n\t HOTEL RS";
	cout<<"\n\n Quantity of items we have";
	cout<<"\n Rooms avaliable:";
	cin>>Qrooms;
	cout<<" (Price of one room is 1200)";
	cout<<"\n Quantity of pasta :";
	cin>>Qpasta;
	cout<<" (Price of one plate of pasta is 250)";
	cout<<"\n Quantity of burger :";
	cin>>Qburger;
	cout<<" (Price of one plate of Burger is 120)";
	cout<<"\n Quantity of noodles :";
	cin>>Qnoodle;
	cout<<" (Price of one plate of Noodle is 200)";
	cout<<"\n Quantity of shake :";
	cin>>Qshake;
	cout<<" (Price of one Shake is 120)";
	cout<<"\n Quantity of pizza :";
	cin>>Qpizza;
    cout<<" (Price of one plate of Pizza is 150)";
	m:
	cout<<"\n\t\t\t Please select from the menu options";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Pizza";
	cout<<"\n7) Information regarding sales and collections";
	cout<<"\n8) Exit";

	cout<<"\n\n Please Enter your choice!";
	cin>>choice;

	switch(choice)
	{

	    case 1:
	        cout<<"\n\n Enter the number of rooms you want:";

	        cin>>quant;
	        if(Qrooms-Srooms >=quant)
	        {
	            Srooms=Srooms+quant;
	            Total_rooms= Total_rooms+quant*1200;
	            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";

	        }
	        else

	          cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
	          break;


	      case 2:
	        cout<<"\n\n Enter Pasta quantity:";

	        cin>>quant;
	        if(Qpasta-Spasta >=quant)
	        {
	            Spasta=Spasta+quant;
	            Total_pasta= Total_pasta+quant*250;
	            cout<<"\n\n\t\t"<<quant<<"Pasta is order!";

	        }
	        else

	          cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
	          break;



			case 3:
	        cout<<"\n\n Enter Burger Quantity :";

	        cin>>quant;
	        if(Qburger-Sburger >=quant)
	        {
	            Sburger=Sburger+quant;
	            Total_burger= Total_burger+quant*120;
	            cout<<"\n\n\t\t"<<quant<<"Burger is order!";

	        }
	        else

	          cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
	          break;



			case 4:
	        cout<<"\n\n Enter Noodle Quantity :";

	        cin>>quant;
	        if(Qnoodle-Snoodle >=quant)
	        {
	            Snoodle=Snoodle+quant;
	            Total_noodle= Total_noodle+quant*200;
	            cout<<"\n\n\t\t"<<quant<<"Noodle is order!";

	        }
	        else

	          cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"Noodles remaining in hotel";
	          break;      


	       	case 5:
	        cout<<"\n\n Enter Shake Quantity :";

	        cin>>quant;
	        if(Qshake-Sshake >=quant)
	        {
	            Sshake=Sshake+quant;
	            Total_shake= Total_shake+quant*120;
	            cout<<"\n\n\t\t"<<quant<<"Shake is order!";

	        }
	        else

	          cout<<"\n\tOnly"<<Qshake-Sshake<<"Shakes remaining in hotel";
	          break;      



         	case 6:
	        cout<<"\n\n Enter Pizza Quantity :";

	        cin>>quant;
	        if(Qpizza-Spizza >=quant)
	        {
	            Spizza=Spizza+quant;
	            Total_pizza= Total_pizza+quant*150;
	            cout<<"\n\n\t\t"<<quant<<"Pizza is order!";

	        }
	        else

	          cout<<"\n\tOnly"<<Qpizza-Spizza<<"Pizza remaining in hotel";
	          break;      

	        case 7:

	        cout<<"\n\tDetails of sales and collection ";

			cout<<"\n\n Number of rooms we had: "<<Qrooms;
			cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
			cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
			cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;


	       	cout<<"\n\n Number of Pasta we had: "<<Qpasta;
			cout<<"\n\n Number of Pasta we sold: "<<Spasta;
			cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
			cout<<"\n\n Total Pasta collection for the day: "<<Total_pasta;


	       	cout<<"\n\n Number of Burger we had: "<<Qburger;
			cout<<"\n\n Number of Burger we sold: "<<Sburger;
			cout<<"\n\n Remaining Burgers : "<<Qburger-Sburger;
			cout<<"\n\n Total Burger collection for the day: "<<Total_burger;


	       	cout<<"\n\n Number of Noodles we had: "<<Qnoodle;
			cout<<"\n\n Number of Noodles we sold: "<<Snoodle;
			cout<<"\n\n Remaining Noodles : "<<Qnoodle-Snoodle;
			cout<<"\n\n Total Noodles collection for the day: "<<Total_noodle;


	        cout<<"\n\n Number of Shake we had: "<<Qshake;
			cout<<"\n\n Number of Shake we sold: "<<Sshake;
			cout<<"\n\n Remaining Shakes : "<<Qshake-Sshake;
			cout<<"\n\n Total Shake collection for the day: "<<Total_shake;


	        cout<<"\n\n Number of Pizza we had: "<<Qpizza;
			cout<<"\n\n Number of Pizza we sold: "<<Spizza;
			cout<<"\n\n Remaining Pizzas : "<<Qpizza-Spizza;
			cout<<"\n\n Total Pizza collection for the day: "<<Total_pizza;

			cout<<"\n\n\n Total collection for the day : "<<Total_rooms+Total_pasta+Total_burger+Total_noodle+Total_shake+Total_pizza;
	        break;

	        case 8:
	        	exit(0);

	        	default:
	        		cout<<"\n Please select the numbers mentioned above!";
}
	  goto m;      		
}