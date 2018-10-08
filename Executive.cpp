// Jacob Marshall // 2876707 // EECS560 // Lab4 // 6 Oct 2018 //
#include<iostream>
#include<fstream>
#include<string>
#include"BST.h"
#include"Executive.h"
using namespace std;


Executive::Executive(string filename){
    fileToOpen = filename;
    run();
}


void Executive::run(){
    ifstream inFile;
    inFile.open(fileToOpen);
    string newData;
    int intnewData;
    while (inFile >> newData) {
        intnewData = stoi(newData);
       
    }
    inFile.close();
  
    bool quit;
    quit = false;
    while(quit == false){
    cout<<"\nPlease choose one of the following commands: \n";
    cout<<"1-Test HashTables\n";
    cout<<"2-Performance Comparison\n";
    cout<<"3-Exit\n";
    cout<<">";
    string command; 
    cin>>command;
    if(command == "1"){
        
    }
    if(command == "2"){


        



    }

    if(command == "3"){
        cout<<"Byebye! \n\n\n\n\n\n\n\n\n\n\n";
        quit = true;
    }

    }
  


}


