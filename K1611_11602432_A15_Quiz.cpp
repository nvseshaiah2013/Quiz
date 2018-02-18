#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
inline void gotoxy(int x,int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
 char timer()
{
    char ansopt='d';
int i;
    for(i=10;i>=0;i--)
    {
        if(kbhit()){
            ansopt=getch();
            return ansopt;
        }
        if(i!=10)
        cout<<"Remaining Time is 0"<<i<<"\r";
        if(i==10)
cout<<"Remaining Time is "<<i<<"\r";
if(i==0)
            return i;
            Sleep(1000);
    }
    return ansopt;
}
inline void inst()
    {
        system("cls");
        system("color 09");
    cout<<"General Instructions :Read Carefully   :\n";
    cout<<"--------------------------------------------------------------------------\n";
    cout<<"1. You 'll get 10 sec to attempt each Questions>>>\n";
    cout<<"2. Each question has 3 options namely (a,b,c)>>>\n3. choosing any other option other than (a,b,c)\n will give you 0 in that Q saying Invalid opt>>>\n";
    cout<<"4. There is negative marking of 0.25 on wrong answers and you'll get 1 mark on  right answers>>>\n";
    cout<<"5. IMPORTANT : THE OPTIONS ARE (a,b,c) ONLY (THEY ARE CASE SENSITIVE)\n";
    cout<<"--------------------------------------------------------------------------\n";
    cout<<"BEST OF LUCK\n";
    cout<<"Ready To Go>>>>\nPress Enter to Continue...>>>>>>>>>>\n";
    getch();system("cls");
    }
class Quiz
{
    char q[4][100],ans;
public:
    void TEST(string test)
    {
        inst();
       float score=0;
       fstream out;
       out.open(test.c_str(),ios::binary|ios::in);
       if(!out)
       {
           cerr<<"Sorry for the Trouble";
           exit(0);
       }
       while(out.read((char*)this,sizeof(*this)))
        {
       cout<<"Q. "<<q[0]<<endl<<"a. "<<q[1]<<endl<<"b. "<<q[2]<<endl<<"c. "<<q[3]<<endl;
       char javab=timer();
       if(javab==ans)
       {
           cout<<"\nCorrect\n";
           score+=1;
       }
       else if(javab==0)
       {
           cout<<"\nTime Up\n";
       }
       else if(!(javab==0 || javab==97 ||javab==98 ||javab==99))
                cout<<"\nInvalid\n";
            else{
                cout<<"\nWrong\n";
                score-=0.25;
            }
       }
       out.close();
       cout<<"YOUR SCORE : "<<score;
       getch();
    }
  }obj;

#define MAX 50
class CreateTest
{
int e;
public:
    void attest()
    {
struct testtitle
{
    string ti;
    int ini;
}_test[MAX];
int ba;
        system("cls");
        cout<<"Available Tests: \n";
        fstream outputdir;
        outputdir.open("TestList.txt",ios::in);
        if(!outputdir)
        {
            cerr<<"Still No Tests Are Created...Please create One...\n";
            exit(0);
        }
        int i=0,inpt;
        cout<<"Name    "<<"No.Of Ques   "<<"Press"<<endl;
        while(!outputdir.eof())
        {
            outputdir>>_test[i].ti>>_test[i].ini;
             if(outputdir.eof()){
                    ba=i;
                break;
             }
            cout<<_test[i].ti<<"         "<<_test[i].ini<<"      ["<<i+1<<"]"<<endl;
            i++;
        }
        outputdir.close();
      ja:  cout<<"Choose To Attempt :";
        cin>>inpt;
        if(inpt>ba || inpt<1)
        {
            cout<<"\nInvalid Option Try Again\n";
            goto ja;
        }
        system("cls");
 this->readdata(_test[inpt-1].ti,_test[inpt-1].ini);
    }
    void access()
    {
        string test;
        system("cls");
        int e;
    aja:cout<<"Enter name of the test : ";
    cin>>test;
    string hm=test;
    test=test+".txt";
    fstream file(test.c_str());
    if(file)
    {
        cout<<"The Test Already Exists. \n\tSorry\n";
        goto aja;
    }
    agaya: cout<<"How many questions(max 50.): ";
    cin>>e;
    if(e>50)
    {
        cout<<"\n Max allowed Questions is 50\n";
        goto agaya;
    }
    string lm;
    file.close();
    fstream inputdir;
    inputdir.open("TestList.txt",ios::app|ios::ate);
inputdir<<hm<<endl<<e<<endl;
inputdir.close();
        this->getdata(test,e);
    }
private:
    char quiz[4][100],arr[1];
    void getdata(string test,int n)
    { fstream in(test.c_str());
        in.open(test.c_str(),ios::app|ios::binary);
        if(!in)
        {
                cout<<"Not able to open";
            exit(0);
        }
        fflush(stdin);
        while(n--){
                cout<<"Enter Ques : ";
                fflush(stdin);
        gets(quiz[0]);cout<<"Enter Option 1 : ";
        gets(quiz[1]);cout<<"Enter Option 2 : ";
        gets(quiz[2]);cout<<"Enter Option 3 : ";
        gets(quiz[3]);cout<<"Enter Ans ( a , b , c) :";
       wapas: cin>>arr[0];
        if(!(arr[0]=='a' ||arr[0]=='b'||arr[0]=='c'))
        {
            cout<<"Invalid Option Entered\tTry Again.";
            fflush(stdin);
           goto wapas;
        }
        in.write((char*)this,sizeof(*this));
        }
in.close();
}
void readdata(string opener,int num)
{
    float Count=0;
    string test=opener+".txt";
    ifstream out(test.c_str(),ios::binary);
       if(!out)
    {
        cout<<"\nUnable to open";
        exit(0);
    }
    inst();
    while(num--)
    {
        fflush(stdin);
        out.read((char*)this,sizeof(*this));
        cout<<"Q. "<<quiz[0]<<"\na. "<<quiz[1]<<"\nb. "<<quiz[2]<<"\nc. "<<quiz[3]<<endl;
        char uttar=timer();
        if(uttar==arr[0]){
            cout<<"\nCorrect\n";
            Count+=1;
        }
        else if(uttar==0)
            cout<<"\nTime Up\n";
            else if(!(uttar==0 || uttar==97 ||uttar==98 ||uttar==99))
                cout<<"\nInvalid\n";
            else{
                cout<<"\nWrong\n";
                Count-=0.25;
            }
    }
    cout<<"Your Score : "<<Count;
    getch();
    out.close();
}
void scores()
{
    ifstream out;
    out.open("Scorelist.txt",ios::in);
}
}crtst;
int main(int argc,char **argv)
{
   int a,b=1;
    while(b==1)
    {  system("cls");system("color e0");
    cout<<"\t--------------------------------------------------------\n";
    cout<<"\t         WELCOME TO DEREK O BRIAN QUIZ PROGRAMME:\n";
    cout<<"\t--------------------------------------------------------";gotoxy(9,4);
    cout<<"---------------------------"<<endl;
       gotoxy(10,5); cout<<"Please Select The Option:";gotoxy(9,6);
                     cout<<"---------------------------"<<endl;
       gotoxy(12,7);cout<<"A. Default Tests :";
       gotoxy(14,9); cout<<"General Knowledge             [1]";
       gotoxy(14,11);cout<<"Computer Science              [2]";
       gotoxy(14,13);cout<<"Sports                        [3]";
       gotoxy(12,15);cout<<"B. Create Test                  [4]";
       gotoxy(12,17);cout<<"D. Show Tests                   [5]";
       gotoxy(12,19);cout<<"C. Exit                         [0]";
       gotoxy(14,21);cout<<"Enter Option : ";cin>>a;
       switch(a)
       {
           case 0:b=0;
           break;
           case 1:obj.TEST("gk.txt");
           break;
           case 2:obj.TEST("cs.txt");
           break;
           case 3:obj.TEST("sport.txt");
           break;
           case 4:crtst.access();
           break;
           case 5:crtst.attest();
           break;
           case 6:break;
           default:cout<<"Press Enter to try Again";getch();
           system("cls");
       }
    }
    return 0;
}
