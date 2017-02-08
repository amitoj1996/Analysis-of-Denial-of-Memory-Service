# Analysis-of-Denial-of-Memory-Service
This is my first project. It contains two algorithms that will stress your RAM and measure it's impact on multi-core CPU's performance. Stream and Random are the name of two applications. Stream is a memory intensive application as it will access the memory sequentially therefore it's memory access requests will be prioritized by the DRAM memory controller. Random is not memory intensive as it will not access the memory sequentially. Use a compiler like dev-c++ to make a .exe file of both the programs and execute both the .exe files together. If prompted with an error while compiling, go to tools->compiler options and enter '-Wl,--stack,10000777216' command in while calling the compiler section. This will increase the default stack size to 10000777216 bytes. 
