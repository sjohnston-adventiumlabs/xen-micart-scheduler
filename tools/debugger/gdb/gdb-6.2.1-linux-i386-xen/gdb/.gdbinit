echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir ../../gdb-6.2.1/gdb/../libiberty
dir ../../gdb-6.2.1/gdb/../bfd
dir ../../gdb-6.2.1/gdb
dir .
set prompt (top-gdb) 
