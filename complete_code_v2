//  Name: John Gazzara
//  HW Week of 11/13
//  I pledge my honor that I have abided by the Stevens Honor System. -John Gazzara
//  This program runs on Mac.

#include <iostream>
using namespace std;

float payment;
float cost = 1.25;
float cokeInventory = 20;
float spriteInventory = 20;
float waterInventory = 20;


void dispenseCoke()
{
    cout << " " << endl;
    cout << " " << endl;
    cout << "Coke is $1.25" << endl;
    cout << "There are " << cokeInventory << " Coke cans left" << endl;
    cout << "Enter your payment:" << endl;
    cin >> payment;
    if(cokeInventory == 0)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Out of coke!" << endl;
        cout << "Returning your chenge: $" << payment << endl;
    }
    else if(payment == 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        cokeInventory --;
    }
    else if(payment < 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Need more money!" << endl;
    }
    else
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        cout << "Your change is: $" << payment-cost << endl;
        cokeInventory --;
    }
}


void dispenseSprite()
{
    cout << " " << endl;
    cout << " " << endl;
    cout << "Sprite is $1.25" << endl;
    cout << "There are " << spriteInventory << " Sprite cans left" << endl;
    cout << "Enter your payment:" << endl;
    cin >> payment;
    if(spriteInventory == 0)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Out of water!" << endl;
        cout << "Returning your chenge: $" << payment << endl;
    }
    else if(payment == 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        spriteInventory --;
    }
    else if(payment < 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Need more money!" << endl;
    }
    else
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        cout << "Your change is: $" << payment-cost << endl;
        spriteInventory --;
    }
}

void dispenseWater()
{
    cout << " " << endl;
    cout << " " << endl;
    cout << "Water is $1.25" << endl;
    cout << "There are " << waterInventory << " Water bottles left" << endl;
    cout << "Enter your payment:" << endl;
    cin >> payment;
    if(waterInventory == 0)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Out of water!" << endl;
        cout << "Returning your chenge: $" << payment << endl;
    }
    else if(payment == 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        waterInventory --;
    }
    else if(payment < 1.25)
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Need more money!" << endl;
    }
    else
    {
        cout << " " << endl;
        cout << " " << endl;
        cout << "Enjoy!" << endl;
        cout << "Your change is: $" << payment-cost << endl;
        waterInventory --;
    }
    
}

int main()
{
    while(1)
    {
        int choice;
        
        cout << " " << endl;
        cout << "Enter 1 for Coke" << endl;
        cout << "Enter 2 for Sprite" << endl;
        cout << "Enter 3 for Water" << endl;
        cout << "Anything else to quit" << endl;
        cin >> choice;
        
        switch(choice)
        {
            case 1 : dispenseCoke();
                break;
                
            case 2 : dispenseSprite();
                break;
                
            case 3 : dispenseWater();
                break;
                
            default : exit(1);
        }
        
    }
    
}
