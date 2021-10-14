CXX       = gcc
CXX_FLAGS = -std=c11 -Wall -Werror -Wextra -Wconversion -pedantic-errors -Wstrict-prototypes
LDLIBS	  = q.c
EXEC      = main

all : $(EXEC)

.PHONY : all
$(EXEC) : $(OBJS)
	$(CXX) $(CXX_FLAGS) $(OBJS) -o $(EXEC) $(LDLIBS)


.PHONY : clean
clean :
	rm -f $(OBJS) $(EXEC)

.PHONY : rebuild
rebuild :
	$(MAKE) clean
	$(MAKE)

.PHONY : run4life
run4life : $(EXEC)
	./$(EXEC) < input-01.txt > actual-output.txt