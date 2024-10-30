#include<iostream>
using namespace std;

int main() {
     
  int quant; //variable to store quantity input from the user
  int choice; //variable to store menu choice from the user

  // Initial Quantity of items available
  int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
  // Initial quantities of items sold
  int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
  // Total revenue generated from items
  int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;


  // Input the initial quantities of items available
  cout << "Quantity of items we have" << endl;
  cout << "\n Rooms Available: ";
  cin >> Qrooms;
  cout << "\n Quantity of pasta: ";
  cin >> Qpasta;
  cout << "\n Quantity of burger: ";
  cin >> Qburger;
  cout << "\n Quantity of noodles: ";
  cin >> Qnoodles;
  cout << "\n Quantity of shake: ";
  cin >> Qshake;
  cout << "\n Quantity of chickenRolls: ";
  cin >> Qchicken;

  //Infinite loop to display menu and user's choice 
  while(true) {
    //Display menu option
  cout << "\n Please select from the menu option: \n";
  cout << "1) Rooms\n";
  cout << "2) Pasta\n";
  cout << "3) Burger\n";
  cout << "4) Noodles\n";
  cout << "5) Shake\n";
  cout << "6) Chicken Roll\n";
  cout << "7) Information regarding sales and collection\n";
  cout << "8) Exit\n";

 //Get's user choice
  cout<<"Enter your choice: ";
  cin>>choice;

  switch(choice) 
  {
    case 1:
    //Process Room order
    cout<<"\n Enter the numbers of rooms you want: ";
    cin>>quant;

    if(Qrooms - Srooms >= quant){
        Srooms += quant;
        Total_rooms += (quant*2000);
        cout<<"\n"<<quant<< " room/rooms have been alloted";
    } else {
        cout<<"\nOnly "<<Qrooms-Srooms<<" room/rooms remaining in hotel";
    }
    break;
  

  case 2:
  //Process pasta order
        cout << "\n Enter the pasta quantity: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant) {
          Spasta += quant;
          Total_pasta += (quant * 100);
          cout << "\n" << quant << " pasta is the order";
        } else {
          cout << "\nOnly " << Qpasta - Spasta << " pasta remaining in hotel";
        }
        break;

  case 3:
  //Process Burger order
        cout << "\n Enter the burger quantity: ";
        cin >> quant;
        if (Qburger - Sburger >= quant) {
          Sburger += quant;
          Total_burger += (quant * 200);
          cout << "\n" << quant << " burger is the order";
        } else {
          cout << "\nOnly " << Qburger - Sburger << " burger remaining in hotel";
        }
        break;

    case 4:
    //Process noodles order
        cout << "\n Enter the noodles quantity: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant) {
          Snoodles += quant;
          Total_noodles += (quant * 300);
          cout << "\n" << quant << " noodles is the order!";
        } else {
          cout << "\nOnly " << Qnoodles - Snoodles << " noodles remaining in hotel";
        }
        break;

    case 5:
    //Process shake order
        cout << "\n Enter the shake quantity: ";
        cin >> quant;
        if (Qshake - Sshake >= quant) {
          Sshake += quant;
          Total_shake += (quant * 400);
          cout << "\n" << quant << " shake is the order!";
        } else {
          cout << "\nOnly " << Qshake - Sshake << " shake remaining in hotel";
        }
        break;

    case 6:
    //Process chicken Roll order
        cout << "\n Enter the chickenRoll quantity: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant) {
          Schicken += quant;
          Total_chicken += (quant * 500);
          cout << "\n" << quant << " chickenRoll is the order!";
        } else {
          cout << "\nOnly " << Qchicken - Schicken << " chickenRoll remaining in hotel";
        }
        break;

        case 7:
        //Display sales and collection Information
        cout << "\n Details of sales and collection";
        cout << "\n Number of rooms we had: " << Qrooms;
        cout << "\n Number of rooms we gave for rent: " << Srooms;
        cout << "\n Remaining rooms: " << Qrooms - Srooms;
        cout << "\n Total rooms collection for the day: " << Total_rooms<<endl;

        cout << "\n Number of pasta we had: " << Qpasta;
        cout << "\n Number of pasta we sold: " << Spasta;
        cout << "\n Remaining pastas: " << Qpasta - Spasta;
        cout << "\n Total collection of pasta: " << Total_pasta<<endl;

        cout << "\n Number of burger we had: " << Qburger;
        cout << "\n Number of burger we sold: " << Sburger;
        cout << "\n Remaining burgers: " << Qburger - Sburger;
        cout << "\n Total collection of burger: " << Total_burger<<endl;

        cout << "\n Number of noodles we had: " << Qnoodles;
        cout << "\n Number of noodles we sold: " << Snoodles;
        cout << "\n Remaining noodles: " << Qnoodles - Snoodles;
        cout << "\n Total collection of noodles: " << Total_noodles<<endl;

        cout << "\n Number of shake we had: " << Qshake;
        cout << "\n Number of shake we sold: " << Sshake;
        cout << "\n Remaining shakes: " << Qshake - Sshake;
        cout << "\n Total collection from shake: " << Total_shake<<endl;

        cout << "\n Number of chickenRoll we had: " << Qchicken;
        cout << "\n Number of chickenRoll we sold: " << Schicken;
        cout << "\n Remaining chickenRoll: " << Qchicken - Schicken;
        cout << "\n Total collection from chickenRoll: " << Total_chicken;
        break;

        case 8:
        //Exit the program
        exit(0);

        default:
        //Handle invalid menu choice
        cout << "\n Please enter the correct choice mentioned in the menu";
    }
  }

}