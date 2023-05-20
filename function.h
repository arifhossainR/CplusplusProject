#include<iostream>
using namespace std;

void print(char arr[3][3])
{
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"  "<<arr[i][j];
            if(j<=1){
                cout<<"  |";
            }
        }
        if(i<=1){
            cout<<endl<<"  __    __    __  "<<endl;
        }
    }
    cout<<endl<<endl;
}

void arrayFill(int position, char ar[3][3], char symbol)
{
    switch (position)
    {
    case 1:
        ar[0][0] = symbol;
        break;
    case 2:
        ar[0][1] = symbol;
        break;
    case 3:
        ar[0][2] = symbol;
        break;
    case 4:
        ar[1][0] = symbol;
        break;
    case 5:
        ar[1][1] = symbol;
        break;
    case 6:
        ar[1][2] = symbol;
        break;
    case 7:
        ar[2][0] = symbol;
        break;
    case 8:
        ar[2][1] = symbol;
        break;
    case 9:
        ar[2][2] = symbol;
        break;
    
    default:
        cout<<"Your choose position is wrong";
        break;
    }
}

char check(char ar[3][3], char symbol)
{
    char res;
    if( (ar[0][0] == symbol) && (ar[0][1] == symbol) && (ar[0][2]==symbol) ){
        res = symbol;
    }else if( (ar[1][0] == symbol) && (ar[1][1] == symbol) && (ar[1][2]==symbol) ){
        res = symbol;
    }else if( (ar[2][0] == symbol) && (ar[2][1] == symbol) && (ar[2][2]==symbol) ){
        res = symbol;
    }else if( (ar[0][0] == symbol) && (ar[1][0] == symbol) && (ar[2][0]==symbol) ){
        res = symbol;
    }else if( (ar[0][1] == symbol) && (ar[1][1] == symbol) && (ar[2][1]==symbol) ){
        res = symbol;
    }else if( (ar[0][2] == symbol) && (ar[1][2] == symbol) && (ar[2][2]==symbol) ){
        res = symbol;
    }else if( (ar[0][0] == symbol) && (ar[1][1] == symbol) && (ar[2][2]==symbol) ){
        res = symbol;
    }else if( (ar[0][2] == symbol) && (ar[1][1] == symbol) && (ar[2][0]==symbol) ){
        res = symbol;
    }
    return res;
}