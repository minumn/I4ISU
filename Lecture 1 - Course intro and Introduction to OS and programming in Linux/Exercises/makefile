SOURCES=main.cpp
OBJECT=${SOURCES: .cpp=.o}
EXECUTABLE=edit
CXX=g++

build: ${OBJECTS}
	${CXX} -o ${EXECUTABLES} ${OBJECTS}

main.o : main.cpp
	${CXX} -c main.cpp
