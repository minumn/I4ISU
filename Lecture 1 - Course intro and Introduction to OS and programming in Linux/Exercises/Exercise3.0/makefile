SOURCES=main.cpp part1.cpp part2.cpp
OBJECTS=$(SOURCES:.cpp=.o)
DEPS=$(SOURCES:.cpp=.d)
EXE=prog
CXXFLAGS=-I.
CXX = BAD

#HVORFOR BLIVER BUILD_DIR IKKE SAT?

# Making for host
# > make ARCH=host
ifeq (${ARCH},host)
CXX=g++
BUILD_DIR=build/host
BUILD_EXE=bin/target
endif

# Making for target
# > make ARCH=target
ifeq (${ARCH},target)
CXX=arm -devkit -g++
BUILD_DIR=build/target
BUILD_EXE=bin/target
endif


$(EXE): $(DEPS) $(OBJECTS) # << Check the $(DEPS) new dependency
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule that describes how a .d (dependency) file is created from a .cpp file

# Similar to the assigment that you just completed %.cpp -> %.o
%.d: %.cpp #Lavet ændring her som nok ikke er meningen
	$(CXX) -MT${BUILD_DIR }/$(@:.d=.o) -MM $(CXXFLAGS) $^ > $@
	echo ${BUILD_DIR }/$(@) | ${BUILD_EXE }

ifneq ($(MAKECMDGOALS),clean)
-include $(DEPS)
endif

.PHONY: clean
clean:
	$(RM) $(DEPS) $(OBJECTS) $(EXE)
