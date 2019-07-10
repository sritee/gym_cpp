
#include "envs/MountainCar.h"
#include "spaces/box.h"
#include "spaces/discrete.h"

#include <iostream>
#include <string>
#include <tuple>
#include <Eigen/Core>


using namespace std;

int main()
{
//    MountainCar b;

//    b.reset();

//    cout<<b.get_state()<<endl;
//    b.step(1)

//      Box box(6,1,1);

//      cout<<box.low<<endl;

//    cout<<a();

//      Eigen::VectorXf a;
//      a.resize(2);
//      a<<1,2;
//      cout<<a<<endl;

    Discrete disc(5);
    Box box(5,-3,1);
    cout<<box.get_upper_bound()<<endl;
    cout<<disc.sample()<<endl;

}
