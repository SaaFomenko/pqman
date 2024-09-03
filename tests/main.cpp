#include "googletest/googletest/include/gtest/gtest.h"
// #include <iostream>
// #include <chrono>
// #include <vector>
//#include <cstring>
//#include "transform.h"
// #include "../lib/shape/shape.h"
// #include "../lib/point/point.h"
// #include "../lib/line/line.h"

namespace my
{
    //Test Line
    // Point a(1, 2, 0);
    // Point b(5, 2, 0);
    // const double ab_size = 4;

    const char* test_div = "\n----------------------------------\n";

}

template <class T>
void print_test(T val, const char* name)
{
    std::cout << my::test_div;
    std::cout << name << val;
    std::cout << my::test_div;
}

// class LineTest : public ::testing::Test
// {
//     public:
//         Line* l;
//     protected:
//         void SetUp(Point& a, Point& b) 
//         {
//             l = new Line(a, b);
//         }

//         void TearDown() override
//         {
//             delete l;
//             l = nullptr;
//         }
// };

// TEST_F(LineTest, line_size_method)
// {
//     SetUp(my::a, my::b);

//     print_test<double>(l->size(), "Calculated size line: ");

//     EXPECT_EQ(true, my::ab_size == l->size());
// }



int main(int argc, char** argv)
{
    //Shape f1(4, 1, 2, 3, 4); //cylinder
    //Shape f1(0, 1, 2, 0, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //line
    //Shape f1(1, 1, 2, 0, 5, 2, 0, 1, 4, 0, 5, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); //rectangle не работает вычисление стороны
    //Shape f1(2, 1, 2, 0, 3, 4, 0, 5, 2, 0, 3, 0, 0, 1, 2, 2, 3, 4, 2, 5, 2, 2, 3, 0, 2); //cube

    //std::cout << my::shape_to_str(f1) << '\n';

    ::testing::InitGoogleTest(&argc, argv);
    //GTest::gmock(&argc, argv);

    return RUN_ALL_TESTS();
}