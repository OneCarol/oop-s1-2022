#include <iostream>
#include <string>
#include <fstream>
#include "human.h"
#include "general.h"
#include "student.h"
#include "manager.h"
#include "visitor.h"
#include "ticket.h"
#include <vector>

using namespace std;

int general::global_order = 1;

//creat an account
void Child_Menu(int type)
{

    if (type == 1)
    {

    }
    else if (type == 2)
    {

    }
    else if(type == 3)
    {

    }

    cout << "failure!" << endl;
    system("pause");
    system("cls");
    return;
}

int main() {
    vector<child> child[1000];
    vector<general> general[1000];
    Manager manager;

    int choice = 0;

    while (true)
    {

        cout << "======================  welcome to the system  =====================" << endl;
        cout << endl << "please input your identity:" << endl;

        cout << "|                              |\n";
        cout << "|         1.add child            |\n";
        cout << "|                              |\n";
        cout << "|         2.add general            |\n";
        cout << "|                              |\n";
        cout << "|         3.check order      |\n";
        cout << "|                              |\n";
        cout << "|         0.return             |\n";

        cout << "your choice is :";

        cin >> choice; 

        switch (choice)
        {
            case 1:  
                Child_Menu(1);
            break;
            case 2:  
                Child_Menu(2);
            break;
            case 3:  
                Child_Menu(3);
            break;
            case 0:  
            cout << "welcome to system next time"<<endl;
            system("pause");
            return 0;
            break;
            default:
                cout << "Wrong input!" << endl;
                system("pause");
                system("cls");
                break;
        }

    }
    system("pause");
    return 0;
}