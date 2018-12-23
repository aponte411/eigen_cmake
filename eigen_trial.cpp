#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

int print_eigen(Eigen::MatrixX3d m)
{
    std::cout << m << std::endl;
    return 0;
}

int main()
{
    Eigen::Matrix3d test;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            test(i,j) = (i+1)*(1+j);
    }

    print_eigen(test);

    return 0;
}
