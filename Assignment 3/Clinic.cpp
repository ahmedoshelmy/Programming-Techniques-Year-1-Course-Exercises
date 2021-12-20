
#include <vector>
#include <iostream>

using namespace std;
class Case{
    int id;
    int severity;
public:
    int getID(){
        return id;
    };
    int getSeverity(){
        return severity;
    }  ;
    void setID(int i){
        if(i<0)i=1;
        id = i;
    };
    void setSeverity(int s){
        if(s<0) s =1;
        severity = s;
    };

};
class Clinic{
    Case* caselist;
    int maxCaseCount;
    int currentCasecount;
public:
    Clinic(int n){
        if(n<0)n=0;
        maxCaseCount = n;
        currentCasecount=0;
        caselist = new Case[maxCaseCount];
    };


    void print(){
        //Using bubble sort technique instead of Selection Sort
        for(int j=currentCasecount-1;j>=0;j--){
            for(int k = 0;k<j;k++){
                if(caselist[k+1].getSeverity()<caselist[k].getSeverity()){
                    swap(caselist[k+1],caselist[k]);
                }
            }
        }
        for (int i = 0; i<currentCasecount; ++i) {
            cout<<caselist[i].getID()<<" "<<caselist[i].getSeverity()<<endl;
        }
    };
    void addCase(Case c){
        if(currentCasecount<maxCaseCount){
            caselist[currentCasecount]=c;
        }
        currentCasecount++;

    };
    ~Clinic(){
        delete[] caselist;
    }
};
int main() {
    int n,m,id,sev;
    cin>>n>>m;
    Clinic Clinic1(n);
    for(int i=0;i<m;i++){
        cin>>id>>sev;
        Case C;
        C.setID(id);
        C.setSeverity(sev);
        Clinic1.addCase(C);
    }
    Clinic1.print();

    //system("pause");
    return 0;
}
