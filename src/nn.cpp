#include <iostream>
#include "nn.hpp"
#include "spdlog/spdlog.h"
#include "simdjson.h"
#include <vector>

using namespace simdjson;

int main()
{
    spdlog::info("Start shit");
    ondemand::parser parser;
    padded_string json = padded_string::load("config.json");
    ondemand::document config = parser.iterate(json);

    std::vector <int> layers;
    for(auto now : config["layers"])
        layers.push_back(now);
    return 0;
}