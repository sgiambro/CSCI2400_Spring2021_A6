heapOfStudents: student.o date.o address.o main.o
	g++ -g student.o date.o address.o main.o -o heapOfStudents
student.o: student.cpp student.h
	g++ -c student.cpp
date.o: date.cpp date.h
	g++ -c date.cpp
address.o: address.cpp address.h
	g++ -c address.cpp
main.o: main.cpp student.o date.o address.o
	g++ -c main.cpp
clean:
	rm -f *.txt
	rm -f *.o
run: heapOfStudents
	./heapOfStudents
valgrind: heapOfStudents
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./heapOfStudents
