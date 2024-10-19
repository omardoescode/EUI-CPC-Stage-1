# Big O Complexity Simulator

This project is a simulator designed to help you understand and explore Big O time complexity. By running different algorithms with various time complexities, you can observe how input size impacts runtime.

This simulator aims to grant you an intuition around some time complexities

# Usage

1. Download `CMake`
2. Clone the project

```sh
git clone https://github.com/omardoescode/EUI-CPC-Stage-1.git
```

3. Change directory

```sh
cd session0/code/simulator
```

4. Build the project using `CMake`

```sh
mkdir build
cmake -S . -B build
cmake --build ./build
```

After this the executable will be found in `./build/main` on UNIX-based machines or `./build/main.exe` for Windows machines

5. Run the Project

```sh
./build/main # UNIX
./build/main.exe # Windows
```

# Experiment

In complexity analysis, we are concerned with how the growth of input affect the time taken to finish the algorithm.

In this experiment, run each code in with different values of input size (referred to as `n`) and observe the change in output time.

1. `n=10000`
2. `n=100000`
3. `n=1000000`

# Findings

- O(1) Algorithm: The runtime remains constant, regardless of input size. Increasing the input size does not affect execution time.

- O(n) Algorithm: The runtime increases linearly with the input size. For instance, multiplying the input size by 10 (from 100 to 1000) roughly multiplies the execution time by 10. Similarly, increasing from 1000 to 10,000 multiplies the execution time by 10 again.

- O(n²) Algorithm: The runtime grows quadratically. Multiplying the input size by 10 results in a 100-fold increase in execution time (10²). For example, moving from an input of 100 to 1000 increases the runtime by 100 times.

- O(n³) Algorithm: The runtime grows cubically. When the input size is multiplied by 10, the execution time increases by 1000 times (10³).

- O(log n) Algorithm: The runtime increases logarithmically, meaning it grows much more slowly relative to the input size. If the input size grows from 100 to 1000, the runtime may only double or increase slightly, making it very efficient for large inputs.
