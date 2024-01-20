#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char name[30], pizza1[] = "Farm House", pizza2[] = "Cheeze and Corn", pizza3[] = "Margheritta Pizza", pizza4[] = "Cheese Pizza";
    char sand1[] = "Club Sandwich", sand2[] = "Paneer Sandwich", sand3[] = "Veg Sandwich";
    char bir1[] = "Veg Biryani", bir2[] = "Paneer Biryani", bir3[] = "Hyderabadi Biryani";
    char roll1[] = "Cheese roll", roll2[] = "Spring roll", roll3[] = "Paneer roll";
    char bur1[] = "Veggie Burger", bur2[] = "Cheese Burger", bur3[] = "Paneer Burger";
    int choice = 0, pchoice, pchoice1, quantity; // time=40;
    char gotostart;

beginning:
    system("CLS");
    cout << "\t\t\t----------Fast Food Corner----------\n\n";
    cout << "Please enter your name: ";
    cin.getline(name, 20);
    cout << "Hello " << name << "\n\nWhat would you like to order?\n\n";
    cout << "\t\t\t----------Menu----------\n\n";

    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n";
    cout << "\nPlease Enter your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n1)" << pizza1 << "\n";
        cout << "\n2)" << pizza2 << "\n";
        cout << "\n3)" << pizza3 << "\n";
        cout << "\n4)" << pizza4 << "\n";
        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice;

        if (pchoice >= 1 && pchoice <= 3)
        {
            cout << "\n1) Small Rs.250\n"
                 << "2) Regular Rs.500\n"
                 << "3) Large Rs.900\n";
            cout << "\nChoose Size Please: ";
            cin >> pchoice1;

            if (pchoice1 >= 1 && pchoice <= 3)
                cout << "\nPlease Enter Quantity: ";
            cin >> quantity;

            switch (pchoice1)
            {
            case 1:
                choice = 250 * quantity;
                break;

            case 2:
                choice = 500 * quantity;
                break;

            case 3:
                choice = 900 * quantity;
                break;
            }
            system("CLS");

            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << pizza1;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 2:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << pizza2;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 3:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << pizza3;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 4:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << pizza4;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y/N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
            }
        }
    }

    else if (choice == 2)
    {
        cout << "\n1 " << bur1 << " Rs.180"
             << "\n";
        cout << "2 " << bur2 << " Rs.150"
             << "\n";
        cout << "3 " << bur3 << " Rs.160"
             << "\n";

        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice1;

        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;

            switch (pchoice1)
            {
            case 1:
                choice = 180 * quantity;
                break;

            case 2:
                choice = 150 * quantity;
                break;

            case 3:
                choice = 160 * quantity;
                break;
            }
            system("CLS");

            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bur1;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 2:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bur2;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 3:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bur3;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y/N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
            }
        }
    }
    else if (choice == 3)
    {
        cout << "\n1 " << sand1 << " Rs.210"
             << "\n";
        cout << "2 " << sand2 << " Rs.160"
             << "\n";
        cout << "3 " << sand3 << " Rs.100"
             << "\n";

        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice1;

        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;

            switch (pchoice1)
            {
            case 1:
                choice = 210 * quantity;
                break;

            case 2:
                choice = 160 * quantity;
                break;

            case 3:
                choice = 100 * quantity;
                break;
            }
            system("CLS");

            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << sand1;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 2:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << sand2;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 3:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << sand3;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y/N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
            }
        }
    }
    else if (choice == 4)
    {
        cout << "\n1 " << roll1 << " Rs.150"
             << "\n";
        cout << "2 " << roll2 << " Rs.120"
             << "\n";
        cout << "3 " << roll3 << " Rs.100"
             << "\n";

        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice1;

        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nHow many rolls do you want: ";
            cin >> quantity;

            switch (pchoice1)
            {
            case 1:
                choice = 150 * quantity;
                break;

            case 2:
                choice = 120 * quantity;
                break;

            case 3:
                choice = 100 * quantity;
                break;
            }
            system("CLS");

            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << roll1;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 2:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << roll2;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 3:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << roll3;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y/N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
            }
        }
    }
    else if (choice == 5)
    {
        cout << "\n1 " << bir1 << " Rs.160"
             << "\n";
        cout << "2 " << bir2 << " Rs.190"
             << "\n";
        cout << "3 " << bir3 << " Rs.250"
             << "\n";

        cout << "\nPlease Enter which Flavour would you like to have?:";
        cin >> pchoice1;

        if (pchoice1 >= 1 && pchoice1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;

            switch (pchoice1)
            {
            case 1:
                choice = 160 * quantity;
                break;

            case 2:
                choice = 190 * quantity;
                break;

            case 3:
                choice = 250 * quantity;
                break;
            }
            system("CLS");

            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bir1;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 2:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bir2;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;

            case 3:
                cout << "\t\t\t----------Your Order----------\n\n";
                cout << "" << quantity << " " << bir3;
                cout << "\nYour Total Bill is " << choice << "\nYour order will be delivered in 40 minutes";
                cout << "\n\nThank you for ordering from Fast food Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y/N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
            }
        }
    }
    else
    {
        system("CLS");
        cout << "Please select Right Option: \n";
        cout << "Would you like to start the program again? Y / N: ";
        if (gotostart == 'Y' || gotostart == 'y')
        {
            goto beginning;
        }
    }

    getch();
}