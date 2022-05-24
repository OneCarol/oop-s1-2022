#include <iostream>
#include <string>
#include <fstream>
#include "globalFile.h"
#include "identity.h"
#include "general.h"
#include "student.h"
#include "manager.h"
#include <vector>

using namespace std;

int General::ticket = 1000;
int Student::student_ticket = 1000;

void managerMenu(Identity * &manager)
{
    while (true)
    {
        //admin menu
        manager->operation_menu();

        Manager* man = (Manager*)manager;
        int select = 0;

        cin >> select;

        if (select == 1)  //add users
            {
            cout << "add user" << endl;
            man->add_user();
            }
        else if (select == 2) //check tickets
            {
            cout << "view ticket" << endl;
            man->show_ticket();
            }
        else
        {
            delete manager;
            cout << "log out" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}

void studentMenu(Identity * &student)
{
    while (true)
    {
        //show menu of student
        student->operation_menu();

        Student* new_student = (Student*)student;
        int select = 0;

        cin >> select;

        if (select == 1) //appliction for reservation
            {
            new_student->apply_order();
            }
        else if (select == 2) //check reservation
            {
            new_student->show_order();
            }
        else if (select == 3) //cancel reservation
            {
            new_student->cancel_order();
            }
        else
        {
            delete student;
            cout << "log out!" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}

void generalMenu(Identity * &general)
{
    while (true)
    {

        general->operation_menu();

        General* gen = (General*)general;
        int select = 0;

        cin >> select;

        if (select == 1) //application for reservation
            {
            gen->apply_order();
            }
        else if (select == 2) //check reservation
            {
            gen->show_order();
            }
        else if (select == 3) //cancel reservation
            {
            gen->cancel_order();
            }
        else
        {
            delete general;
            cout << "log out!" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}


//sub-menu
void Child_Menu(int type, string file_name)
{
    ifstream file_stream;
    file_stream.open(file_name,ios::in);
    Identity * user = NULL;

    if (!file_stream.is_open())
    {
        cout << "The file is not exist" << endl;
        file_stream.close();
        return;
    }

    int id = -1;
    string name;
    string password;


    cout << "please enter the name" << endl;
    cin >> name;

    cout << "please enter the password" << endl;
    cin >> password;


    if (type == 1)
    {
        int input_id;
        string input_name;
        string input_password;

        while(file_stream>>input_name && file_stream>>input_password){
            if (name == input_name && password == input_password){
                cout<< "Student user login successfully!"<<endl;
                system("pause");
                system("cls");
                user = new Student(name, password);
                studentMenu(user);
                return;
            }
        }

    }
    else if (type == 2)
    {
        int input_id;
        string input_name;
        string input_password;

        while(file_stream>>input_name && file_stream>>input_password){
            if (name == input_name && password == input_password){
                cout<< "General user login successfully!"<<endl;
                system("pause");
                system("cls");
                user = new General(name, password);
                generalMenu(user);
                return;
            }
        }
    }
    else if(type == 3)
    {
        int input_id;
        string input_name;
        string input_password;

        while(file_stream>>input_name && file_stream>>input_password){
            if (name == input_name && password == input_password){
                cout<< "Admin login successfully!"<<endl;
                system("pause");
                system("cls");
                user = new Manager(name, password);
                managerMenu(user);
                return;
            }
        }
    }

    cout << "failure!" << endl;
    system("pause");
    system("cls");
    return;
}


//main function 
int main() {
    vector<Student> students[1000];
    vector<General> generals[1000];
    Manager manager;

    int choice = 0;

//show the main menu
    while (true)
    {

        cout << "======================  welcome to the system  =====================" << endl;
        cout << endl << "please input your identity:" << endl;

        cout << "|                              |\n";
        cout << "|         1. Student           |\n";
        cout << "|                              |\n";
        cout << "|         2. General           |\n";
        cout << "|                              |\n";
        cout << "|         3. Admin             |\n";
        cout << "|                              |\n";
        cout << "|         0. Return            |\n";

        cout << "your choice is :";

        cin >> choice; //store the choice from users

        switch (choice)
        {
            case 1:  
                Child_Menu(1,"student.txt");
            break;
            case 2:  
                Child_Menu(2,"general.txt");
            break;
            case 3:  
                Child_Menu(3,"admin.txt");
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