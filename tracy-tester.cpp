#include "Tracy.hpp"

#include <iostream>
#include <chrono>
#include <random>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    for (;;)
    {
        ZoneScopedN("Test Scope");
        std::this_thread::sleep_for(1500ms);
    }
    return 0;
}