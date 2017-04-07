hw3 : hw3.o
	g++ -o hw3 hw3.o
hw3.o : hw3.cpp
	g++ -c hw3.cpp
clean:
	rm *.o
