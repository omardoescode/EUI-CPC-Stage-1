#pragma once
#include <chrono>
#include <iostream>
class timer {
private:
  std::chrono::time_point<std::chrono::high_resolution_clock> startPoint;
  bool has_stopped = false;

public:
  timer() { startPoint = std::chrono::high_resolution_clock::now(); }

  ~timer() {
    if (!has_stopped)
      Stop();
  }

  void re_enable() { has_stopped = true; }

  void Stop() {
    auto endPoint = std::chrono::high_resolution_clock::now();
    auto start =
        std::chrono::time_point_cast<std::chrono::microseconds>(startPoint)
            .time_since_epoch()
            .count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endPoint)
                   .time_since_epoch()
                   .count();

    auto duration = end - start;
    double ms = duration * .001;

    std::cout << duration << " us (" << ms << " ms)" << std::endl;
    has_stopped = true;
  }
};
