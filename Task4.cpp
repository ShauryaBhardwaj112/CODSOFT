#include<iostream>
#include<windows.h>

 using namespace std;
 void print_tasks(string tasks[],int task_count){
    cout<<"Tasks to Do : "<<endl;
    cout<<"-----------------------------"<<endl;
    for(int i=0;i<task_count;i++){
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------------"<<endl;
    cout<<endl;
     
 }


 int main(){
 string Tasks[10]={""};
 int count=0;
 int opt=-1;

 while(opt!=0){
    cout<<"-----------TO DO LIST---------------"<< endl;
    cout<<"1. To add a New Task "<<endl;
    cout<<"2. To view the Task  "<<endl;
    cout<<"3. To delete the Task "<<endl;
    cout<<"0. End the program "<<endl;
    cout<<"Enter your Choice : ";
    cin>>opt;
    switch(opt){
        case 1: if(count >9){
            cout<<"   TASK LIST IS FULL   "<<endl;
        }
        else{
            cout<<" Enter a New Task "<<endl;
            cin.ignore();
            getline(cin,Tasks[count]);
            count++;
        }
        break;
       case 2:print_tasks(Tasks,count);
       break;
       case 3:
          int del_task =0;
          cout<<"Enter the Task to delete "<<endl;
          cin>>del_task;

          if(del_task<0 || del_task>9){
            cout<<"You entered Invalid task "<<endl;
            break;
          }
          for(int i=del_task;i<count;i++){
            Tasks[i]=Tasks[i+1];
          }
          count=count-1;
          break;
    }
 }

    return 0;

 }