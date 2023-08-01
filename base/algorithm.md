Goal: 	Create a report of students using an input file

Input:  -all setter methods will require a string input
	-the fullReport and shortReport methods will require a line of student.dat in string form
	-setAddress() and setDate() methods will take objects of their respective type
	-.cpp files will need their respective .h files except for student and main which need all

Output: -all getter methods will output the value of of their respective variables
	-fullReport will output a complete report of all 50 students
	-shortReport will list the names of all 50 students

Steps:

	date.h:
		-set up the variables for birth ady and graduation date
		-set up both getters and setters

	date.cpp:
		-give values for both variables
		-create the setters to take strings
		-create getters

	address.h:
		-set up variables for the students addresses
		-set up all getter and setters
	
	address.cpp:
		-give all variables a value
		-setters take strings and assign the variabls
		-getters output the values
	
	student.h:
		-set up variable for the remaining data
		-set up an address object and date object
		-set up all getter and setters
		-fullReport takes a string
		-shortReport takes a string
		-setAddress() and setDate() take objects

	student.cpp:
		-give values to the variables and objects
		-setters take strings and assign them to the variabls
		-getters output values
		-setAddress and setDate take objects
		-fullReport will take a line from student.dat then split it into variables via setters
		-fullreport will outPut to a fullReport file using getters
		-shortReport will do the same as fullReport but with only the students name

	main.cpp:
		-create a stringstream to get the currentline of student.dat
		-create a student object in the heap
		-in a for loop of 50 cycle through all students and send each line to fullReport() and shortReport()
		-delete the student object
