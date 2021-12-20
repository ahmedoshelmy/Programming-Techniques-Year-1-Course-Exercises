
#include <vector>
#include <iostream>

using namespace std;

class Array{
    int* arr;
    int maxAllowedSize;
    int currentSize;
public:
    Array(int m){
        if(m<=0) m =5;
        currentSize = 0;
        maxAllowedSize = m;
        arr = new int[maxAllowedSize];
        for (int i = 0; i <maxAllowedSize ; ++i) {
            arr[i]=1;
        }
    }
    void addElement(int x){
        if(currentSize< maxAllowedSize){
            arr[currentSize] = x;
            currentSize++;
        }
    }
    void deleteElement(int x){
        for (int i = 0; i < currentSize; ++i) {
            if(arr[i] == x){
                arr[i] = arr[currentSize-1];
                arr[currentSize-1] = 1;
                currentSize --;
            }
        }
    }
    int getMax(){
        int greatest = arr[0];
        for (int i = 1; i < currentSize; ++i) {
            if(arr[i]>greatest) greatest = arr[i];
        }
        return greatest;
    }
    int getMin(){
        int least = arr[0];
        for (int i = 1; i < currentSize; ++i) {
            if(arr[i]<least) least = arr[i];
        }
        return least;
    }
    void printArray(){
        for (int i = 0; i < currentSize; ++i) {
            cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        }
        cout<<endl;
    }
    int getSum(){
        int sum = 0;
        for (int i = 0; i < currentSize; ++i) {
            sum += arr[i];
        }
        return sum;
    }
    ~Array(){
        delete[] arr;
    }

};
void makeOperation(int operation, Array& A){
    int x;
    switch (operation) {
        case 1:
            cin>>x;
            A.addElement(x);
            break;
        case 2:
            cin>>x;
            A.deleteElement(x);
            break;
        case 3:
            cout<<A.getMax()<<endl;
            break;
        case 4:
            cout<<A.getMin()<<endl;
            break;
        case 5:
            cout<<A.getSum()<<endl;
            break;
        case 6:
            A.printArray();
            break;
    }
}
int main() {
    int n,c,m,x,operation;
    cin>>n;
    Array A(n);
    cin>>c;
    for (int i = 0; i < c; ++i) {
        cin>>x;
        A.addElement(x);
    }
    cin>>m;
    for (int i = 0; i <6; ++i) {
        cin>>operation;
        makeOperation(operation,A);
    }
    
    system("pause");
    return 0;
}
