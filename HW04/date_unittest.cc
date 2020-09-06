#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"

class DateTest: public ::testing::Test
{
public:
	void SetUp()
	{
		// code here will execute just before the test ensues
		first_day = Date(2018, 9, 4);
		last_day = Date(2018, 12, 11);
	}
protected:
	Date first_day;          // first day of classes
	Date last_day;           // last day of classes
};

TEST_F(DateTest, PrintDateTests)
{
	Date y2k(1999, 12, 31);              // y2k
	Date ind_day(1776, 7, 4);// US Independence
	Date best_holiday(2018, 10, 31);// Halloween
	Date epoch(0);

	std::string expected_out_1 = "1999-12-31\n";
	std::string expected_out_2 = "1776-07-04\n";
	std::string expected_out_3 = "2018-10-31\n";
	std::string expected_out_4 = "1970-01-01\n";

	testing::internal::CaptureStdout();
	y2k.PrintDate(true);
	std::string output1 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();// You must do this EVERY TIME, or else it will segfault
	ind_day.PrintDate(true);
	std::string output2 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	best_holiday.PrintDate(true);
	std::string output3 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	epoch.PrintDate(true);
	std::string output4 = testing::internal::GetCapturedStdout();

	EXPECT_EQ(output1, expected_out_1);
	EXPECT_EQ(output2, expected_out_2);
	EXPECT_EQ(output3, expected_out_3);
	EXPECT_EQ(output4, expected_out_4);
}

TEST_F(DateTest, PrintUsDateTests)
{
	Date y2k(1999, 12, 31);              // y2k
	Date ind_day(1776, 7, 4);// US Independence
	Date best_holiday(2018, 10, 31);// Halloween
	Date epoch(0);

	std::string expected_out_1 = "12-31-1999\n";
	std::string expected_out_2 = "07-04-1776\n";
	std::string expected_out_3 = "10-31-2018\n";
	std::string expected_out_4 = "01-01-1970\n";

	testing::internal::CaptureStdout();
	y2k.PrintUsDate(true);
	std::string output1 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();// You must do this EVERY TIME, or else it will segfault
	ind_day.PrintUsDate(true);
	std::string output2 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	best_holiday.PrintUsDate(true);
	std::string output3 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	epoch.PrintUsDate(true);
	std::string output4 = testing::internal::GetCapturedStdout();

	EXPECT_EQ(output1, expected_out_1);
	EXPECT_EQ(output2, expected_out_2);
	EXPECT_EQ(output3, expected_out_3);
	EXPECT_EQ(output4, expected_out_4);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline)
{
	Date y2k(1999, 12, 31);              // y2k
	Date ind_day(1776, 7, 4);// US Independence
	Date best_holiday(2018, 10, 31);// Halloween
	Date epoch(0);

	std::string expected_out_1 = "1999-12-31";
	std::string expected_out_2 = "1776-07-04";
	std::string expected_out_3 = "2018-10-31";
	std::string expected_out_4 = "1970-01-01";

	testing::internal::CaptureStdout();
	y2k.PrintDate(false);
	std::string output1 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	ind_day.PrintDate(false);
	std::string output2 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	best_holiday.PrintDate(false);
	std::string output3 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	epoch.PrintDate(false);
	std::string output4 = testing::internal::GetCapturedStdout();

	EXPECT_EQ(output1, expected_out_1);
	EXPECT_EQ(output2, expected_out_2);
	EXPECT_EQ(output3, expected_out_3);
	EXPECT_EQ(output4, expected_out_4);
}

TEST_F(DateTest, PrintUsDateTestsWithoutNewline)
{
	Date y2k(1999, 12, 31);              // y2k
	Date ind_day(1776, 7, 4);// US Independence
	Date best_holiday(2018, 10, 31);// Halloween
	Date epoch(0);

	std::string expected_out_1 = "12-31-1999";
	std::string expected_out_2 = "07-04-1776";
	std::string expected_out_3 = "10-31-2018";
	std::string expected_out_4 = "01-01-1970";

	testing::internal::CaptureStdout();
	y2k.PrintUsDate(false);
	std::string output1 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	ind_day.PrintUsDate(false);
	std::string output2 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	best_holiday.PrintUsDate(false);
	std::string output3 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	epoch.PrintUsDate(false);
	std::string output4 = testing::internal::GetCapturedStdout();

	EXPECT_EQ(output1, expected_out_1);
	EXPECT_EQ(output2, expected_out_2);
	EXPECT_EQ(output3, expected_out_3);
	EXPECT_EQ(output4, expected_out_4);
}

/**
 *
 * Note, this is the only provided test case which actually uses our test fixture
 *
 * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
 *
 */

TEST_F(DateTest, DaysBetweenTests)
{
	EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
	EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
	EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";

	Date janStart(2000, 1, 1);
	Date decEnd(2000, 12, 31);
	Date ranDate(1990, 2, 20);
	EXPECT_EQ(janStart.DaysBetween(decEnd), 365) << "Days between is not calculated properly";
	EXPECT_EQ(decEnd.DaysBetween(janStart), 365) << "Days between is not calculated properly";
	EXPECT_EQ(decEnd.DaysBetween(ranDate), 3967) << "Days between is not calculated properly";

	Date epoch(0);
	EXPECT_EQ(epoch.DaysBetween(decEnd), 11322) << "Days between is not calculated properly";
}

/**
 *
 * NOPE!  Can't test PRIVATE methods
 *
 */
/*
 TEST(DateTest, ConvertFromDays) {
 Date convert_first_day = ConvertToDays(2458365);
 EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
 }
 */

TEST_F(DateTest, GetDates)
{
	Date epoch(0);
	EXPECT_EQ(epoch.GetDate(), "1970-01-01") << "GetDate() function not setup properly";
	EXPECT_EQ(epoch.GetUsDate(), "01-01-1970") << "GetUsDate() function not setup properly";

	Date janStart(2000, 1, 1);
	Date janEnd(2000, 1, 31);
	EXPECT_EQ(janStart.GetDate(), "2000-01-01") << "GetDate() function not setup properly";
	EXPECT_EQ(janStart.GetUsDate(), "01-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(janEnd.GetDate(), "2000-01-31") << "GetDate() function not setup properly";
	EXPECT_EQ(janEnd.GetUsDate(), "01-31-2000") << "GetUsDate() function not setup properly";

	Date febStart(2000, 2, 1);
	Date febEnd(2001, 2, 28);
	Date febLeap(2000, 2, 29);
	EXPECT_EQ(febStart.GetDate(), "2000-02-01") << "GetDate() function not setup properly";
	EXPECT_EQ(febStart.GetUsDate(), "02-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(febEnd.GetDate(), "2001-02-28") << "GetDate() function not setup properly";
	EXPECT_EQ(febEnd.GetUsDate(), "02-28-2001") << "GetUsDate() function not setup properly";
	EXPECT_EQ(febLeap.GetDate(), "2000-02-29") << "GetDate() function not setup properly";
	EXPECT_EQ(febLeap.GetUsDate(), "02-29-2000") << "GetUsDate() function not setup properly";

	Date marStart(2000, 3, 1);
	Date marEnd(2000, 3, 31);
	EXPECT_EQ(marStart.GetDate(), "2000-03-01") << "GetDate() function not setup properly";
	EXPECT_EQ(marStart.GetUsDate(), "03-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(marEnd.GetDate(), "2000-03-31") << "GetDate() function not setup properly";
	EXPECT_EQ(marEnd.GetUsDate(), "03-31-2000") << "GetUsDate() function not setup properly";

	Date aprStart(2000, 4, 1);
	Date aprEnd(2000, 4, 30);
	EXPECT_EQ(aprStart.GetDate(), "2000-04-01") << "GetDate() function not setup properly";
	EXPECT_EQ(aprStart.GetUsDate(), "04-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(aprEnd.GetDate(), "2000-04-30") << "GetDate() function not setup properly";
	EXPECT_EQ(aprEnd.GetUsDate(), "04-30-2000") << "GetUsDate() function not setup properly";

	Date mayStart(2000, 5, 1);
	Date mayEnd(2000, 5, 31);
	EXPECT_EQ(mayStart.GetDate(), "2000-05-01") << "GetDate() function not setup properly";
	EXPECT_EQ(mayStart.GetUsDate(), "05-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(mayEnd.GetDate(), "2000-05-31") << "GetDate() function not setup properly";
	EXPECT_EQ(mayEnd.GetUsDate(), "05-31-2000") << "GetUsDate() function not setup properly";

	Date junStart(2000, 6, 1);
	Date junEnd(2000, 6, 30);
	EXPECT_EQ(junStart.GetDate(), "2000-06-01") << "GetDate() function not setup properly";
	EXPECT_EQ(junStart.GetUsDate(), "06-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(junEnd.GetDate(), "2000-06-30") << "GetDate() function not setup properly";
	EXPECT_EQ(junEnd.GetUsDate(), "06-30-2000") << "GetUsDate() function not setup properly";

	Date julStart(2000, 7, 1);
	Date julEnd(2000, 7, 31);
	EXPECT_EQ(julStart.GetDate(), "2000-07-01") << "GetDate() function not setup properly";
	EXPECT_EQ(julStart.GetUsDate(), "07-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(julEnd.GetDate(), "2000-07-31") << "GetDate() function not setup properly";
	EXPECT_EQ(julEnd.GetUsDate(), "07-31-2000") << "GetUsDate() function not setup properly";

	Date augStart(2000, 8, 1);
	Date augEnd(2000, 8, 31);
	EXPECT_EQ(augStart.GetDate(), "2000-08-01") << "GetDate() function not setup properly";
	EXPECT_EQ(augStart.GetUsDate(), "08-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(augEnd.GetDate(), "2000-08-31") << "GetDate() function not setup properly";
	EXPECT_EQ(augEnd.GetUsDate(), "08-31-2000") << "GetUsDate() function not setup properly";

	Date sepStart(2000, 9, 1);
	Date sepEnd(2000, 9, 30);
	EXPECT_EQ(sepStart.GetDate(), "2000-09-01") << "GetDate() function not setup properly";
	EXPECT_EQ(sepStart.GetUsDate(), "09-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(sepEnd.GetDate(), "2000-09-30") << "GetDate() function not setup properly";
	EXPECT_EQ(sepEnd.GetUsDate(), "09-30-2000") << "GetUsDate() function not setup properly";

	Date octStart(2000, 10, 1);
	Date octEnd(2000, 10, 31);
	EXPECT_EQ(octStart.GetDate(), "2000-10-01") << "GetDate() function not setup properly";
	EXPECT_EQ(octStart.GetUsDate(), "10-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(octEnd.GetDate(), "2000-10-31") << "GetDate() function not setup properly";
	EXPECT_EQ(octEnd.GetUsDate(), "10-31-2000") << "GetUsDate() function not setup properly";

	Date novStart(2000, 11, 1);
	Date novEnd(2000, 11, 30);
	EXPECT_EQ(novStart.GetDate(), "2000-11-01") << "GetDate() function not setup properly";
	EXPECT_EQ(novStart.GetUsDate(), "11-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(novEnd.GetDate(), "2000-11-30") << "GetDate() function not setup properly";
	EXPECT_EQ(novEnd.GetUsDate(), "11-30-2000") << "GetUsDate() function not setup properly";

	Date decStart(2000, 12, 1);
	Date decEnd(2000, 12, 31);
	EXPECT_EQ(decStart.GetDate(), "2000-12-01") << "GetDate() function not setup properly";
	EXPECT_EQ(decStart.GetUsDate(), "12-01-2000") << "GetUsDate() function not setup properly";
	EXPECT_EQ(decEnd.GetDate(), "2000-12-31") << "GetDate() function not setup properly";
	EXPECT_EQ(decEnd.GetUsDate(), "12-31-2000") << "GetUsDate() function not setup properly";

	EXPECT_EQ((first_day).GetDate(), "2018-09-04") << "GetDate() function not setup properly";
	EXPECT_EQ((first_day).GetUsDate(), "09-04-2018") << "GetUsDate() function not setup properly";
}

TEST_F(DateTest, DaysAdded)
{

	Date epoch(0);
	EXPECT_EQ((epoch+1).GetDate(), "1970-01-02") << "operator+ function not setup properly";
	EXPECT_EQ((epoch-1).GetDate(), "1969-12-31") << "operator- function not setup properly";

	Date janStart(2000, 1, 1);
	Date janEnd(2000, 1, 31);
	EXPECT_EQ((janStart+1).GetDate(), "2000-01-02") << "operator+ function not setup properly";
	EXPECT_EQ((janStart-1).GetDate(), "1999-12-31") << "operator- function not setup properly";
	EXPECT_EQ((janEnd+1).GetDate(), "2000-02-01") << "operator+ function not setup properly";
	EXPECT_EQ((janEnd-1).GetDate(), "2000-01-30") << "operator- function not setup properly";

	Date febStart(2000, 2, 1);
	Date febEnd(2001, 2, 28);
	Date febLeap(2000, 2, 29);
	EXPECT_EQ((febStart+1).GetDate(), "2000-02-02") << "operator+ function not setup properly";
	EXPECT_EQ((febStart-1).GetDate(), "2000-01-31") << "operator- function not setup properly";
	EXPECT_EQ((febEnd+1).GetDate(), "2001-03-01") << "operator+ function not setup properly";
	EXPECT_EQ((febEnd-1).GetDate(), "2001-02-27") << "operator- function not setup properly";
	EXPECT_EQ((febLeap+1).GetDate(), "2000-03-01") << "operator+ function not setup properly";
	EXPECT_EQ((febLeap-1).GetDate(), "2000-02-28") << "operator- function not setup properly";

	Date marStart(2000, 3, 1);
	Date marNotLeap(2001, 3, 1);
	Date marEnd(2000, 3, 31);
	EXPECT_EQ((marStart+1).GetDate(), "2000-03-02") << "operator+ function not setup properly";
	EXPECT_EQ((marStart-1).GetDate(), "2000-02-29") << "operator- function not setup properly";
	EXPECT_EQ((marNotLeap-1).GetDate(), "2001-02-28") << "operator- function not setup properly";
	EXPECT_EQ((marEnd+1).GetDate(), "2000-04-01") << "operator+ function not setup properly";
	EXPECT_EQ((marEnd-1).GetDate(), "2000-03-30") << "operator- function not setup properly";

	Date aprStart(2000, 4, 1);
	Date aprEnd(2000, 4, 30);
	EXPECT_EQ((aprStart+1).GetDate(), "2000-04-02") << "operator+ function not setup properly";
	EXPECT_EQ((aprStart-1).GetDate(), "2000-03-31") << "operator- function not setup properly";
	EXPECT_EQ((aprEnd+1).GetDate(), "2000-05-01") << "operator+ function not setup properly";
	EXPECT_EQ((aprEnd-1).GetDate(), "2000-04-29") << "operator- function not setup properly";

	Date mayStart(2000, 5, 1);
	Date mayEnd(2000, 5, 31);
	EXPECT_EQ((mayStart+1).GetDate(), "2000-05-02") << "operator+ function not setup properly";
	EXPECT_EQ((mayStart-1).GetDate(), "2000-04-30") << "operator- function not setup properly";
	EXPECT_EQ((mayEnd+1).GetDate(), "2000-06-01") << "operator+ function not setup properly";
	EXPECT_EQ((mayEnd-1).GetDate(), "2000-05-30") << "operator- function not setup properly";

	Date junStart(2000, 6, 1);
	Date junEnd(2000, 6, 30);
	EXPECT_EQ((junStart+1).GetDate(), "2000-06-02") << "operator+ function not setup properly";
	EXPECT_EQ((junStart-1).GetDate(), "2000-05-31") << "operator- function not setup properly";
	EXPECT_EQ((junEnd+1).GetDate(), "2000-07-01") << "operator+ function not setup properly";
	EXPECT_EQ((junEnd-1).GetDate(), "2000-06-29") << "operator- function not setup properly";

	Date julStart(2000, 7, 1);
	Date julEnd(2000, 7, 31);
	EXPECT_EQ((julStart+1).GetDate(), "2000-07-02") << "operator+ function not setup properly";
	EXPECT_EQ((julStart-1).GetDate(), "2000-06-30") << "operator- function not setup properly";
	EXPECT_EQ((julEnd+1).GetDate(), "2000-08-01") << "operator+ function not setup properly";
	EXPECT_EQ((julEnd-1).GetDate(), "2000-07-30") << "operator- function not setup properly";

	Date augStart(2000, 8, 1);
	Date augEnd(2000, 8, 31);
	EXPECT_EQ((augStart+1).GetDate(), "2000-08-02") << "operator+ function not setup properly";
	EXPECT_EQ((augStart-1).GetDate(), "2000-07-31") << "operator- function not setup properly";
	EXPECT_EQ((augEnd+1).GetDate(), "2000-09-01") << "operator+ function not setup properly";
	EXPECT_EQ((augEnd-1).GetDate(), "2000-08-30") << "operator- function not setup properly";

	Date sepStart(2000, 9, 1);
	Date sepEnd(2000, 9, 30);
	EXPECT_EQ((sepStart+1).GetDate(), "2000-09-02") << "operator+ function not setup properly";
	EXPECT_EQ((sepStart-1).GetDate(), "2000-08-31") << "operator- function not setup properly";
	EXPECT_EQ((sepEnd+1).GetDate(), "2000-10-01") << "operator+ function not setup properly";
	EXPECT_EQ((sepEnd-1).GetDate(), "2000-09-29") << "operator- function not setup properly";

	Date octStart(2000, 10, 1);
	Date octEnd(2000, 10, 31);
	EXPECT_EQ((octStart+1).GetDate(), "2000-10-02") << "operator+ function not setup properly";
	EXPECT_EQ((octStart-1).GetDate(), "2000-09-30") << "operator- function not setup properly";
	EXPECT_EQ((octEnd+1).GetDate(), "2000-11-01") << "operator+ function not setup properly";
	EXPECT_EQ((octEnd-1).GetDate(), "2000-10-30") << "operator- function not setup properly";

	Date novStart(2000, 11, 1);
	Date novEnd(2000, 11, 30);
	EXPECT_EQ((novStart+1).GetDate(), "2000-11-02") << "operator+ function not setup properly";
	EXPECT_EQ((novStart-1).GetDate(), "2000-10-31") << "operator- function not setup properly";
	EXPECT_EQ((novEnd+1).GetDate(), "2000-12-01") << "operator+ function not setup properly";
	EXPECT_EQ((novEnd-1).GetDate(), "2000-11-29") << "operator- function not setup properly";

	Date decStart(2000, 12, 1);
	Date decEnd(2000, 12, 31);
	EXPECT_EQ((decStart+1).GetDate(), "2000-12-02") << "operator+ function not setup properly";
	EXPECT_EQ((decStart-1).GetDate(), "2000-11-30") << "operator- function not setup properly";
	EXPECT_EQ((decEnd+1).GetDate(), "2001-01-01") << "operator+ function not setup properly";
	EXPECT_EQ((decEnd-1).GetDate(), "2000-12-30") << "operator- function not setup properly";

	EXPECT_EQ((first_day+1).GetDate(), "2018-09-05") << "operator+ function not setup properly";
	EXPECT_EQ((first_day-1).GetDate(), "2018-09-03") << "operator- function not setup properly";
	EXPECT_EQ((first_day+0).GetDate(), "2018-09-04") << "operator+ function not setup properly";
	EXPECT_EQ((first_day-0).GetDate(), "2018-09-04") << "operator+ function not setup properly";
}

TEST_F(DateTest, ConstructorsTest)
{
	Date current;
	Date new_year(2000, 1, 1);
	Date epoch(0);

	//source: https://stackoverflow.com/questions/16357999/current-date-and-time-as-string
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, sizeof(buffer), "%m-%d-%Y", timeinfo);
	std::string str(buffer);

	EXPECT_EQ(current.GetUsDate(), str) << "Date() constructor not setup properly";
	EXPECT_EQ(new_year.GetDate(), "2000-01-01") << "Date(year, month, day) constructor not setup properly";
	EXPECT_EQ(epoch.GetDate(), "1970-01-01") << "Date(year, month, day) constructor not setup properly";
}

