CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
SRCS = MatrixMain.cpp determinant.cpp readMatrix.cpp
HEADERS = determinant.cpp readMatrix.hpp

matrixCalc: ${SRCS} ${HEADERS}
	$(CXX) ${CXXFLAGS} ${SRCS} -o matrixCalc
