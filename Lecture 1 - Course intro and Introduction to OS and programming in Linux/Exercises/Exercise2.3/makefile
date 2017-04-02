SOURCES = main.cpp part1.cpp part2.cpp
OBJECTS = ${SOURCES:.cpp=.o}
EXECUTABLE = hello
GXX = g++
CXXFLAGS = -ggdb -I

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(GXX) -o $@ $^

%.o: %.cpp #$(SOURCES)
	$(GXX) -c -o $@ $^

.PHONY: clean

clean:
	$(RM) $(EXECUTABLE) $(OBJECTS)

help:
	echo "Available Targets: all | $(EXECUTABLE) | $(OBJECTS) | clean | help"
