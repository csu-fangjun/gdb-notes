# How to use GDB

## Compile the program

```
gcc -g -o test test.c
```

## Start GDB

### Method 1

```
$ gdb test
```

### Method 2

```
$ gdb
(gdb) file test
```

## Run the program

```
break main
r
```

## Breakpoints

- `help break`
- `break test.c:6`, break at line 6 of file `test.c`
- ``
