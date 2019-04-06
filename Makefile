TARGETS := test1

CFLAGS := \
-Wall \
-Werror \
-pedantic-errors \
-g


.PHONY: all
all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	$(RM) $(TARGETS)
