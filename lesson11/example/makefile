mCXX = clang++
CXXFLAGS = -Wall -g -std=c++17
SOURCES = $(wildcard 11*.cpp)
EXECUTABLES = $(SOURCES:.cpp=)

all: $(EXECUTABLES)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

