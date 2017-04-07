sort : sort.o clock.o
	g++ -o sort sort.o clock.o
sort.o : sort.cpp clock.h
	g++ -c sort.cpp
clock.o : clock.cpp clock.h
	g++ -c clock.cpp

clean:
	rm *.o
