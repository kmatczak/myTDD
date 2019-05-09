GTEST_PATH = ../googletest/googletest
SOURCES = ../mediator/mediator.c mediator_test.cpp $(GTEST_PATH)/src/gtest-all.cc
OUT = mediator_test

all: $(OUT) run

$(OUT):
	g++  $(SOURCES) -I ../mediator -I $(GTEST_PATH)/include -I $(GTEST_PATH) -lpthread -o $@

run:
	./$(OUT)

clean:
	rm -f $(OUT)

