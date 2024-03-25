
$ cmake -S . -B build
-- The C compiler identification is GNU 13.2.0
-- The CXX compiler identification is GNU 13.2.0
c-- Detecting C compiler ABI info
d-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
 -- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found the following ICU libraries:
--   i18n (required): /usr/lib/x86_64-linux-gnu/libicui18n.so
-- Found ICU: /usr/include (found version "74.2") 
-- Configuring done (0.3s)
-- Generating done (0.0s)
-- Build files have been written to: build
$ cd build/
$ make
[ 50%] Building CXX object CMakeFiles/ICU_Lib.dir/my_library.cpp.o
[100%] Linking CXX shared library libICU_Lib.so
[100%] Built target ICU_Lib
$ ldd libICU_Lib.so
        linux-vdso.so.1 (0x00007fffe5475000)
        libstdc++.so.6 => /lib/x86_64-linux-gnu/libstdc++.so.6 (0x00007f921da00000)
        libgcc_s.so.1 => /lib/x86_64-linux-gnu/libgcc_s.so.1 (0x00007f921dcfa000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f921d81f000)
        libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f921d73d000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f921dd45000)

