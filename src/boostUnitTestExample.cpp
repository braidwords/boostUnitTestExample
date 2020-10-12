
/* //BOOST_TEST_MODULE macro is used to give a name to our test which will be used further */
#define BOOST_TEST_MODULE My Demo test
/* This includes all the Unit Test Framework in a "header-only" mode; it even defines function main, which will call the subsequently defined test cases.*/
#include <boost/test/unit_test.hpp> //	

/* This declares a test case named as first_test */
BOOST_AUTO_TEST_CASE(first_test) 
{
    int i = 1;
    BOOST_TEST(i);
    BOOST_TEST(i == 2); 
}
/* This declares another test case named as first_test */
BOOST_AUTO_TEST_CASE(simple_test) {
    BOOST_CHECK_EQUAL(2 + 2, 4);
} 

/*Test cases test1 and test2 are put together in Test Suite suite1*/
BOOST_AUTO_TEST_SUITE(suite1)

BOOST_AUTO_TEST_CASE(test1) {
    BOOST_CHECK_EQUAL(2 + 2, 4);
}

BOOST_AUTO_TEST_CASE(test2) {
    BOOST_CHECK_EQUAL(2 * 2, 4);
}

BOOST_AUTO_TEST_SUITE_END()
