/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}
TEST(PracticeTest, sleep_every_night){
	Practice obj;
	int sleeping[7] = {8,8,8,8,7,7,8};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,nullptr);	
}
TEST(PracticeTest, sleep_no_night){
	Practice obj;
	int sleeping[7] = {0,0,0,0,0,0,0};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[0]);	
}
TEST(PracticeTest, skip_first_night){
	Practice obj;
	int sleeping[7] = {0,1,2,3,4,5,6};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[0]);	
}
TEST(PracticeTest, skip_last_night){
	Practice obj;
	int sleeping[7] = {1,1,2,3,4,5,0};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[6]);	
}
TEST(PracticeTest, skip_middle_night){
	Practice obj;
	int sleeping[7] = {1,1,2,0,4,5,1};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[3]);	
}
TEST(PracticeTest, skip_middle_and_last_night){
	Practice obj;
	int sleeping[7] = {1,1,2,0,4,5,0};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[3]);	
}
TEST(PracticeTest, skip_last2_night){
	Practice obj;
	int sleeping[7] = {1,1,2,2,4,0,0};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[5]);	
}
TEST(PracticeTest, skip_second_night_and_last2){
	Practice obj;
	int sleeping[7] = {1,0,2,2,4,0,0};
    int* actual = obj.allnighter(sleeping);
    ASSERT_EQ(actual,&sleeping[1]);	
}
/*
TEST(PracticeTest, sortDescwithasc)
{
	Practice mypractice;
	int a = 1, b = 2, c = 3;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(a,2);
	ASSERT_EQ(a,1);
}
TEST(PracticeTest, sortDesczero)
{
	Practice mypractice;
	int a = 0, b = 0, c = 0;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,0);
	ASSERT_EQ(a,0);
	ASSERT_EQ(a,0);
}

TEST(PracticeTest, sortDescone)
{
	Practice mypractice;
	int a = 1, b = 1, c = 1;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,1);
	ASSERT_EQ(a,1);
	ASSERT_EQ(a,1);
}
TEST(PracticeTest, sortDesc)
{
	Practice mypractice;
	int a = 3, b = 2, c = 1;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(a,2);
	ASSERT_EQ(a,1);
}
TEST(PracticeTest, sortDescoutOrder)
{
	Practice mypractice;
	int a = 3, b = 1, c = 2;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(a,2);
	ASSERT_EQ(a,1);
}
TEST(PracticeTest, sortDescoutOrder2)
{
	Practice mypractice;
	int a = 2, b = 1, c = 3;
	mypractice.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(a,2);
	ASSERT_EQ(a,1);
}
*/