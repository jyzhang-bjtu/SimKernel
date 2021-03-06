#include "../sim_main.h"

class Kernel;

int main(int argc, char* argv[])
{
  SimControl<Kernel> simc;
  simc.simulate(argc, argv);
  return 0;
};

class Kernel
{
public:
  void initialize(Sim& sim) {};
  
  void execute(Sim& sim) {
    sim.io <<"Hello World!"<<Endl;
  };
  
  void finalize(Sim& sim) {};
};
