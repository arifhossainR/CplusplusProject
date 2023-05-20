#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// custom header file for function
#include "function.h"


int main()
{
    // declaration part
    string player[2];
    char ar[3][3];
    char symbol[2];
    int position;
    bool draw=false;

    // first player name
    cout<<"Enter first player name: ";
    getline(cin, player[0]);

    // second player name
    cout<<"Enter second player name: ";
    getline(cin, player[1]);

    // first player's game symbol
    cout<<player[0]<<"'s game symbol: ";
    cin>>symbol[0];

    // second player's game symbol
    cout<<player[1]<<"'s game symbol: ";
    cin>>symbol[1];

    // initialization
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            ar[i][j] = ' ';
        }
    }
    

    // A loop to take input data from user
    cout<<"N.B: Position will must be 1-9"<<endl<<endl;
    for(int i=1; i<=8; i++)
    {
        if(i%2==1){
            cout<<player[0]<<"'s turn:  ";
            cout<<"choose position: ";
            cin>>position;
            arrayFill(position, ar, symbol[0]);
            print(ar);
            if(check(ar, symbol[0])==symbol[0]){
                cout<<player[0]<<" is Winner!!!"<<endl;
                draw = true;
                break;
            }
        }else{
            cout<<player[1]<<"'s turn:  ";
            cout<<"choose position: ";
            cin>>position;
            arrayFill(position, ar, symbol[1]);
            print(ar);
            if(check(ar, symbol[1])==symbol[1]){
                cout<<player[1]<<" is Winner!!!"<<endl;
                draw = true;
                break;
            }
        }
    }

    cout<<endl;
    if(draw==false){
        cout<<"Match is draw!!!"<<endl;
    }
    cout<<endl<<endl;
    
    return 0;
}