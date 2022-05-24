#pragma once
#include<iostream>
using namespace std;
#include "identity.h"

class Manager :public Identity
        {
        public:

            //default constructor
            Manager();

            //constructor with parameters
            Manager(string name, string password);

            //show tickets
            void show_ticket();
            
            //add u
            void add_user();

            //check username
            virtual void operation_menu();

        };