In this case, a copy of the argument's value is passed to the function. The original value remain as it was. there is no change. and also if there are some modifications or change value in function, that isn't affect main argument.

for example,

we use a function and try to print address and also value in main function we see a and b value as 10 and 20 with 0061FF1C and 0061FF18.

but we pass our input value in fun function using parameater. also, add 10 and 20 with them befor printing. and we get 20 and 40 with 0061FF00 and 0061FF04.

but the resulte is different from main function. then we can say parameatr just copy but dont change in main  value.


On the other hand, in pass by reference, the memory address of the argument is passed to the function. so if we assing new value in this address then the main value also chnage 

for example,