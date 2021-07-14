//
// Created by Duzhong Chen on 2021/7/14.
//

#include <iostream>
#include <gtest/gtest.h>
#include <UString.h>

TEST(UString, Split) {
    UString content(u"a|b|c|d");
    auto slices = content.split(u"|");
    EXPECT_EQ(slices.size(), 4);
    EXPECT_EQ(slices[0].toStdString(), "a");
    EXPECT_EQ(slices[1].toStdString(), "b");
    EXPECT_EQ(slices[2].toStdString(), "c");
    EXPECT_EQ(slices[3].toStdString(), "d");
}
