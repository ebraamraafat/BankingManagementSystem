#include <iostream>
using namespace std;
const int n=100;
struct BMS
{
    string name;
    int ID;
    int balance;
    int pass;



};
int xpass;
bool a;
int main()
{
    int x;//switch 1
    int t;//switch 2
    int e;//switch 3
    int c;//switch 4
    string newName;
    int newID;
    int newBalance;
    int newPass;
    string searchedName;
    int hispassword;
    int deposite = 0;
    int withdraw = 0;




    BMS ob1[n];
    do
    {
        cout<<"***HELLO TO OUR BANKING MANEGMENT SYSTEM***"<<endl<<endl;
        cout<<"press 1 to add accounts"<<endl;
        cout<<"press 2 to update account details"<<endl;
        cout<<"press 3 to display account details"<<endl;
        cout<<"press 4 to transaction"<<endl;
        cout<<"press 5 to display all accounts details"<<endl;
        cout<<"press 6 to EXIT"<<endl;
        cin>>x;
        switch (x)
        {
            case 1:
            for(int i = 0; i<n; i++)
            {
                cout<<"please enter your name"<<endl;
                cin>>ob1[i].name;
                cout<<"please enter your ID Card"<<endl;
                cin>>ob1[i].ID;
                cout<<"please enter your balance"<<endl;
                cin>>ob1[i].balance;
                cout<<"please enter your password"<<endl;
                cin>>ob1[i].pass;
                cout<<endl<<"do you want to continue adding accounts? 1 FOR YES 0 FOR NO"<<endl;
                cin>>a;
                if (a==false)
                {
                    break;
                }

            }
            break;
            case 2:
            cout<<"Enter your account name"<<endl;
            cin>>searchedName;
            for(int j = 0; j<n; j++)
            {
                if(searchedName!= ob1[j].name)
                {
                cout<<"THE ACCOUNT NAME IS WRONG"<<endl;
                }
                else if(searchedName== ob1[j].name)
                {
                    cout<<"enter your password"<<endl;
                    cin>>hispassword;
                    if (ob1[j].pass == hispassword)
                    {    
                        cout<<"Edit \n 1:name \n 2:ID \n 3:balance \n 4:password \n";
                        cin>>t;
                        switch (t)
                        {
                            case 1:
                            cout<<"your current name is "<<ob1[j].name<<endl;
                            cout<<"please add your new name"<<endl;
                            cin>>newName;
                            ob1[j].name=newName;
                            cout<<"your new name is "<<ob1[j].name<<endl;
                            break;
                            case 2:
                            cout<<"your current id is "<<ob1[j].ID<<endl;
                            cout<<"please add your new ID"<<endl;
                            cin>>newID;
                            ob1[j].ID=newID;
                            cout<<"your new name is "<<ob1[j].ID<<endl; 
                            break;
                            case 3:
                            cout<<"your current balance is "<<ob1[j].balance<<endl;
                            cout<<"please add your new balance"<<endl;
                            cin>>newBalance;
                            ob1[j].balance=newBalance;
                            cout<<"your new name is "<<ob1[j].balance<<endl; 
                            break;
                            case 4:
                            cout<<"your current password is "<<ob1[j].pass<<endl;
                            cout<<"please add your new password"<<endl;
                            cin>>newPass;
                            ob1[j].pass=newPass;
                            cout<<"your new name is "<<ob1[j].pass<<endl; 
                            break;
                        }
                    }
                }
                break;

            }   
            break;
            case 3:
            cout<<"Enter your account name"<<endl;
            cin>>searchedName;
            for(int q = 0; q<n; q++)
            {
                if(searchedName== ob1[q].name)
                {
                cout<<"enter your password"<<endl;
                cin>>hispassword;
                if (ob1[q].pass == hispassword)
                {
                    cout<<"********** YOUR DATA **********"<<endl;;
                    cout<<"your name is "<<ob1[q].name<<endl;
                    cout<<"your ID is "<<ob1[q].ID<<endl;
                    cout<<"your balance is "<<ob1[q].balance<<endl;
                    cout<<"your password is "<<ob1[q].pass<<endl; 
                }
                }
                else if(searchedName!= ob1[q].name)
                {
                    
                    cout<<"THE ACCOUNT NAME IS WRONG"<<endl;
                }
                break;
            }
            break;
            case 4:
            cout<<"Enter your account name"<<endl;
            cin>>searchedName;
            for(int q = 0; q<n; q++)
            {
                if(searchedName!= ob1[q].name)
                {
                cout<<"THE ACCOUNT NAME IS WRONG"<<endl;
                }
                else if(searchedName== ob1[q].name)
                { 
                    cout<<"enter your password"<<endl;
                    cin>>hispassword;
                    if (ob1[q].pass == hispassword)
                    {

                        cout<<"***menu***"<<endl;
                        
                        cout<<"1:deposite"<<endl;
                        cout<<"2:withdraw"<<endl;
                        
                        cin>>c;
                        switch (c)
                        {
                            case 1:
                            ob1[q].balance=ob1[q].balance + deposite;
                            case 2:
                            ob1[q].balance=ob1[q].balance - withdraw;

                        }
                    }
                }

            }
            break;
            case 5:
            for(int z = 0; z<n; z++)
            {
                cout<<"***ALL ACCOUNTS IN THE SYSTEM***"<<endl;
                cout<<"your name is "<<ob1[z].name<<endl;
                cout<<"your ID is "<<ob1[z].ID<<endl;
                cout<<"your balance is "<<ob1[z].balance<<endl;
                cout<<"your password is "<<ob1[z].pass<<endl;
            }
            break;
            case 6:
            cout<<"EXINTING..."<<endl;
            break;
        }

    }while(x!=6);
    
}