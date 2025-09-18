#include <gtest/gtest.h>
#include "../include/format_time.h"

TEST(FormatTimeTest, AMTimeConversion) {
    EXPECT_EQ(convertTime("8:30 am"), "08:30");
    EXPECT_EQ(convertTime("1:15 am"), "01:15");
    EXPECT_EQ(convertTime("11:45 am"), "11:45");
}

TEST(FormatTimeTest, MidnightConversion) {
    EXPECT_EQ(convertTime("12:00 am"), "00:00");
    EXPECT_EQ(convertTime("12:30 am"), "00:30");
}

TEST(FormatTimeTest, PMTimeConversion) {
    EXPECT_EQ(convertTime("1:30 pm"), "13:30");
    EXPECT_EQ(convertTime("3:15 pm"), "15:15");
    EXPECT_EQ(convertTime("11:45 pm"), "23:45");
}

TEST(FormatTimeTest, NoonConversion) {
    EXPECT_EQ(convertTime("12:00 pm"), "12:00");
    EXPECT_EQ(convertTime("12:30 pm"), "12:30");
}

TEST(FormatTimeTest, ZeroPadding) {
    EXPECT_EQ(convertTime("1:05 am"), "01:05");
    EXPECT_EQ(convertTime("9:09 pm"), "21:09");
}

TEST(FormatTimeTest, InvalidPeriod) {
    EXPECT_EQ(convertTime("8:30 invalid"), "Invalid period");
    EXPECT_EQ(convertTime("8:30 PM"), "Invalid period");
    EXPECT_EQ(convertTime("8:30 "), "Invalid period");
}

