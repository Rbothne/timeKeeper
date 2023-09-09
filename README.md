# ProgrammingAssignment3

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Continued use of **class** building skills.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from 
“Correct usage: ” to “correct”. 
Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Your project should include the following files:
```
- driver.cpp
- time.cpp
- time.h
- makefile  
```
Your executable should be named ```time_keeper```
## Programming Problem
Write a program for clocking in and out, and calculating hours worked. Time values should hold military times. Ex: 23:59:59.99  

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x timeExecutable``` into the terminal and try running the executable again  
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function should create the necessary Time objects and prompt the user to enter their clock in time and clock out time. If the user correctly enters a clock in time and a clock out time, the difference between the two times should be calculated and displayed to the screen. Otherwise, error messages should be displayed.

In addition to the main functions, your driver should have at minimum 2 more functions:

*getClockTime()*  
**Input Parameters**: A reference to a Time object  
**Returned Output**: boolean success  
**Functionality**: This function should accept a Time object for storing the clock time. The user should be promped for the time in hours, minutes, and seconds. The function should then try to set the values for the Time object. If the values are valid, the function should return true. If the values are invalid, the exception message should be displayed and the function should return false.

*calcHoursWorked()*  
**Input Parameters**: constant reference to a Time object, constant reference to a Time object    
**Returned Output**: Time object  
**Functionality**: This function should accept a clock in Time object and a clock out Time object. The difference for each time component should be calculated and used to create a new Time object, which should be returned by the function. If the attempt to create a Time object results in an invalid Time, the exception should be caught, an error message should be displayed, and an "empty" Time object should be returned.  
```
time.h
```
**Functionality**: This file should contain the definition for the Time class, which includes the following attributes:  
```
int hour
int minute
int second
int millisecond
```
```
time.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor(s)  
The parameterized constructors should check for negative values and in that case calculate the appropriate attribute values. For example, if -20 seconds are passed in, the second attribute should be set to 40 and the incoming minute value should be decremented.
- copy constructor  

*Getters*  
Getter functions for each attribute. These should be ```const``` functions  

*Setters*  
Setter functions for each attribute. These functions should throw an exception for invalid values (negative or greater than the max value).  

*display()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Time in the following format: HH:MM:SS.ms.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
