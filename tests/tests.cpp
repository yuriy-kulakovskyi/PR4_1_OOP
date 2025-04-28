#include <gtest/gtest.h>
#include "../classes/Parallelepiped.h"

// Test for Parallelepiped
TEST(ParallelepipedTest, SurfaceAreaCalculation) {
    Parallelepiped box(2.0, 3.0, 4.0);
    EXPECT_DOUBLE_EQ(box.surface_area(), 2 * (2.0 * 3.0 + 2.0 * 4.0 + 3.0 * 4.0));
}