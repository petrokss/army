compile_all:

	g++ **/*.cpp -c

link_all: compile_all
	g++ run.cpp *.o 

all: link_all

clean:
	rm *.o