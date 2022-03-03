# CMake generated Testfile for 
# Source directory: /home/fix/Documents/ivs_project_1_2022/assignment
# Build directory: /home/fix/Documents/ivs_project_1_2022/assignment/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(EmptyTree.InsertNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=EmptyTree.InsertNode")
set_tests_properties(EmptyTree.InsertNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyTree.DeleteNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=EmptyTree.DeleteNode")
set_tests_properties(EmptyTree.DeleteNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(EmptyTree.FindNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=EmptyTree.FindNode")
set_tests_properties(EmptyTree.FindNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyTree.InsertNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=NonEmptyTree.InsertNode")
set_tests_properties(NonEmptyTree.InsertNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyTree.DeleteNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=NonEmptyTree.DeleteNode")
set_tests_properties(NonEmptyTree.DeleteNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(NonEmptyTree.FindNode "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=NonEmptyTree.FindNode")
set_tests_properties(NonEmptyTree.FindNode PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(TreeAxioms.Axiom1 "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=TreeAxioms.Axiom1")
set_tests_properties(TreeAxioms.Axiom1 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(TreeAxioms.Axiom2 "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=TreeAxioms.Axiom2")
set_tests_properties(TreeAxioms.Axiom2 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(TreeAxioms.Axiom3 "/home/fix/Documents/ivs_project_1_2022/assignment/build/black_box_test" "--gtest_filter=TreeAxioms.Axiom3")
set_tests_properties(TreeAxioms.Axiom3 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;32;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.constructior "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.constructior")
set_tests_properties(MatrixTest.constructior PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.SetterGetter "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.SetterGetter")
set_tests_properties(MatrixTest.SetterGetter PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.SetVector "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.SetVector")
set_tests_properties(MatrixTest.SetVector PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.OperatorEq "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.OperatorEq")
set_tests_properties(MatrixTest.OperatorEq PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.OperatorAdd "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.OperatorAdd")
set_tests_properties(MatrixTest.OperatorAdd PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.OperatorMultiply "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.OperatorMultiply")
set_tests_properties(MatrixTest.OperatorMultiply PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.OperatorMultiplyByConst "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.OperatorMultiplyByConst")
set_tests_properties(MatrixTest.OperatorMultiplyByConst PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.EquationGeneral "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.EquationGeneral")
set_tests_properties(MatrixTest.EquationGeneral PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.Equation1x1 "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.Equation1x1")
set_tests_properties(MatrixTest.Equation1x1 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.Equation2x2 "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.Equation2x2")
set_tests_properties(MatrixTest.Equation2x2 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.Equation3x3 "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.Equation3x3")
set_tests_properties(MatrixTest.Equation3x3 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
add_test(MatrixTest.Equation5x5 "/home/fix/Documents/ivs_project_1_2022/assignment/build/white_box_test" "--gtest_filter=MatrixTest.Equation5x5")
set_tests_properties(MatrixTest.Equation5x5 PROPERTIES  _BACKTRACE_TRIPLES "/home/fix/Documents/ivs_project_1_2022/assignment/GoogleTest.cmake;39;add_test;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;36;GTEST_ADD_TESTS;/home/fix/Documents/ivs_project_1_2022/assignment/CMakeLists.txt;0;")
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
