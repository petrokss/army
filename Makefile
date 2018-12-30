compile_all:

	#g++ units/*.cpp attack/*.cpp state/*.cpp spellcaster/SpellCaster.cpp spellcaster/Wizzard.cpp -c (-std=c++11)
	g++ **/*.cpp -c

link_all: compile_all
	g++ run.cpp *.o 

all: link_all

clean:
	rm *.o