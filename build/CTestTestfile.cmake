# CMake generated Testfile for 
# Source directory: /home/fix/Documents/ivs_project_1_2022/assignment
# Build directory: /home/fix/Documents/ivs_project_1_2022/assignment/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(NonEmptyQueue.Insert "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=NonEmptyQueue.Insert")
set_tests_properties(NonEmptyQueue.Insert PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyQueue.RemoveAllBackward "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=NonEmptyQueue.RemoveAllBackward")
set_tests_properties(NonEmptyQueue.RemoveAllBackward PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyQueue.RemoveAllForward "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=NonEmptyQueue.RemoveAllForward")
set_tests_properties(NonEmptyQueue.RemoveAllForward PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyQueue.Find "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=NonEmptyQueue.Find")
set_tests_properties(NonEmptyQueue.Find PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyQueue.Length "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=NonEmptyQueue.Length")
set_tests_properties(NonEmptyQueue.Length PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyQueue.Insert "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=EmptyQueue.Insert")
set_tests_properties(EmptyQueue.Insert PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyQueue.Remove "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=EmptyQueue.Remove")
set_tests_properties(EmptyQueue.Remove PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyQueue.Find "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=EmptyQueue.Find")
set_tests_properties(EmptyQueue.Find PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyQueue.Length "/home/fix/Documents/ivs_project_1_2022/assignment/build/tdd_test" "--gtest_filter=EmptyQueue.Length")
set_tests_properties(EmptyQueue.Length PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;43;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
subdirs("googletest-build")
