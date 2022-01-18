CC=g++
#CFLAGS=-I. -Wall -Wextra -Werror -lstdc++
CFLAGS = -Wall -Wextra `pkg-config nlohmann_json --cflags`
#CFLAGS += $(shell pkg-config --cflags json-c)
#LDFLAGS += $(shell pkg-config --libs json-c)
DEPS = DataStore.h

# The build target 
TARGET = main
  all: $(TARGET)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $< 

$(TARGET): main.o DataStore.o $(DEPS)
	$(CC) $(CFLAGS) main.cpp DataStore.cpp  -o main