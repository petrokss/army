compile_all:
	g++ units/unit.cpp units/soldier.cpp -c 

link_all: compile_all
	g++ run.cpp Unit.o Soldier.o

all: link_all

clean:
	rm *.o