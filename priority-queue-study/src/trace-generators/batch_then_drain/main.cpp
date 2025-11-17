//
// Created by samue on 11/14/2025.
//

#include "../../../utils/TraceConfig.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <string>


void generateTrace(const unsigned seed,
    const std::size_t n,
    TraceConfig &config,
    std::uniform_int_distribution<long long> &dist,
    std::mt19937& gen ) {

    // create and open the output file name
    auto outputFileName = config.makeTraceFileName(seed, n);
    std::cout << "File name: " << outputFileName << std::endl;
    std::ofstream out(outputFileName.c_str());
    if (!out.is_open()) {
        std::cerr << "Failed to open file " << outputFileName << std::endl;
        exit(1);
    }
    out << config.profileName << " " << n << " " << seed << std::endl;

    // Batch: Generate N inserts.
    unsigned id = 0;        // id serves as a tiebreaker. Don't use the loop variable for
    // this purpose because we have multiple loops and could
    // accidentally generate duplicate IDs.
    int spaceBeforeNumber = 10;
    for (unsigned i = 0; i < n; ++i) {
        out << "I " << std::setw(spaceBeforeNumber) << dist(gen) << std::setw(spaceBeforeNumber) << id++ << "\n";
    }
    // Drain: Generate N extract-mins.
    for (unsigned i = 0; i < n; ++i) {
        out << "E\n";
    }

    out.close();
}



int main() {

    // TraceConfig provides pre-configured values such as N and seed
    TraceConfig config(std::string("batch_then_drain"));
    for (auto seed: config.seeds) {  // currently, we are using one seed only.
        std::mt19937 rng(seed);   // create a random-number generator using "seed"

        for (auto n: config.Ns) {
            // Unlike Huffman, we don't want duplicates.
            // Key range: 1 to N^2
            const long long key_min = 1;
            const long long key_max = static_cast<long long>(n) * n;
            std::uniform_int_distribution<long long> dist(key_min, key_max);

            generateTrace(seed, n, config, dist, rng);
        }
    }

    return 0;
}