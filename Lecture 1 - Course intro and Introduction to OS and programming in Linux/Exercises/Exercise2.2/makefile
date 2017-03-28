SOURCES = main.cpp
OBJECTS = ${SOURCES:.cpp=.o}
EXECUTABLE = edit
GXX = g++
CXXFLAGS = -I

all: hello

hello: main.o
	$(GXX) -o $@ $^

main.o: $(SOURCES)
	$(GXX) -c $(SOURCES)

.PHONY: clean

clean:
	$(RM) hello $(OBJECTS)

help:
	echo "Available Targets: all | hello | main.o | clean | help"
