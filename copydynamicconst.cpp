#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
class Mystring
{
    char *name;
    int length;
    public:
    Mystring():length(0)
    { 
        name=new char[length+1];
    }
    Mystring (char* s)
    {
        length=strlen(s); 
        name = new char[length+1];
        strcpy(name,s);
    }
    Mystring(Mystring &t)
    {
        length=t.length; 
        name=new char[length+1]; 
        strcpy(name,t.name);
    }
    void display()
    {
        cout<<"Name = "<<name<<endl; cout<<"Length= "<<length<<endl;
    }
    void join(Mystring &objSurname, Mystring &objName)
    {
        this->length=objSurname.length+objName.length;
        delete name;
        name=new char[length+1];
        strcpy(name,objSurname.name); strcat(name, objName.name); 
    }
};

int main()
{
    char *t =" University";
    Mystring firstname("GITAM"), secondname(t), myname;
    myname.join(firstname, secondname);
    cout<<"Details from myname obj"<<endl;
    myname.display();
    Mystring objDuplicate(myname);
    cout<<endl;
    cout<<"Details of objDuplicate"<<endl;
    objDuplicate.display(); 
    return 0;
}
