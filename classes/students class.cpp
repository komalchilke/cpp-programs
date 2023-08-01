// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class student {
    private :
    string fname;
    string lname;
    int year;
    string branch;
    public :
    void setfname(string f){
        fname = f;
    }
    void setlname(string l){
        lname = l;
    }
    void setyear(int y){
        year = y;
    }
    void setbranch(string b){
        branch = b;
    }
    string getfname(){
        return fname;
    }
    string getlname(){
        return lname;
    }
    int getyear(){
        return year;
    }
    string getbranch(){
        return branch;
    }
};
int main(){
    student st1;
    student st2;
    st1.setfname("rahul");
    st1.setlname("mehta");
    st1.setyear(1);
    st1.setbranch("IT");
    cout<<"student 1 details "<<endl;
    cout<<"fname "<<st1.getfname()<<endl;
	cout<<"lname "<<st1.getlname()<<endl;
	cout<<"year "<<st1.getyear()<<endl;
	cout<<"branch "<<st1.getbranch()<<endl;
    st2.setfname("tina");
    st2.setlname("rao");
    st2.setyear(3);
    st2.setbranch("civil");
    cout<<"    "<<endl;
    cout<<"student 2 details "<<endl;
    cout<<"fname "<<st1.getfname()<<endl;
	cout<<"lname "<<st1.getlname()<<endl;
	cout<<"year "<<st1.getyear()<<endl;
	cout<<"branch "<<st1.getbranch()<<endl;
    return 0;
}

