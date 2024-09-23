//// write program that print following if user puts in 5:
//*
//**
//***
//**** 
//*****

#include <iostream>
using namespace std;

int main()
{
    int user_num = 5;
    for (int i = 0; i < user_num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;

    }
   
}

