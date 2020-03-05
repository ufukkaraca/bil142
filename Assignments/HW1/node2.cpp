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