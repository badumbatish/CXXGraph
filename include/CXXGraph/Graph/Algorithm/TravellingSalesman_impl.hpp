/***********************************************************/
/***      ______  ____  ______                 _         ***/
/***     / ___\ \/ /\ \/ / ___|_ __ __ _ _ __ | |__	     ***/
/***    | |    \  /  \  / |  _| '__/ _` | '_ \| '_ \	 ***/
/***    | |___ /  \  /  \ |_| | | | (_| | |_) | | | |    ***/
/***     \____/_/\_\/_/\_\____|_|  \__,_| .__/|_| |_|    ***/
/***                                    |_|			     ***/
/***********************************************************/
/***     Header-Only C++ Library for Graph			     ***/
/***	 Representation and Algorithms				     ***/
/***********************************************************/
/***     Author: ZigRazor ***/
/***	 E-Mail: zigrazor@gmail.com 				     ***/
/***********************************************************/
/***	 Collaboration: Jasmine Tang				     ***/
/***     Email: thisisjjasmine@gmail.com                             ***/
/***********************************************************/
/***	 License: AGPL v3.0 ***/
/***********************************************************/

#ifndef CXXGRAPH_TRAVELLINGSALESMAN_IMPL_H__
#define CXXGRAPH_TRAVELLINGSALESMAN_IMPL_H__

#pragma once
#include "CXXGraph/Graph/Graph_decl.h"



namespace CXXGraph {

template<class T>
using PheromoneMap = std::unordered_map<shared<const Node<T>>, std::unordered_map<shared<const Node<T>>, double>, nodeHash<T>>;

struct ACO_config {
  int iterations;
  int ants;
  double alpha;
  double beta;
  double degradation_factor;
  double pheromone_update_factor;
  double starting_pheromone_level;
  int randomization_seed;
};

template <typename T>
std::vector<Node<T>> AntTraversal(std::shared_ptr<CXXGraph::Graph<T>> g,
                                  std::shared_ptr<Node<T>> source_node,
                                  struct ACO_config cfg) {

  // Set of pointers to nodes
  auto node_set = g->getNodeSet();

  // A hash-table to check visited nodes
  std::unordered_map<Node<T>, bool> visited = {};
  visited[*source_node] = true;

  // The current cycle
  std::vector<Node<T>> cycle = {*source_node};

  int steps = 0;
  Node<T> current_node = *source_node;

  while (steps < node_set.size() - 1) {
    std::vector<Node<T>> jumps_candidate = {};
    std::vector<double> candidate_value = {};

    for (auto node : node_set) {
      double pheromone_level;

      if (visited.find(node) == visited.end()) {

      }

    }
  }

}
template<typename T>
PheromoneMap<T> CreateMapOfPheromone(shared<AdjacencyMatrix<T>> adjMatrix , ACO_config cfg) {
  PheromoneMap<T> pheromoneMap;

  for (auto &[nodeFrom, nodeToEdgeVec] : *adjMatrix) {
    pheromoneMap[nodeFrom] = {};

    for (auto &[nodeTo, _] : nodeToEdgeVec) {
      pheromoneMap[nodeFrom][nodeTo] = cfg.starting_pheromone_level;
    }
  }
  return pheromoneMap;
}

template <typename T>
std::vector<Node<T>> Graph<T>::ACO_TSP(int iterations, int ants,
                                               double alpha, double beta,
                                               double degradation_factor,
                                               double pheromone_update_factor,
                                               double starting_pheromone_level,
                                               int randomization_seed) const {
  // Configuration of the ACO
  ACO_config cfg;
  cfg.iterations = iterations;
  cfg.ants = ants;
  cfg.alpha = alpha;
  cfg.beta = beta;
  cfg.degradation_factor = degradation_factor;
  cfg.pheromone_update_factor = pheromone_update_factor;
  cfg.starting_pheromone_level = starting_pheromone_level;
  cfg.randomization_seed = randomization_seed;

  // Create a map of pheromone_intensity
  auto pheromoneMap = CreateMapOfPheromone(this->getAdjMatrix(), cfg);
  return {};
}



}
#endif