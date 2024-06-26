Dont forget to: ulimit -c <somenumber>

look into: /var/crash
           /var/lib/apport/coredump/

For some reason, if you do gdb --core=/path/to/core --exec=/path/to/exec the result might be different than gdb /path/to/exec /path/to/core
