#include<iostream>
using namespace std;
class stu{
    public:
    string name;
    int rol;
    string clas;

    void print(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Roll is:"<<rol<<endl;
        cout<<"Class is:"<<clas<<endl;
    }
};
int main(){
    stu ram={"Ram",22,"Bca"};
    ram.print();
    cout<<endl;

    stu sam={"Simran",22,"BCA"};
    sam.print();    
    cout<<endl;

    stu aman={"Aman",15,"9th"};
    aman.print();
    cout<<endl;

    stu eg={"Example",20,"Idk"};
    eg.print();
    cout<<endl;

    return 0;
}