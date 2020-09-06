### Assessment for Project Iteration 01 - Automated (Graded By: Dan Orban)

#### Total score: _25_ / _25_

Run on December 05, 16:14:48 PM.

+ Pass: Switch to correct commit.




#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/home/dan/TA/csci3081/3081_F18/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Copy directory "Copy Project Files".



+ Pass: Starting with clean project.



+ Pass: Copy directory "Copy Project Files".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Tests".



+  _20_ / _20_ : Pass: Check that make compiles.




#### Run Student Tests

+  _1_ / _1_ : Pass: Running Student Tests.



+  _3_ / _3_ : Fail: Ensuring code follows style guide. <strong>(Verified that this works manually)</strong>

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/home/dan/TA/csci3081/3081_F18/grading-scripts/grading/PROJ_01_Automated_Assessment/repo-leex6659/PROJ/src/flashphoto'
==== Checking style is correct ====
/home/dan/TA/csci3081/3081_F18/grading-scripts/grading/PROJ_01_Automated_Assessment/repo-leex6659/cpplint/cpplint.py --root=.. *.cc *.h
/bin/sh: 1: /home/dan/TA/csci3081/3081_F18/grading-scripts/grading/PROJ_01_Automated_Assessment/repo-leex6659/cpplint/cpplint.py: Permission denied
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 126
make[1]: Leaving directory '/home/dan/TA/csci3081/3081_F18/grading-scripts/grading/PROJ_01_Automated_Assessment/repo-leex6659/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolChalkTest.HasCorrectName.



#### Total score: _25_ / _25_

