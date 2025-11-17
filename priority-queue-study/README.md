Samuel Strong
005831181
https://github.com/ViolinVirtuoso/Project-5

Collaboration & Sources:
I talked a little with my classmates, but used Claude for the most part.
After reading the documents you gave me (framework and empirical analysis),
I used Claude to summarize the material to further solidify it in my head.
I then also had no idea how to do commands in the command line to run anything, let alone a generator or a harness.
So I used Claude for that.
Other than that, the coding was very straightforward.

Implementation Details:
In previous projects, I've simply listed all files I've coded.
However, there is a ridiculous number of files in this project.
I did NOT want to brute force this section, so what follows comes straight from Claude:

priority-queue-study/
├── src/
│   ├── harness/                    # Timing harness
│   │   ├── main.cpp                # Main timing program
│   │   ├── Operation.hpp           # Operation definitions
│   │   ├── RunMetaData.hpp         # Trace metadata
│   │   └── RunResults.hpp          # Results structure
│   ├── trace-generators/
│   │   ├── huffman_coding/         # Huffman profile generator
│   │   └── batch_then_drain/       # Batch-then-drain generator
│   │       └── main.cpp            # Generator implementation
│   └── implementations/            # Four PQ implementations
│       ├── BinaryHeapInVector/     # Binary heap
│       ├── BinomialQueues/         # Binomial queues
│       ├── LinearBaseLine/         # Linear baseline
│       └── Oracle/                 # Quadratic oracle (N²)
├── traces/
│   ├── huffman_coding/             # Huffman trace files
│   └── batch_then_drain/           # Batch-then-drain trace files
├── csvs/                           # Timing results (CSV format)
├── charts/                         # HTML plotting tools
├── utils/                          # Shared utilities
└── CMakeLists.txt                  # Build configuration

This is actually a pretty cool structure, and I might use it for future README's.

Testing & Status:
It works!

I think my main issue with this project was the fact that the given project didn't work on my Windows laptop.
It took me a ridiculously long time to get it to work on here.
The rest of the project was relatively simple.

Here are the commands you need to run the generator and run the harness (assuming you're in the project root directory):
.\cmake-build-debug\batch_then_drain_trace.exe
.\cmake-build-debug\harness.exe

Here's the output of the batch_then_drain_trace configuration:
"C:\Users\samue\Dropbox\Data Structures\priority-queue-study\cmake-build-debug\batch_then_drain_trace.exe"
File name: ../../../traces/batch_then_drain/batch_then_drain_N_13_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_1024_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_2048_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_4096_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_8192_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_16384_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_32768_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_65536_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_131072_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_262144_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_524288_S_23.trace
File name: ../../../traces/batch_then_drain/batch_then_drain_N_1048576_S_23.trace

Process finished with exit code 0


And here's the output of the Harness configuration:
"C:\Users\samue\Dropbox\Data Structures\priority-queue-study\cmake-build-debug\harness.exe"
Starting the throw-away run for N = 1024
Run 0 for N = 1024
Run 1 for N = 1024
Run 2 for N = 1024
Run 3 for N = 1024
Run 4 for N = 1024
Run 5 for N = 1024
Run 6 for N = 1024
Starting the throw-away run for N = 1024
Run 0 for N = 1024
Run 1 for N = 1024
Run 2 for N = 1024
Run 3 for N = 1024
Run 4 for N = 1024
Run 5 for N = 1024
Run 6 for N = 1024
Starting the throw-away run for N = 1024
Run 0 for N = 1024
Run 1 for N = 1024
Run 2 for N = 1024
Run 3 for N = 1024
Run 4 for N = 1024
Run 5 for N = 1024
Run 6 for N = 1024
Starting the throw-away run for N = 1024
Run 0 for N = 1024
Run 1 for N = 1024
Run 2 for N = 1024
Run 3 for N = 1024
Run 4 for N = 1024
Run 5 for N = 1024
Run 6 for N = 1024
Starting the throw-away run for N = 1048576
Run 0 for N = 1048576
Run 1 for N = 1048576
Run 2 for N = 1048576
Run 3 for N = 1048576
Run 4 for N = 1048576
Run 5 for N = 1048576
Run 6 for N = 1048576
Starting the throw-away run for N = 1048576
Run 0 for N = 1048576
Run 1 for N = 1048576
Run 2 for N = 1048576
Run 3 for N = 1048576
Run 4 for N = 1048576
Run 5 for N = 1048576
Run 6 for N = 1048576
Starting the throw-away run for N = 1048576
Run 0 for N = 1048576
Run 1 for N = 1048576
Run 2 for N = 1048576
Run 3 for N = 1048576
Run 4 for N = 1048576
Run 5 for N = 1048576
Run 6 for N = 1048576
Starting the throw-away run for N = 131072
Run 0 for N = 131072
Run 1 for N = 131072
Run 2 for N = 131072
Run 3 for N = 131072
Run 4 for N = 131072
Run 5 for N = 131072
Run 6 for N = 131072
Starting the throw-away run for N = 131072
Run 0 for N = 131072
Run 1 for N = 131072
Run 2 for N = 131072
Run 3 for N = 131072
Run 4 for N = 131072
Run 5 for N = 131072
Run 6 for N = 131072
Starting the throw-away run for N = 131072
Run 0 for N = 131072
Run 1 for N = 131072
Run 2 for N = 131072
Run 3 for N = 131072
Run 4 for N = 131072
Run 5 for N = 131072
Run 6 for N = 131072
Starting the throw-away run for N = 13
Run 0 for N = 13
Run 1 for N = 13
Run 2 for N = 13
Run 3 for N = 13
Run 4 for N = 13
Run 5 for N = 13
Run 6 for N = 13
Starting the throw-away run for N = 13
Run 0 for N = 13
Run 1 for N = 13
Run 2 for N = 13
Run 3 for N = 13
Run 4 for N = 13
Run 5 for N = 13
Run 6 for N = 13
Starting the throw-away run for N = 13
Run 0 for N = 13
Run 1 for N = 13
Run 2 for N = 13
Run 3 for N = 13
Run 4 for N = 13
Run 5 for N = 13
Run 6 for N = 13
Starting the throw-away run for N = 13
Run 0 for N = 13
Run 1 for N = 13
Run 2 for N = 13
Run 3 for N = 13
Run 4 for N = 13
Run 5 for N = 13
Run 6 for N = 13
Starting the throw-away run for N = 16384
Run 0 for N = 16384
Run 1 for N = 16384
Run 2 for N = 16384
Run 3 for N = 16384
Run 4 for N = 16384
Run 5 for N = 16384
Run 6 for N = 16384
Starting the throw-away run for N = 16384
Run 0 for N = 16384
Run 1 for N = 16384
Run 2 for N = 16384
Run 3 for N = 16384
Run 4 for N = 16384
Run 5 for N = 16384
Run 6 for N = 16384
Starting the throw-away run for N = 16384
Run 0 for N = 16384
Run 1 for N = 16384
Run 2 for N = 16384
Run 3 for N = 16384
Run 4 for N = 16384
Run 5 for N = 16384
Run 6 for N = 16384
Starting the throw-away run for N = 16384
Run 0 for N = 16384
Run 1 for N = 16384
Run 2 for N = 16384
Run 3 for N = 16384
Run 4 for N = 16384
Run 5 for N = 16384
Run 6 for N = 16384
Starting the throw-away run for N = 2048
Run 0 for N = 2048
Run 1 for N = 2048
Run 2 for N = 2048
Run 3 for N = 2048
Run 4 for N = 2048
Run 5 for N = 2048
Run 6 for N = 2048
Starting the throw-away run for N = 2048
Run 0 for N = 2048
Run 1 for N = 2048
Run 2 for N = 2048
Run 3 for N = 2048
Run 4 for N = 2048
Run 5 for N = 2048
Run 6 for N = 2048
Starting the throw-away run for N = 2048
Run 0 for N = 2048
Run 1 for N = 2048
Run 2 for N = 2048
Run 3 for N = 2048
Run 4 for N = 2048
Run 5 for N = 2048
Run 6 for N = 2048
Starting the throw-away run for N = 2048
Run 0 for N = 2048
Run 1 for N = 2048
Run 2 for N = 2048
Run 3 for N = 2048
Run 4 for N = 2048
Run 5 for N = 2048
Run 6 for N = 2048
Starting the throw-away run for N = 262144
Run 0 for N = 262144
Run 1 for N = 262144
Run 2 for N = 262144
Run 3 for N = 262144
Run 4 for N = 262144
Run 5 for N = 262144
Run 6 for N = 262144
Starting the throw-away run for N = 262144
Run 0 for N = 262144
Run 1 for N = 262144
Run 2 for N = 262144
Run 3 for N = 262144
Run 4 for N = 262144
Run 5 for N = 262144
Run 6 for N = 262144
Starting the throw-away run for N = 262144
Run 0 for N = 262144
Run 1 for N = 262144
Run 2 for N = 262144
Run 3 for N = 262144
Run 4 for N = 262144
Run 5 for N = 262144
Run 6 for N = 262144
Starting the throw-away run for N = 32768
Run 0 for N = 32768
Run 1 for N = 32768
Run 2 for N = 32768
Run 3 for N = 32768
Run 4 for N = 32768
Run 5 for N = 32768
Run 6 for N = 32768
Starting the throw-away run for N = 32768
Run 0 for N = 32768
Run 1 for N = 32768
Run 2 for N = 32768
Run 3 for N = 32768
Run 4 for N = 32768
Run 5 for N = 32768
Run 6 for N = 32768
Starting the throw-away run for N = 32768
Run 0 for N = 32768
Run 1 for N = 32768
Run 2 for N = 32768
Run 3 for N = 32768
Run 4 for N = 32768
Run 5 for N = 32768
Run 6 for N = 32768
Starting the throw-away run for N = 32768
Run 0 for N = 32768
Run 1 for N = 32768
Run 2 for N = 32768
Run 3 for N = 32768
Run 4 for N = 32768
Run 5 for N = 32768
Run 6 for N = 32768
Starting the throw-away run for N = 4096
Run 0 for N = 4096
Run 1 for N = 4096
Run 2 for N = 4096
Run 3 for N = 4096
Run 4 for N = 4096
Run 5 for N = 4096
Run 6 for N = 4096
Starting the throw-away run for N = 4096
Run 0 for N = 4096
Run 1 for N = 4096
Run 2 for N = 4096
Run 3 for N = 4096
Run 4 for N = 4096
Run 5 for N = 4096
Run 6 for N = 4096
Starting the throw-away run for N = 4096
Run 0 for N = 4096
Run 1 for N = 4096
Run 2 for N = 4096
Run 3 for N = 4096
Run 4 for N = 4096
Run 5 for N = 4096
Run 6 for N = 4096
Starting the throw-away run for N = 4096
Run 0 for N = 4096
Run 1 for N = 4096
Run 2 for N = 4096
Run 3 for N = 4096
Run 4 for N = 4096
Run 5 for N = 4096
Run 6 for N = 4096
Starting the throw-away run for N = 524288
Run 0 for N = 524288
Run 1 for N = 524288
Run 2 for N = 524288
Run 3 for N = 524288
Run 4 for N = 524288
Run 5 for N = 524288
Run 6 for N = 524288
Starting the throw-away run for N = 524288
Run 0 for N = 524288
Run 1 for N = 524288
Run 2 for N = 524288
Run 3 for N = 524288
Run 4 for N = 524288
Run 5 for N = 524288
Run 6 for N = 524288
Starting the throw-away run for N = 524288
Run 0 for N = 524288
Run 1 for N = 524288
Run 2 for N = 524288
Run 3 for N = 524288
Run 4 for N = 524288
Run 5 for N = 524288
Run 6 for N = 524288
Starting the throw-away run for N = 65536
Run 0 for N = 65536
Run 1 for N = 65536
Run 2 for N = 65536
Run 3 for N = 65536
Run 4 for N = 65536
Run 5 for N = 65536
Run 6 for N = 65536
Starting the throw-away run for N = 65536
Run 0 for N = 65536
Run 1 for N = 65536
Run 2 for N = 65536
Run 3 for N = 65536
Run 4 for N = 65536
Run 5 for N = 65536
Run 6 for N = 65536
Starting the throw-away run for N = 65536
Run 0 for N = 65536
Run 1 for N = 65536
Run 2 for N = 65536
Run 3 for N = 65536
Run 4 for N = 65536
Run 5 for N = 65536
Run 6 for N = 65536
Starting the throw-away run for N = 8192
Run 0 for N = 8192
Run 1 for N = 8192
Run 2 for N = 8192
Run 3 for N = 8192
Run 4 for N = 8192
Run 5 for N = 8192
Run 6 for N = 8192
Starting the throw-away run for N = 8192
Run 0 for N = 8192
Run 1 for N = 8192
Run 2 for N = 8192
Run 3 for N = 8192
Run 4 for N = 8192
Run 5 for N = 8192
Run 6 for N = 8192
Starting the throw-away run for N = 8192
Run 0 for N = 8192
Run 1 for N = 8192
Run 2 for N = 8192
Run 3 for N = 8192
Run 4 for N = 8192
Run 5 for N = 8192
Run 6 for N = 8192
Starting the throw-away run for N = 8192
Run 0 for N = 8192
Run 1 for N = 8192
Run 2 for N = 8192
Run 3 for N = 8192
Run 4 for N = 8192
Run 5 for N = 8192
Run 6 for N = 8192
impl,profile,trace_path,N,seed,elapsed_ms,ops_total,inserts,findmins,deletemins,extractmins
quadratic_oracle,batch_then_drain,batch_then_drain_N_1024_S_23.trace,1024,23,12.7423,2048,1024,0,0,1024
binary_heap,batch_then_drain,batch_then_drain_N_1024_S_23.trace,1024,23,0.6129,2048,1024,0,0,1024
binomial_queue,batch_then_drain,batch_then_drain_N_1024_S_23.trace,1024,23,2.054,2048,1024,0,0,1024
linear_base,batch_then_drain,batch_then_drain_N_1024_S_23.trace,1024,23,0.059,2048,1024,0,0,1024
binary_heap,batch_then_drain,batch_then_drain_N_1048576_S_23.trace,1048576,23,0.0001,0,0,0,0,0
binomial_queue,batch_then_drain,batch_then_drain_N_1048576_S_23.trace,1048576,23,0.0001,0,0,0,0,0
linear_base,batch_then_drain,batch_then_drain_N_1048576_S_23.trace,1048576,23,0.0001,0,0,0,0,0
binary_heap,batch_then_drain,batch_then_drain_N_131072_S_23.trace,131072,23,0.0005,2,2,0,0,0
binomial_queue,batch_then_drain,batch_then_drain_N_131072_S_23.trace,131072,23,0.0006,2,2,0,0,0
linear_base,batch_then_drain,batch_then_drain_N_131072_S_23.trace,131072,23,0.0003,2,2,0,0,0
quadratic_oracle,batch_then_drain,batch_then_drain_N_13_S_23.trace,13,23,0.004,26,13,0,0,13
binary_heap,batch_then_drain,batch_then_drain_N_13_S_23.trace,13,23,0.0029,26,13,0,0,13
binomial_queue,batch_then_drain,batch_then_drain_N_13_S_23.trace,13,23,0.0147,26,13,0,0,13
linear_base,batch_then_drain,batch_then_drain_N_13_S_23.trace,13,23,0.0013,26,13,0,0,13
quadratic_oracle,batch_then_drain,batch_then_drain_N_16384_S_23.trace,16384,23,4140.47,32768,16384,0,0,16384
binary_heap,batch_then_drain,batch_then_drain_N_16384_S_23.trace,16384,23,14.1306,32768,16384,0,0,16384
binomial_queue,batch_then_drain,batch_then_drain_N_16384_S_23.trace,16384,23,48.567,32768,16384,0,0,16384
linear_base,batch_then_drain,batch_then_drain_N_16384_S_23.trace,16384,23,1.1914,32768,16384,0,0,16384
quadratic_oracle,batch_then_drain,batch_then_drain_N_2048_S_23.trace,2048,23,97.7628,4096,2048,0,0,2048
binary_heap,batch_then_drain,batch_then_drain_N_2048_S_23.trace,2048,23,1.2575,4096,2048,0,0,2048
binomial_queue,batch_then_drain,batch_then_drain_N_2048_S_23.trace,2048,23,4.2142,4096,2048,0,0,2048
linear_base,batch_then_drain,batch_then_drain_N_2048_S_23.trace,2048,23,0.1003,4096,2048,0,0,2048
binary_heap,batch_then_drain,batch_then_drain_N_262144_S_23.trace,262144,23,0.0001,0,0,0,0,0
binomial_queue,batch_then_drain,batch_then_drain_N_262144_S_23.trace,262144,23,0.0001,0,0,0,0,0
linear_base,batch_then_drain,batch_then_drain_N_262144_S_23.trace,262144,23,0.0002,0,0,0,0,0
quadratic_oracle,batch_then_drain,batch_then_drain_N_32768_S_23.trace,32768,23,17902.6,65536,32768,0,0,32768
binary_heap,batch_then_drain,batch_then_drain_N_32768_S_23.trace,32768,23,58.43,65536,32768,0,0,32768
binomial_queue,batch_then_drain,batch_then_drain_N_32768_S_23.trace,32768,23,158.533,65536,32768,0,0,32768
linear_base,batch_then_drain,batch_then_drain_N_32768_S_23.trace,32768,23,3.9596,65536,32768,0,0,32768
quadratic_oracle,batch_then_drain,batch_then_drain_N_4096_S_23.trace,4096,23,273.957,8192,4096,0,0,4096
binary_heap,batch_then_drain,batch_then_drain_N_4096_S_23.trace,4096,23,2.6836,8192,4096,0,0,4096
binomial_queue,batch_then_drain,batch_then_drain_N_4096_S_23.trace,4096,23,8.8056,8192,4096,0,0,4096
linear_base,batch_then_drain,batch_then_drain_N_4096_S_23.trace,4096,23,0.2172,8192,4096,0,0,4096
binary_heap,batch_then_drain,batch_then_drain_N_524288_S_23.trace,524288,23,0.0001,0,0,0,0,0
binomial_queue,batch_then_drain,batch_then_drain_N_524288_S_23.trace,524288,23,0,0,0,0,0,0
linear_base,batch_then_drain,batch_then_drain_N_524288_S_23.trace,524288,23,0.0001,0,0,0,0,0
binary_heap,batch_then_drain,batch_then_drain_N_65536_S_23.trace,65536,23,0.0002,2,2,0,0,0
binomial_queue,batch_then_drain,batch_then_drain_N_65536_S_23.trace,65536,23,0.001,2,2,0,0,0
linear_base,batch_then_drain,batch_then_drain_N_65536_S_23.trace,65536,23,0.0002,2,2,0,0,0
quadratic_oracle,batch_then_drain,batch_then_drain_N_8192_S_23.trace,8192,23,1199.47,16384,8192,0,0,8192
binary_heap,batch_then_drain,batch_then_drain_N_8192_S_23.trace,8192,23,12.1274,16384,8192,0,0,8192
binomial_queue,batch_then_drain,batch_then_drain_N_8192_S_23.trace,8192,23,39.5971,16384,8192,0,0,8192
linear_base,batch_then_drain,batch_then_drain_N_8192_S_23.trace,8192,23,0.4048,16384,8192,0,0,8192

Process finished with exit code 0
