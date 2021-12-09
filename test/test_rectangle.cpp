#include "gtest/gtest.h"

#include "Rectangle.h"
#include "util/Utils.h"

using namespace util;

TEST(RectangleTest, noargCtor)
{
	geom::Rect rect;

	ASSERT_EQ(rect.x, 0.0f);
	ASSERT_EQ(rect.y, 0.0f);
	ASSERT_EQ(rect.width, 0.0f);
	ASSERT_EQ(rect.height, 0.0f);
}

TEST(RectangleTest, area)
{
	{
		geom::Rect rect;
    	EXPECT_TRUE(isZero(rect.area()));
    }

    {
    	geom::Rect rect(0.0f, 0.0f, 1.0f, 10.0f);
    	EXPECT_TRUE(isZero(rect.area() - 10.0f));	
    }

    {
    	geom::Rect rect(10.0f, 10.0f, 5.0f, 5.0f);
    	EXPECT_TRUE(isZero(rect.area() - 25.0f));	
    }
}
