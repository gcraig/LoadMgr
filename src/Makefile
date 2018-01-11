CC=g++
CXX=g++
RM=rm -f
CPPFLAGS=-g -I. -std=c++14 -m64 -Wall
CFLAGS=-g -I. -std=c++14 -m64 -Wall
DEPS = server.h
OBJ = server.o main.o
EXE = main.exe

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CPPFLAGS)

main: $(OBJ)
	g++ -o $@ $^ $(CPPFLAGS) 

clean:
	$(RM) $(OBJ) $(EXE)