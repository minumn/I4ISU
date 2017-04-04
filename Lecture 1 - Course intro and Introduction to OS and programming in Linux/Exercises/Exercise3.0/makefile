SOURCES=main.cpp part1.cpp part2.cpp
EXE=prog
CXXFLAGS=-I.
CXX = NO_ARCH

# Making for host
# > make ARCH=host
ifeq (${ARCH},host)
CXX=g++
BUILD_DIR=host
endif

# Making for target
# > make ARCH=target
ifeq (${ARCH},target)
CXX=arm-devkit-g++
BUILD_DIR=target
endif

OBJECTS=$(addprefix ${BUILD_DIR}/,$(SOURCES:.cpp=.o))
DEPS=$(addprefix ${BUILD_DIR}/,$(SOURCES:.cpp=.d))

all: ${BUILD_DIR}/$(EXE)

${BUILD_DIR}/$(EXE): $(DEPS) $(OBJECTS) # << Check the $(DEPS) new dependency
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule that describes how a .d (dependency) file is created from a .cpp file

# Similar to the assigment that you just completed %.cpp -> %.o
${BUILD_DIR}/%.d: %.cpp
	$(CXX) -MT$(@:.o=.d) -MM $(CXXFLAGS) $^ > $@

${BUILD_DIR}/%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

ifneq ($(MAKECMDGOALS),help)
ifneq ($(MAKECMDGOALS),clean)
-include $(DEPS)
endif
endif

.PHONY: clean help
clean:
	@echo
	@echo *Remember to specify ARCH*
	$(RM) $(DEPS) $(OBJECTS) ${BUILD_DIR}/$(EXE)
	@echo 

help:
	@echo 
	@echo Possible make command with either ARCH=host or ARCH=target: 
	@echo help
	@echo clean
	@echo all
	@echo ${BUILD_DIR}/$(EXE)
	@echo $(OBJECTS)
	@echo $(DEPS)
	@echo 
