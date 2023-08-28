#include<iostream>
using namespace std;

int main()
{
    // Hollow reactragle
    // int rowCount,colCount;

    // cin>>rowCount>>colCount;

    // for(int row=0; row<rowCount;row++)
    // {
    //     if(row == 0 || row == rowCount-1 )
    //     {
    //         // Print all stars
    //         for(int col=0; col<colCount; col++)
    //         {
    //             cout<<"* ";
    //         }
    //     }
    //     else
    //     {
    //         cout<<"* ";
    //         for(int col=0; col<colCount-2; col++)
    //         {
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // half pyramid

    int n;
    cin>>n;


    // for(int row=0;row <n;row++)
    // {
    //     for(int col=0; col < row+1; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // inverted half pyramid

    // for(int row=0; row<n;row++)
    // {
    //     for(int col=n; col >row; col--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Nuemric half pyramid

    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row+1; col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}