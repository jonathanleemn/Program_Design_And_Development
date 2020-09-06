### Assessment for Project Iteration 02 - Automated (Graded By: Dan Orban)

#### Total score: _61.65_ / _85_

Run on December 16, 02:04:14 AM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_proj_materials" exists.

+ Pass: Setup grading environment.



+  _3_ / _3_ : Pass: Check that directory "PROJ" exists.

+  _2_ / _2_ : Pass: Check that directory "PROJ/src/imagetools" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+  _1_ / _1_ : Fail: Ensuring code follows style guide. <strong>(Giving points back for this for it being a weird error.)</strong>

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-leex6659/PROJ/src/flashphoto'
==== Checking style is correct ====
/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-leex6659/cpplint/cpplint.py --root=.. *.cc *.h
/bin/sh: /classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-leex6659/cpplint/cpplint.py: Permission denied
Makefile:165: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 126
make[1]: Leaving directory '/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-leex6659/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+  _25_ / _25_ : Pass: Check that make compiles.



+  _3_ / _3_ : Pass: Check that file "./build/lib/libimagetools.a" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/flashphoto" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/mia" exists.

+  _3_ / _3_ : Pass: Check that file "./build/test/gtests" exists.


### Instructor Tests

+ Pass: Change into directory "src/tests/inst_tests".

+ Pass: Check that make compiles.



+ Pass: Change into directory "../../..".

+ Pass: Check that file "./build/test/inst_tests" exists.


#### Testing ImageIO Implementation

+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.ImageLoadingAndSaving.




#### Testing MIA Application

+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.StampToolAdded.



+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.DisplayHelpMessage.



+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.MiaCommandLineCorrect.



+  _0_ / _2_ : Fail: Check that a GoogleTest test passes.
    fails the test: Iteration2Test.MiaCommandLineBadInput.
<pre>
[ RUN      ] Iteration2Test.MiaCommandLineBadInput
iter2_test.cc:95: Failure
Value of: hasHelpMessage(getStdOutOrErr())
  Actual: false
Expected: true
./build/bin/mia -blur 5 should return the help message.</pre>




### Run Student Tests

+ Pass: Check that file "./build/test/gtests" exists.

+ Pass: Get all google tests.
    26 tests found.




#### Results

+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.BlurTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.BlurTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.BlurTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.EdgeDetectTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.EdgeDetectTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.EdgeDetectTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.SharpenTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.SharpenTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.SharpenTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.ChannelsTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.ChannelsTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.ChannelsTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.QuantizeTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.QuantizeTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.QuantizeTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.SaturateTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.SaturateTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.SaturateTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.ThresholdTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.ThresholdTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.ThresholdTest
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: RegressionTest.MblurTest.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = RegressionTest.MblurTest
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from RegressionTest
[ RUN      ] RegressionTest.MblurTest
</pre>
return code: -11



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolBlurTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolCalligraphyTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolEraserTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolHighlighterTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolPenTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolSprayCanTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: RegressionTest.ToolChalkTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.BlurFilter.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.EdgeDetect.



+ Fail: Check that a GoogleTest test passes.
    fails the test: CommandLineProcessorTest.Sharpen.
<pre>
[ RUN      ] CommandLineProcessorTest.Sharpen
command_line_processor_unittest.cc:49: Failure
      Expected: output
      Which is: "\nusage: mia infile.png [image processing commands ...] outfile.png\n\ninfile.png: input image file iout.pngn png format\noutfile.png: filename to use for saving the result\n\nimage processing commands:\n-blur r: apply a gaussian blur of radius r\n-edgedetect: apply an edge detection filter\n-sharpen r: apply a sharpening filter of radius r\n-red s: scale the red channel by factor s\n-green s: scale the green channel by factor s\n-blue s: scale the blue channel by factor s\n-quantize n: quantize each color channel into n bins\n-saturate s: saturate colors by scale factor s\n-threshold c: threshold using cutoff value c\n-motionblur-n-s r: north-south motion blur with kernel radius r\n-motionblur-e-w r: east-west motion blur with kernel radius r\n-motionblur-ne-sw r: ne-sw motion blur with kernel radius r\n-motionblur-nw-se r: nw-se motion blur with kernel radius r\n"
To be equal to: ""
With diff:
@@ -1,20 +1,1 @@
-
-usage: mia infile.png [image processing commands ...] outfile.png
-
-infile.png: input image file iout.pngn png format
-outfile.png: filename to use for saving the result
-
-image processing commands:
--blur r: apply a gaussian blur of radius r
--edgedetect: apply an edge detection filter
--sharpen r: apply a sharpening filter of radius r
--red s: scale the red channel by factor s
--green s: scale the green channel by factor s
--blue s: scale the blue channel by factor s
--quantize n: quantize each color channel into n bins
--saturate s: saturate colors by scale factor s
--threshold c: threshold using cutoff value c
--motionblur-n-s r: north-south motion blur with kernel radius r
--motionblur-e-w r: east-west motion blur with kernel radius r
--motionblur-ne-sw r: ne-sw motion blur with kernel radius r
--motionblur-nw-se r: nw-se motion blur with kernel radius r\n
+""
</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Red.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Green.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Blue.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Quantize.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Saturate.



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineProcessorTest.Threshold.



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineProcessorTest.MBlur.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.MBlur
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.MBlur
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineProcessorTest.ErrorMessage.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineProcessorTest.ErrorMessage
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineProcessorTest
[ RUN      ] CommandLineProcessorTest.ErrorMessage
</pre>
return code: -11



+  _8.65_ / _15_ : Fail: 57.69% of the tests passed, but the target is 100%.


### Testing Mutants


#### Testing Pen Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - There is no regression test.


#### Testing Eraser Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - There is no regression test.


#### Testing Stamp Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - The stamp tool does not stamp, it slides.


#### Testing Blur Filter for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: The radius is 2 less than it is supposed to be.


#### Testing Edge Detector Filter for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: Edge detect is not implemented.


#### Testing Image IO Implementaiton for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: Image saving and loading is not working.


#### Results

+  _0.0_ / _15_ : Fail: 0.0% of the tests passed, but the target is 80.0%.

#### Total score: _61.65_ / _85_

