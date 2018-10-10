# CSE-2383-Digital-Grasshopper
Utilizing a data structure of my choice, I designed and built a digital grasshopper program that follows the given dimensions. 

Write a program that allows a user to issue a series of instructions to a digital grasshopper and reports on the grasshopper’s responses and status. Your program must model the following behaviors: 
1. Train <kind> - creates a new digital grasshopper of the &lt;kind> indicated. This will delete the previous digital grasshopper so it should warn the user and ask them to commit before continuing. 
2. Eat <item> - the grasshopper attempts to eat the indicated <item>. Should indicate whether it successfully ate the item or not.
3. Excrete – remove the oldest item the grasshopper has eaten from its stomach. Should indicate which item was excreted or if the stomach was empty. 
4. Vomit – remove the newest item the grasshopper has eaten from its stomach. Should indicate which item was vomitted or if the stomach was empty. 
5. Report – list the contents of the grasshopper’s stomach, then output HUNGRY if the grasshopper’s stomach is empty or FULL if the grasshopper’s stomach is full 
6. Reset – should reset the grasshopper to its default settings (an empty stomach).
7. Exit – terminates the program 
  
For this program, there are three kinds of digital grasshoppers that can be trained: krikets, hoppers, and lokusts. The only difference between each kind of digital grasshopper is stomach capacity; krikets have a stomach capacity of 3, hoppers have a stomach capacity of 5, and lokusts have a stomach capacity of 9. We will only feed the grasshopper grass, seeds, and bugs. Grass occupies 1 unit of space in the grasshopper’s stomach, seeds occupy 2 units, and bugs occupy 3 units. We will assume that the default digital grasshopper is a hopper


I utilized the STL vector library to keep track of my grasshoppers stomach. 
