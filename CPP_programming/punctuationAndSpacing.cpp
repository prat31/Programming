#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>

using namespace std;

string removeDoubleSpaces(string line){
    int index=0;
    while(line.find("  ", 0)){
        index=line.find("  ", index);
        if(index==string::npos){
            break;
        }
        line.replace(index, 2, " ");
    }
    return line;
}

string checkFullStop(string line){
    int index=0;
    while(line.find(" . ", 0)){
        index=line.find(" . ", index);
        if(index==string::npos){
            break;
        }
        line.replace(index, 3, ". ");
    }
    index=0;
    while(line.find(" .", 0)){
        index=line.find(" .", index);
        if(index==string::npos){
            break;
        }
        line.replace(index, 2, ".");
    }
    return line;
}

string checkComma(string line){
    int index=0;
    while(line.find(" , ", 0)){
        index=line.find(" , ", index);
        if(index==string::npos){
            break;
        }
        line.replace(index, 3, ", ");
    }
    index=0;
    while(line.find(" ,", 0)){
        index=line.find(" ,", index);
        if(index==string::npos){
            break;
        }
        line.replace(index, 2, ",");
    }
    return line;
}

string punctuate(string line){
    line = removeDoubleSpaces(line);
    line = checkFullStop(line);
    line = checkComma(line);
    return line;
}

int main(){
    string line;
    ofstream output;
    output.open("output.txt");
    ifstream myfile("example.txt");
    string outputLine;
    if(myfile.is_open()){
        while(getline(myfile, line)){
            outputLine=punctuate(line);
            output<<outputLine<<endl;
        }
        myfile.close();
    }
    output.close();
    return 0;
}