#ifndef TRAININGDATA_HPP
#define TRAININGDATA_HPP

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class TrainingData {
public:
    TrainingData(const string filename);
    bool isEof(void);
    void getTopology(vector<unsigned> &topology);

    unsigned getNextInputs(vector<double> &inputVals);
    unsigned getTargetOutputs(vector<double> &targetOutputVals);

private:
    ifstream m_trainingDataFile;
};

#endif