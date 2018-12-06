compile_all:
	g++ units/Unit.cpp attack/BaseAttack.cpp state/State.cpp units/Soldier.cpp units/Werewolf.cpp attack/WerewolfAttack.cpp -c 

link_all: compile_all
	g++ run.cpp *.o

all: link_all

clean:
	rm *.o