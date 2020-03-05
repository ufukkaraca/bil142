THE ANSWERS TO THE QUESTIONS FROM THE HOMEWORK DESCRIPTION ARE AS FOLLOWS

PART 1

Q:Given that graph is not a directional graph(i.e. Edges are not directional), Is the resulting graph consistent?  

A: The resulting graph is not consistent. This is due to the fact that the node2 has two neighbors. As the graph
is not a directional graph, the sequence of nodes may change.

		node1 --- node2 --- node3	OR	node3 --- node2 --- node1
Therefore, the answer is no.

PART 2

Q1:Would using a friend function help us in this case? Given that our graph is non-directional you need to add nodes 
to each other, a two step process. Can you write a single friend function which sets both nodes as neighbors?

A1: Yes, it would. As per the concept, a friend function can access the private variables of different objects of the 
same class, hence the "friend" name. This would eliminate the necessity for calling a function twice to make a
neighborship biliteral.

The implementation of this function would be fairly simple with the explicit accesses to two objects.

Q2:What are the limitations of having a constant array size? Advantages, Disadvantages? How can we improve 
the design? 

A2: Advantages are that in the process of working on the members of the array (e.g. removeNeighbor function) 
having a constant array size makes it easier to write functions and set parameters.

On the other hand, by having a constant array size, we are occupying unnecessary space in the memory. This slows the 
program down and modifies it toward a state of non-optimisation. 

One way to improve the design would be to use dynamic memory allocation accompanied by a universal variable
(i.e. accessible from everywhere within the code) stating the current size of the array. This would allow for the 
parameters of our code to change dynamically with our array, therefore eliminating the shortcomings of using 
dynamic or static memory allocation singularly. 