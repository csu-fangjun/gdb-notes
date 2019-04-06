
# Coredump with gdb

## Enable coredump

- `ulimit -a`

```
core file size          (blocks, -c) 0
data seg size           (kbytes, -d) unlimited
scheduling priority             (-e) 0
file size               (blocks, -f) unlimited
pending signals                 (-i) 3803
max locked memory       (kbytes, -l) 64
max memory size         (kbytes, -m) unlimited
open files                      (-n) 1024
pipe size            (512 bytes, -p) 8
POSIX message queues     (bytes, -q) 819200
real-time priority              (-r) 0
stack size              (kbytes, -s) 8192
cpu time               (seconds, -t) unlimited
max user processes              (-u) 3803
virtual memory          (kbytes, -v) unlimited
file locks                      (-x) unlimited
```

- `ulimit -c unlimited`

## Run with coredump

After causing `Segmentation fault (core dumped)`,
the program generates a file `core` in the current directory.

Then run with `gdb <program> core`

- `bt` to show the backtrace information
- `frame 0` is the current function that causes the segmentation fault
- `frame 1` is the function that calls the current function

