# include<iostream >
# include<iostream>
using namespace std;
class student {
int roll;
char name[50];
float marks; public;
  void input (){cout<<"RollNo!"; cin>> roll;
cout<<"Name:";cin: ignore ();cin getline (Name,50);
cout<<"marks:;cin>> marks;}
void show(){ cout<<"\nRoll;"<<roll<<"in Name:"<<Name<<"in mark:"<< marks <<"in";}
int main (){student.5; intch; do3
cout<<"/n1.Add student 2.Display All
3.Exit/n choice:"; cin>> ch;
if(ch==1){ afsreamf(" data.dat";ios ::app iios:: binary; s.input();
F.wirit((char*)&s, size (s))f.close()
cout<<"Record saved successfully!/n",}
else if stream f("data.dat",ios::binar);
while (f.read((char*)&s, size of (s))
s.show();f.close();}
while(ch!=3);
return 0;}