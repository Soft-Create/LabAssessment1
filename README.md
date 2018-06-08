# Lab Assessment

<ol>
<li>Create a new C++ console application called PointersLab</li>
<li>In your main() function, create two variables.&nbsp; One variable needs to be an intrinsic integer variable named num1 and the second needs to be a pointer to an int variable that you will call pNum.&nbsp; (Note, pNum should NOT be a pointer to num1 which means you need to create another variable for pNum to point to.)</li>
<li>Assign the value 3 to num1.</li>
<li>Assign the value 5 to the memory location stored in pNum.&nbsp; (Hint, there is a special operator used for this)</li>
<li>Create a function called PassByValue that accepts an integer argument.</li>
<li>Inside PassByValue, output a text string indicating the name of the function you are in.</li>
<li>Call PassByValue and pass in num1 as the argument.</li>
<li>Modify the value of num1 inside the PassByValue function and output the new value to the console window.</li>
<li>After the call returns to main(), output the value of num1 to the console window again.</li>
<li>Create a function called PassByRef that accepts a reference variable as an argument</li>
<li>Call PassByRef and send pNum as the argument.</li>
<li>Output a statement indicating the current function name.</li>
<li>Modify the value of pNum, setting it to 50,&nbsp; and output the value to the console.</li>
<li>After the call returns to main(), output the value of pNum to the console.</li>
<li>Call PassByValue and pass in pNum as an argument.</li>
<li>Document any error messages for the lab assessment that might occur during your lab.</li>
<li>Create a pointer variable to a double, and allocate memory for it using the new keyword.</li>
<li>Assign a value to the memory location.</li>
<li>Use the dereference operator, get the value and output it to the console.</li>
<li>Deallocate the memory for that variable.</li>
<li>Output the value stored in the memory location for that variable again.</li>
<li>Document any errors experienced for the lab assessment.</li>
<li>Create a simple class in your C++ application called Person.</li>
<li>Give Person member variables for name, age, height, and weight.&nbsp; Feel free to make these private with public accessors or make them public without accessors.&nbsp; It is not important for this exercise.</li>
<li>Create a function in your application called ModifyPerson() that accepts a Person object as an argument.&nbsp; NOTE: This function should be in the application area and not inside the Person class.</li>
<li>Instantiate a Person object in your main() method and assign values to the member variables.</li>
<li>Output the values stored in the member variables to the console window</li>
<li>Call the ModifyPerson() function, passing in your Person object you just created.</li>
<li>Inside the ModifyPerson() function, change the value in the name member variable.</li>
<li>Back in main(), output the values stored in the Person object you created.&nbsp; Did the name change?&nbsp; It should have if you passed the object correctly to the function.</li>
<li>Close Visual Studio and take the lab assessment.</li>
</ol>
