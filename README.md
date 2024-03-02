<h1>Breadth-first search algorithm pratice</h1>

<h2>Description</h2>
Use Breadth-first search (BFS search) to design a game of finding the shortest path from grid A to grid B in a grid graph with blockings.
can figure out all the possible paths a player moves from S to T and the shortest length path. 
used an implementation of queue and stack in this programme to do the BFS search. 
Firstly,we use a stack to keep the data player inserted into the queue.Then we have to check the neighbour of each data player inserted which is “1” or “0” that represents the blocks and roads . 
The queue data structure checks which node to visit next. 
When the programme found a blocking in the stack which blocks the road to continue ,the programme will reconstruct the queue by using the pop and push functions of stack which represent going backwards and select another neighbour node to visit until the programme finds the path “0” to the Final point. 
The programme will calculate the steps needed for the shortest path and also the coordinates of each road of the path. 
<br />


<h2>Languages and Utilities Used</h2>

- <b>C++</b> 
- <b>Data structure Algorithm</b>

<h2>Environments Used </h2>

- <b>Windows 10</b> (21H2)

<h2>Guide:</h2>

<p>
1.Insert a number which means the size of map  <br/>
2.Start playing the map   <br/>
3.Player guess which is the shortest path from point S to point T  <br/>
4.Pressing Enter, the shortest path in the map and the player’s location will be shown 
</p>

<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
