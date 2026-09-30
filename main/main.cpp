#include <iostream>
#include <cstdlib>
#include <memory>

#include "absl/flags/flag.h"
#include "absl/log/flags.h"
#include "ortools/base/init_google.h"
#include "ortools/base/logging.h"
#include "ortools/init/init.h"
#include "ortools/linear_solver/linear_solver.h"
using namespace std;

std::unique_ptr<MPSolver> solver(MPSolver::CreateSolver("GLOP"));


int main() {


  return 0;
}
