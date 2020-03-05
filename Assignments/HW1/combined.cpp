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

class node2 : public node{
private:

public:
    explicit node2 (int id2);

    node2* nodeArray[1000]{};

    void addNeighbor(node2* n){
        for(int i=0; i<1001; i++){
            if(nodeArray[i]==nullptr){
                nodeArray[i]=n;
                break;
            }
        }
    }

    bool removeNeighbor(node2* n){
        /*in this function, the program goes through all the elements in the
        array until it finds the desired element and equates it to NULl and returns true.
        If it fails to find the element (i.e. it is non-existent in the aforementioned
        array) it returns false.*/
        for(int i=0; i<1001; i++){
            if(nodeArray[i]==n){
                nodeArray[i]=nullptr;
                return true;
            }
        }
        return false;
    }


};

node2::node2(int id2) : node(){
    std::cout<<"desired id assignment:"<<id2<<std::endl;
    node::setId(id2);
    std::cout<<"assigned id:"<<getId()<<std::endl;
}


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

    //following are the tests for the class "node2"

    std::cout<<std::endl<<"Following are the outputs of commands testing the class node2"<<std::endl;

    node2 n20(1);
    node2 n22(2);
    node2 n23(3);

    n20.addNeighbor(&n22);
    n22.addNeighbor(&n20);

    n22.addNeighbor(&n23);
    n23.addNeighbor(&n22);

    std::cout<<std::endl<<"The first neighbor of node 1 is:"<<n20.nodeArray[0]->getId()<<std::endl;
    std::cout<<"The first neighbor of node 2 is:"<<n22.nodeArray[0]->getId()<<std::endl;
    std::cout<<"The second neighbor of node 2 is:"<<n22.nodeArray[1]->getId()<<std::endl;
    std::cout<<"The first neighbor of node 3 is:"<<n23.nodeArray[0]->getId()<<std::endl;

    //now, to test the removeNeighbor function we are going to erase the second neighbor of node2: node3

    n22.removeNeighbor(&n23);

    std::cout<<std::endl<<"After the removal:"<<std::endl;
    std::cout<<"The first neighbor of node 1 is:"<<n20.nodeArray[0]->getId()<<std::endl;
    std::cout<<"The first neighbor of node 2 is:"<<n22.nodeArray[0]->getId()<<std::endl;
    if(n22.nodeArray[1]==nullptr)
        std::cout<<"The second neighbor of node 2 has been removed."<<std::endl;
    else
        std::cout<<"The second neighbor of node 2 is:"<<n22.nodeArray[1]->getId()<<std::endl;
    std::cout<<"The first neighbor of node 3 is:"<<n23.nodeArray[0]->getId()<<std::endl;



    return 0;
}