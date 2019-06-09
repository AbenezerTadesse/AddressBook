.SUFFIXES : .cc
.SUFFIXES : .c
.SUFFIXES : .cpp

INCDIR =
LIBDIR =

CC = g++ -std=c++11

CXXFLAGS = -g

LIBS = -lm

OBJS = main.o Contact_Info.o BSTree.o Functions.o

TARGET = main

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBDIR) $(LIBS)

.cc.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.c.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

clean:
	rm -f $(OBJS) $(TARGET) core



