#pragma once
#include<iostream>
using namespace std;
#include "ticket.h"
#include "general.h"

//child tickets
class child :public general
        {
        public:
            //default constructor
            child();

            //parameter(name,ID,password)
            child(string name; int ID);


            //check reservation
            void show_order();

           //cancel reservation
            void cancel_ticket();


        };