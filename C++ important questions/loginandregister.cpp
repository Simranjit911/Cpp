#include<bits/stdc++.h>
using namespace std;
void login();
void registration();
// void forget();
int main(){
    int c;
    cout<<"Welcome ";
    cout<<"Menu";
    cout<<"Press 1 login\n"<<"Press 2 to register\n"<<"Press 3 if forget ur password\n"<<"Press 4 to exit\n";
    cin>>c;
    switch (c)
    {
    case 1:
       login();
       break;
    
    case 2:
      registration();
      break;

    case 3:
    //    forget();
    cout<<"hi";
        break;

    case 4:
       cout<<"Thankyou";
       break;

    default:
      system("cls");
      cout<<"Select ferom the given functions";
      main();
    }
}
void login(){
    int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"Enter username:";
    cin>>userid;
    cout<<"Enter password:";
    cin>>password;

    ifstream input("record.txt");

    while(input>>id>>pass){
        if(id==userid && pass==password){
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout<<userid<<" You logged in succesfully";
        main();
    }
    else{
        cout<<"Ur not register";
        main();
    }

}
void registration(){
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"Enter username:";
    cin>>ruserid;
    cout<<"Enter password:";
    cin>>rpassword;
     
     ofstream f1("record.txt",ios::app);
     f1<<ruserid<<" "<<rpassword<<endl;
     system("cls");
     cout<<"Registration succesfull";
     main();

}
// void forget();