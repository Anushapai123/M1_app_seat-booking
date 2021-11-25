#include "unity.h"
#include "movie.h"

#define PROJECT_NAME       "MOVIE_TICKET_BOOKING"

//prototypes
void test_insert_details(void);



void setUp()
{
}
void tearDown()
{
}

void test_insert_details(void)
{
  TEST_ASSERT_EQUAL(0, insert_details(1));
  TEST_ASSERT_EQUAL(6, insert_details(1));
}

int main(void)
{
  UNITY_BEGIN();
//Run test function for insert_details
  RUN_TEST(test_insert_details);
  
  
  return UNITY_END();
}