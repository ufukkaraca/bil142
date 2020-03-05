#include <iostream>

class node{
protected:
    int id;

public:
    void setId(int input){
        id=input;
   }
    int getId(){
        return id;
    }
};

class node1:public node{
private:
    node1* nodeArray[5];

public:

    //now the member functions concerning node1
    bool overwriteNeighbornode(int i, node1* n){
        nodeArray[i]=n;
        return nodeArray[i] == n;

        //this function returns true/false in accordence with the overwriting status
    }
    node1 getNeighborAtIndex(int i){
        return *nodeArray[i];
        //this function should return the node1 at index i
    }
};

int main(){

    std::cout<<"Following are the outputs of commands testing the class node1"<<std::endl;
    //following are the tests for the class "node1"
    node1 n1{}; n1.setId(1);
    node1 n2{}; n2.setId(2);
    node1 n3{}; n3.setId(3);

    n1.overwriteNeighbornode(0, &n2);
    n2.overwriteNeighbornode(0, &n1);

    n2.overwriteNeighbornode(0, &n3);
    n3.overwriteNeighbornode(0, &n2);

    std::cout<<n1.getNeighborAtIndex(0).getNeighborAtIndex(0).getId()<<std::endl;
    std::cout<<n2.getNeighborAtIndex(0).getNeighborAtIndex(0).getId()<<std::endl;

     return 0;
}