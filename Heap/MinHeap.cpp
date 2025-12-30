#include <iostream>
using namespace std;

class MinHeap{

    int * arr;
    int nElem;
    int totalSize;

    public:

    MinHeap(int size){

        arr = new int[size];
        totalSize = size;
        nElem = 0;

    }

    void insert(int value){

        if(nElem == totalSize){

            cout << "Heap Overflow\n";
            return;
        }

        arr[nElem] = value;
        int index = nElem;
        nElem++;

        while(index > 0 && arr[(index - 1)/2] > arr[index]){
             swap(arr[(index - 1)/2], arr[index]);
            index = (index - 1)/2;
        }

    }

    void Delete(){
        
        if(nElem == 0){
            cout << "Heap Underflow\n";
            return;
        }

        cout << arr[0] << " is deleted\n";
        arr[0] = arr[nElem - 1];
        nElem--;
    
        Heapify(0);


    }

    void Heapify(int index){

        int smallest = index;
        int left = (index * 2) + 1;
        int right = (index * 2) + 2;

        if(left < nElem && arr[left] < arr[smallest]){
            smallest = left;
        }

        if(right < nElem && arr[right] < arr[smallest]){
            smallest = right;
        }

        if(smallest != index){
            
            swap(arr[smallest], arr[index]);
            Heapify(smallest);
        }

    }

    void print(){

        for(int i=0; i < nElem; i++){

            cout << arr[i] << " ";
        }

        cout << endl;
    }
    

};

int main(){

    MinHeap H1(6);

    H1.insert(5);
    H1.insert(10);
    H1.insert(22);
    H1.insert(87);
    H1.insert(114);
    H1.insert(57);
    H1.insert(59);

    H1.print();
    
    return 0;
}