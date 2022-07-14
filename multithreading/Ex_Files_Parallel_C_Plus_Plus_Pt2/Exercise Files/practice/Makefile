CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = basic_thread_example8
SRC = basic_thread_example8.cpp
LDLIBS = 

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(LDLIBS) -o $(TARGET) 

.PHONY: clean
clean: 
	rm -f $(TARGET)