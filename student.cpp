#include<iostream>
#include<conio.h>
using namespace std;

int i=0;

struct Student
{
    int id;
    float marks,per;
    string name, grade;
}s[25];

void insert()
{
    system("cls");
    cout<<"Insert record"<<endl;
    cout<<"Enter student id::"<<endl;
    cin>>s[i].id;
    cout<<"Enter student Name::"<<endl;
    cin>>s[i].name;
     cout<<"Enter student marks::"<<endl;
    cin>>s[i].marks;
    s[i].per= s[i].marks/100*100;
    if(s[i].per >= 85)
        s[i].grade="A+";
    else if(s[i].per >=75)
        s[i].grade= "A";
    else if(s[i].per >=65)
        s[i].grade= "B+";
    else if(s[i].per >=55)
        s[i].grade= "B";
    else if(s[i].per >=50)
        s[i].grade= "C";
    else if(s[i].per >=45)
        s[i].grade= "D";
     else if(s[i].per >=33)
        s[i].grade= "E";
    else 
        s[i].grade= "F"; 
    i++;
    cout<<"\n\nInsertion successfully!"<<endl;
}
void search()
{
    system("cls");
    cout<<"Search Record"<<endl;
    if(i==0)
        cout<<"No record found"<<endl;
    else
    {
        int id,found=0;
        cout<<"\nEnter Student Id::";
        cin>>id;
        for(int a=0;a<i;a++)
        {
            if(id == s[a].id)
            {
                cout<<"\n Student name: "<<s[a].name;
                cout<<"\n Student marks: "<<s[a].marks;
                cout<<"\n Student percentage: "<<s[a].per<<"%";
                cout<<"\n Student grade: "<<s[a].grade;
                found++;
            }
        }
        if(found == 0)
            cout<<"\n Student Id not Found";
    } 
}
void update()
{
    system("cls");
    cout<<"Update Record"<<endl;
    if(i==0)
        cout<<"No record found"<<endl;
    else
    {
        int id,found=0;
        cout<<"\nEnter Student Id::";
        cin>>id;
        for(int a=0;a<i;a++)
        {
            if(id == s[a].id)
            {
                cout<<"Enter student Name::"<<endl;
                cin>>s[a].name;
                cout<<"Enter student marks::"<<endl;
                cin>>s[a].marks;
                s[a].per= s[a].marks/100*100;
                if(s[a].per >= 85)
                    s[a].grade="A+";
                else if(s[a].per >=75)
                    s[a].grade= "A";
                else if(s[a].per >=65)
                    s[a].grade= "B+";
                else if(s[a].per >=55)
                    s[a].grade= "B";
                else if(s[a].per >=50)
                    s[a].grade= "C";
                else if(s[a].per >=45)
                    s[a].grade= "D";
                else if(s[a].per >=33)
                    s[a].grade= "E";
                else 
                    s[a].grade= "F"; 
                cout<<"\n Record updated successfully!";
                found++;
            }
        }
        if(found == 0)
            cout<<"\n Student Id not Found";
    } 
}

void del()
{
    system("cls");
    cout<<"Delete Record"<<endl;
    if(i == 0)
        cout<<"No record found"<<endl;
    else
    {
        int id,found=0;
        cout<<"\nEnter Student Id::";
        cin>>id;
        for(int a=0;a<i;a++)
        {
            if(id == s[a].id)
            {
                for(int m=a;m<i-1;m++)
                {
                    s[m].id = s[m+1].id;
                    s[m].name=s[m+1].name;
                    s[m].marks=s[m+1].marks;
                    s[m].per=s[m+1].per;
                    s[m].grade=s[m+1].grade;
                }
                cout<<"\n Record deleted successfully!";
                found++;
                i--;
                break;
            }
        }
    }
}
void show()
{
    system("cls");
    cout<<"Show All Records"<<endl;
    if(i == 0)
        cout<<"No record found"<<endl;
    else
    {
        for(int a=0;a<i;a++)
        {
            cout<<"\n Student Id: "<<s[a].id;
            cout<<"\n Name: "<<s[a].name;
            cout<<"\n Marks: "<<s[a].marks;
            cout<<"\n Percentage: "<<s[a].per;
            cout<<"\n Grade: "<<s[a].grade;
            cout<<endl;
        }
    }
}


main()
{
    p:
    system("cls");
    int choice;
    cout<<"STUDENT MANAGEMENT SYSTEM"<<endl;
    cout<<"1. Insert record"<<endl;
    cout<<"2. Search record"<<endl;
    cout<<"3. Update record"<<endl;
    cout<<"4. Delete record"<<endl;
    cout<<"5. Show record"<<endl;
    cout<<"6. Exit";
    cout<<"\n\nEnter Your Choice:: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        insert();
        break;
        case 2:
        search();
        break;
        case 3:
        update();
        break;
        case 4:
        del();
        break;
        case 5:
        show();
        break;
        case 6:
        exit(0);
        default:
        cout<<"Invalid Choice!";
    }
    getch();
    goto p;
}