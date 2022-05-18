#pragma once
#include<iostream>
using namespace std;
#include "human.h"

class manager :public human
        {
        public:

            //class name
            manager();

            //parameter
            manager(int ID, string name);


            //check account
            void show_all_order();


            //clean reservation
            void cleanFile();

        };