// RocketLaunchPrediction.h : Include file for standard system include files,
// or project specific include files.
#include <mlpack/core.hpp>
#include <mlpack/methods/random_forest/random_forest.hpp>
#include <mlpack/core/data/split_data.hpp>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <vector>

using json = nlohmann::json;

using namespace mlpack;
using namespace std;
#pragma once



// TODO: Reference additional headers your program requires here.
std::tuple<mlpack::RandomForest<>, vector<string>> TrainModel();
void menuOption1(mlpack::RandomForest<>& rf,int pad_choice, vector<string>& output);
std::tuple<std::vector<std::string>, std::vector<json>> BuildLaunchList();
std::string GetScheduledLaunchPrediction(mlpack::RandomForest<>& rf, const json& launch);
