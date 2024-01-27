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

struct  {
  int iterations;
  int ants;
  double alpha;
  double beta;
  double degradation_factor;
  double pheromone_update_factor;
  int randomization_seed;
} ACO_config;


template<typename T>
std::vector<Node<T>> AntTraversal(std::shared_ptr<CXXGraph::Graph> g, std::shared_ptr<Node<T>> source_node, ACO_config cfg) {

}

template<typename T>
virtual std::vector<Node<T>> ACO_TSP(int iterations, int ants, double alpha, double beta, double degradation_factor, double pheromone_update_factor, int randomization_seed) const {


}


}
#endif CXXGRAPH_TRAVELLINGSALESMAN_IMPL_H__