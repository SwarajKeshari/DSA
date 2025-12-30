#include <iostream>
using namespace std;

class MaxHeap{

    int * arr;
    int nElem;
    int totalSize;

    public:

    MaxHeap(int size){

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

        while(index > 0 && arr[(index - 1)/2] < arr[index]){

            swap(arr[(index - 1)/2], arr[index] );
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

    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if(left < nElem && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < nElem && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index], arr[largest]);
        Heapify(largest);
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

    MaxHeap H1(6);

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