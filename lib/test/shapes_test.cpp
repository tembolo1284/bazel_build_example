#include <gtest/gtest.h>
#include "../include/Point.hpp"
#include "../include/Line.hpp"
#include "../include/Circle.hpp"
#include <cmath>

// Test case for Point class
TEST(PointTest, DistanceTest) {
    // Create points with coordinates (1, 2) and (3, 4)
    Point p1(1, 2);
    Point p2(3, 4);

    // Test the Distance() function
    double expected_distance = std::sqrt(2 * 2 + 2 * 2);
    ASSERT_DOUBLE_EQ(expected_distance, p1.Distance(p2));

    // Test the Distance() function for the origin
    double origin_distance = std::sqrt(1 * 1 + 2 * 2);
    ASSERT_DOUBLE_EQ(origin_distance, p1.Distance());
}

// Test case for Line class
TEST(LineTest, SlopeTest) {
    // Create points with coordinates (2, 3) and (5, 8)
    Point p1(2, 3);
    Point p2(5, 8);

    // Create a line passing through these points
    Line line(p1, p2);

    // Test the slope() function
    double expected_distance = std::sqrt((3 * 3) + (5 * 5));
    ASSERT_DOUBLE_EQ(expected_distance, line.Length());
}

// Test case for Circle class
TEST(CircleTest, RadiusTest) {
    Point p(5,6);
    // Create a circle with center at (5, 6) and radius 3.0
    Circle c(3.0, p);

    // Test the rad() function
    ASSERT_EQ(3.0, c.rad());
}
