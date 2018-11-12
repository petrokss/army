compile_all:
	g++ units/unit.cpp attack/BaseAttack.cpp state/State.cpp -c 

link_all: compile_all
	g++ run.cpp *.o

all: link_all

clean:
	rm *.o