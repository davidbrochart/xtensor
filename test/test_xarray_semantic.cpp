#include "gtest/gtest.h"
#include "xarray/xarray.hpp"
#include "test_xsemantic.hpp"

namespace qs
{
    TEST(xarray_semantic, a_plus_b)
    {
        operation_tester<std::plus<>> tester;

        {
            SCOPED_TRACE("row_major + row_major");
            xarray<int> b = tester.a + tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major + column_major");
            xarray<int> b = tester.a + tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major + central_major");
            xarray<int> b = tester.a + tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major + unit_major");
            xarray<int> b = tester.a + tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, a_minus_b)
    {
        operation_tester<std::minus<>> tester;

        {
            SCOPED_TRACE("row_major - row_major");
            xarray<int> b = tester.a - tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major - column_major");
            xarray<int> b = tester.a - tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major - central_major");
            xarray<int> b = tester.a - tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major - unit_major");
            xarray<int> b = tester.a - tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, a_times_b)
    {
        operation_tester<std::multiplies<>> tester;

        {
            SCOPED_TRACE("row_major * row_major");
            xarray<int> b = tester.a * tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major * column_major");
            xarray<int> b = tester.a * tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major * central_major");
            xarray<int> b = tester.a * tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major * unit_major");
            xarray<int> b = tester.a * tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, a_divide_by_b)
    {
        operation_tester<std::divides<>> tester;

        {
            SCOPED_TRACE("row_major / row_major");
            xarray<int> b = tester.a / tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major / column_major");
            xarray<int> b = tester.a / tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major / central_major");
            xarray<int> b = tester.a / tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major / unit_major");
            xarray<int> b = tester.a / tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, assign_a_plus_b)
    {
        operation_tester<std::plus<>> tester;

        {
            SCOPED_TRACE("row_major + row_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a + tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major + column_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a + tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major + central_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a + tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major + unit_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a + tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, assign_a_minus_b)
    {
        operation_tester<std::minus<>> tester;

        {
            SCOPED_TRACE("row_major - row_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a - tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major - column_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a - tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major - central_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a - tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major - unit_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a - tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, assign_a_multiplies_b)
    {
        operation_tester<std::multiplies<>> tester;

        {
            SCOPED_TRACE("row_major * row_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a * tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major * column_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a * tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major * central_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a * tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major * unit_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a * tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }

    TEST(xarray_semantic, assign_a_divides_by_b)
    {
        operation_tester<std::divides<>> tester;

        {
            SCOPED_TRACE("row_major / row_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a / tester.ra;
            EXPECT_EQ(tester.res_rr, b);
        }

        {
            SCOPED_TRACE("row_major / column_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a / tester.ca;
            EXPECT_EQ(tester.res_rc, b);
        }

        {
            SCOPED_TRACE("row_major / central_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a / tester.cta;
            EXPECT_EQ(tester.res_rct, b);
        }

        {
            SCOPED_TRACE("row_major / unit_major");
            xarray<int> b(tester.ca.shape(), 0);
            b = tester.a / tester.ua;
            EXPECT_EQ(tester.res_ru, b);
        }
    }
}

