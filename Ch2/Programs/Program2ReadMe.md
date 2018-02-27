
<h1>Programming Assignment: Chapter 2 Assignment 2</h1>
<h2>Problem Analysis:</h2>
Write a program that prompts the user for the capacity in gallons of an automobile fuel tank, and the miles per gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without refueling. The capacity must be an integer value and the miles per gallon must be a floating point value.  The number of miles must be output to the next lowest integer (without decimals).

<h2>Data definitions:</h2>
Fuel metrics will be represented in gallons, including total capacity. Total capacity must be an integer value. Distance will be represented in miles, where miles per gallon must be a floating point value, while the number of miles must be rounded down to an integer. 
Desired Output:
Output must be the resulting number of miles the vehicle may be driven without fueling, represented by the next lowest integer value with no decimal notation. 

<h2>Algorithm:</h2>
<ul>
<li>Initialize standard inclusion statement to allow input/output and compiling via "<iostream>"</li>
<li>Declare the namespace std to allow use of cin, cout, and endl</li>
<li>Declare main function</li>
<li>Within main function declare variables vehicle fuel capacity (cap), fuel efficiency (mpg) </li>
<li>Assign variable values based on user input in cin statements – require the user to input whole number for fuel capacity (integer) and a decimal for miles per gallon (float).</li>
<li>Print plain english statement that indicates the total amount of miles the vehicle can travel on a full tank by multiplying miles per gallon (mpg) by capacity (cap) (cap*mpg = distance)</li>
<li>Insert a pause to allow user verification of final values of all variables</li>
<li>return statement to end main function</li>
</ul>

<h2>User Documentation:</h2>
User may open the executable or run the solution in Visual Studio via Debugger (F5). User will input a whole number (round up based on the tenth, so for .01-.49 round down, and .50-.99 round up) for the fuel capacity (cap) and a decimal value for miles per gallon (mpg). The result will stay open until the user presses a key to close the program and terminate the process.
<h4>Expected errors:</h4> If you input the wrong type of data for the capacity, the program will run incorrectly and give an incorrect result, please be cautious when inputting your fuel capacity and make sure it is a whole number.

