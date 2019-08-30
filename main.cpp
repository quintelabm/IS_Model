#include "IS_Model.h"

using namespace std;

int main(){
  // simulation definitions
  double simdefs[6] = {0,1,30,720,2,2};
  IS_Model* model = new IS_Model(simdefs);
  //model parameters of interest

  model->solve();//solve
  return 0;
}
