SOURCES = main.cpp part1.cpp part2.cpp
OBJECTS = ${SOURCES:.cpp=.o}
EXECUTABLE = hello
GXX = g++
CXXFLAGS = -ggdb -I.
DEPS = $(SOURCES:.cpp=.d)

all: $(EXECUTABLE)

$(EXECUTABLE): $(DEPS) $(OBJECTS)
	$(GXX) -o $@ $(OBJECTS) $(CXXFLAGS)

%.d: %.cpp
	$(GXX) -MT$(@:.d=.o) -MM $(CXXFLAGS) $^ > $@

.PHONY: clean

clean:
	$(RM) $(EXECUTABLE) $(OBJECTS) $(DEPS)

help:
	echo "Available Targets: all | $(EXECUTABLE) | $(OBJECTS) | clean | help"

-include $(DEPS)

