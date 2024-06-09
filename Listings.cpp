#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct todoItems{
    string task;
    bool completed;
};

void Menu(){
    cout<<"To-Do List Menu"<<endl;
    cout<<"1. Add tasks to list"<<endl;
    cout<<"2. View tasks"<<endl;
    cout<<"3. Mark Completed Task"<<endl;
    cout<<"4. Delete Task"<<endl;
}
void addtask(vector<todoItems>& todoList){
    string task;
    cout<<"Enter Task-"<<endl;
    getline(cin, task);
    todoList.push_back({task,false});
    cout<<"Task added!"<<endl;
}
void viewtask(const vector<todoItems>& todoList){
    cout<<"To-Do List"<<endl;
    for(size_t i=0; i< todoList.size(); ++i){
        cout<<i+1 << "."<<todoList[i].task<<"-"<<(todoList[i].completed? "Completed":"Not Completed")<<endl;
    }
}
void marktask(vector<todoItems>& todoList){
    int index;
    cout<<"Enter the index of completed task ";
cin>>index;
if(index>=1 && index<= todoList.size()){
    todoList[index -1].completed = true;
    cout<<"Task marked as complete."<<endl;
}
else 
cout<<"Invalid Index"<<endl;
}
void deletetask(vector<todoItems>& todoList){
    viewtask(todoList);
    int index;
    cout<<"Enter index of task to be deleted"<<endl;
cin>>index;
if(index>=1 && index<= todoList.size()){
    todoList.erase(todoList.begin() + index -1);
    cout<<"Task successfully deleted"<<endl;
}else
cout<<"Invalid index number selected."<<endl;

}
int main(){
    vector<todoItems> todoList;
    int ch;
    do{
        Menu();
        cout<<"Enter your Choice "<<endl;
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
            addtask(todoList);
            break;
            case 2:
            viewtask(todoList);
            break;
            case 3:
            marktask(todoList);
            break;
            case 4:
            deletetask(todoList);
            break;
            case 5:
            cout<<"INvalid Choice"<<endl;
            default:
            cout<<"Invalid Choice."<<endl;
        }
    }while(ch !=5 );
return 0;
}