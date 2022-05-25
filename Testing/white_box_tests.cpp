//======== Copyright (c) 2021, FIT VUT Brno, All rights reserved. ============//
//
// Purpose:     White Box - Tests suite
//
// $NoKeywords: $ivs_project_1 $white_box_code.cpp
// $Author:     Gabriel BIel <xbielg00@stud.fit.vutbr.cz>
// $Date:       $2022.03.03
//============================================================================//
/**
 * @file white_box_tests.cpp
 * @author Gabriel BIel
 * 
 * @brief Implementace testu prace s maticemi.
 */

#include "gtest/gtest.h"
#include "white_box_code.h"
#include <vector>
#include <math.h>

using namespace ::testing;
class MatrixTest : public Test
{
protected:
    Matrix matrix;

    Matrix get2x4()
    {
        Matrix matrix = Matrix(2, 4);
        matrix.set(std::vector<std::vector<double>> {
            {5,10,5,10},
            {1,2,3,4},
        });
        return matrix;
    }
    void set2x4()
    {
        matrix = get2x4();
    }

    Matrix get4x3()
    {
        Matrix matrix = Matrix(4,3);
        matrix.set(std::vector<std::vector<double>> {
            {20, 20, 1},
            {30, 1, 0},
            {1, 0, 0},
            {1, 1, 1},
        });
        return matrix;
    }

    Matrix get5x5()
    {
        Matrix matrix = Matrix(5,5);
        matrix.set(std::vector<std::vector<double>> {
            {1, 2, 3, 4, 5},
            {1.1, 2.1, 3.1, 4.1, 5.1},
            {-5.2, -4.2, -3.2, -2.2, -1.2},
            {1,0,1,0},
            {2,2,2,3}
        });
        return matrix;
    }

    Matrix get2x2()
    {
        Matrix matrix = Matrix(2,2);
        matrix.set(std::vector<std::vector<double>> {
            {2,1},
            {3,4},
        });

        return matrix;
    }
};

TEST_F(MatrixTest,constructior)
{
    /* prazdna matica */
    EXPECT_NO_THROW(Matrix m1x1());
    EXPECT_NO_THROW(Matrix m3x3(3,3));
    EXPECT_NO_THROW(Matrix m3x3(50,3));
    EXPECT_NO_THROW(Matrix m3x3(3,50));
    Matrix m3x3(3,3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            EXPECT_EQ(m3x3.get(i,j),0);
    }
    /* neplatna matica */
    EXPECT_ANY_THROW(Matrix m3x3(-5,3));
    EXPECT_ANY_THROW(Matrix m3x3(3,-5));
    EXPECT_ANY_THROW(Matrix m3x3(0,0));
    EXPECT_ANY_THROW(Matrix m3x3(1,0));
    EXPECT_ANY_THROW(Matrix m3x3(0,1));
}
TEST_F(MatrixTest,SetterGetter)
{
    /* funkcnost */
    Matrix m3x3(3,3);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i<3  && j<3)
            {
                EXPECT_EQ(m3x3.set(i,j,i+j),true);
                EXPECT_EQ(m3x3.get(i,j),i+j);
            }
            else
            {
                EXPECT_EQ(m3x3.set(i,j,i+j),false);
                EXPECT_ANY_THROW(m3x3.get(i,j));

            }
        }
    }
    /* zle zadanie parametrov set */
    EXPECT_FALSE(m3x3.set(4,2,1));
    EXPECT_FALSE(m3x3.set(2,4,1));
    EXPECT_FALSE(m3x3.set(5,0,1));
    EXPECT_FALSE(m3x3.set(0,3,1));
    EXPECT_FALSE(m3x3.set(-1,3,1));
    /* zle zadanie parametrov get */
    EXPECT_ANY_THROW(m3x3.get(4,2));
    EXPECT_ANY_THROW(m3x3.get(2,4));
    EXPECT_ANY_THROW(m3x3.get(5,0));
    EXPECT_ANY_THROW(m3x3.get(0,3));
    EXPECT_ANY_THROW(m3x3.get(-1,3));
}

TEST_F(MatrixTest,SetVector)
{
    /* vkladanie spravny pocet hodnot */
    Matrix m3x3{3,3};
    std::vector<std::vector<double>> values9 =   
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    EXPECT_EQ(m3x3.set(values9),true);
    /* vkladanie viac hodnot */
    std::vector<std::vector<double>> values10 =   
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {11},
    };
    /* vkladanie menej hodnot */
    std::vector<std::vector<double>> values5 =   
    {
        {1,2,3,4,5}
    };
    EXPECT_EQ(m3x3.set(values10),false);
    EXPECT_EQ(m3x3.set(values5),false);
}

TEST_F(MatrixTest,OperatorEq)
{
    /* prazdne matice */
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_TRUE(m3x3 == m3x3b);
    /* prazdna x plna */
    m3x3.set(0,0,1);
    EXPECT_FALSE(m3x3 == m3x3b);
    /* matice nemaju rovnaku velkost */
    Matrix m3x4{3,4};
    Matrix m4x3{4,3};
    EXPECT_ANY_THROW(m3x3 == m3x4);
    EXPECT_ANY_THROW(m3x3 == m4x3);
    EXPECT_ANY_THROW(m4x3 == m3x4);
}
TEST_F(MatrixTest,OperatorAdd)
{
    /* prazdne matice */
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_EQ(m3x3 + m3x3b,m3x3);
    /* rozdielne matice */
    m3x3.set(0,0,1);
    EXPECT_EQ((m3x3 + m3x3b),m3x3);

    Matrix m3x4{3,4};
    Matrix m4x3{4,3};
    EXPECT_ANY_THROW(m3x3 + m3x4);
    EXPECT_ANY_THROW(m3x3 + m4x3);
    EXPECT_ANY_THROW(m4x3 + m3x4);
}
TEST_F(MatrixTest,OperatorMultiply)
{
    /* prazdne matice */
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_EQ(m3x3 * m3x3b,m3x3);
    /* rozdielne matice */
    m3x3.set(0,0,1);
    EXPECT_TRUE((m3x3 * m3x3b) == m3x3b);
    EXPECT_FALSE((m3x3 * m3x3b) == m3x3);
    /* matice roznych velkosti */
    Matrix m3x4{3,4};
    Matrix m4x3{4,3};
    EXPECT_NO_THROW(m3x3 * m3x4);
    EXPECT_NO_THROW(m4x3 * m3x4);
    EXPECT_NO_THROW(m3x4 * m4x3);
    EXPECT_ANY_THROW(m3x3 * m4x3);
}
TEST_F(MatrixTest,OperatorMultiplyByConst)
{
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3x3.set(i,j,1);
        }
    }
    EXPECT_EQ(m3x3 * 1,m3x3);
    EXPECT_TRUE((m3x3 * 0) == m3x3b);
    m3x3.set(0,0,6);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3x3b.set(i,j,2);
        }
    }
    m3x3b.set(0,0,12);
    EXPECT_TRUE((m3x3 * 2) == m3x3b);
}

TEST_F(MatrixTest, EquationGeneral)
	{
		/* matica  nesmie mat determinant == 0 */
		matrix = Matrix(3,3);
		matrix.set(std::vector<std::vector<double>> {
			{1,1,1},
			{1,2,3},
            {2,2,2}
		});
		EXPECT_ANY_THROW(matrix.solveEquation(std::vector<double> {1,1,1}));

		/* matica musi byt stvorcova */
		EXPECT_ANY_THROW(get2x4().solveEquation(std::vector<double> {0, 0}));
		EXPECT_ANY_THROW(get4x3().solveEquation(std::vector<double> {0, 0, 0, 0}));
        EXPECT_ANY_THROW(get4x3().solveEquation(std::vector<double> {0, 0, 0}));
		
        get5x5();
		/* pocet prvkov pravej rovnice sa musi rovnat poctu riadkov matice */
		EXPECT_ANY_THROW(matrix.solveEquation(std::vector<double> {}));
		EXPECT_ANY_THROW(matrix.solveEquation(std::vector<double>(10,5)));
		EXPECT_ANY_THROW(matrix.solveEquation(std::vector<double>(5,5)));
		EXPECT_ANY_THROW(matrix.solveEquation(std::vector<double>(2,1)));



	}
TEST_F(MatrixTest,Equation1x1)
{
    Matrix m1x1 = Matrix();
    m1x1.set(0,0,1);
    EXPECT_NO_THROW(m1x1.solveEquation(std::vector<double> {{1}}));
    EXPECT_EQ(m1x1.solveEquation(std::vector<double> {{1}}),std::vector<double>{{1}});
}
TEST_F(MatrixTest,Equation2x2)
{
    Matrix m2x2 = Matrix(2,2);
    m2x2.set(std::vector<std::vector<double>> 
    {
        {2, 1},
        {3, 4},
    });
    EXPECT_NO_THROW(m2x2.solveEquation(std::vector<double> {1,2}));
    EXPECT_TRUE(m2x2.solveEquation(std::vector<double> {3,7}) == (std::vector<double>{1,1}));
}

TEST_F(MatrixTest,Equation3x3)
{
    Matrix m3x3(3,3);
    std::vector<std::vector<double> > values =
    {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    m3x3.set(values);
    std::vector<double> result =
    {
        {1,1,-2}
    };
    EXPECT_NO_THROW(m3x3.solveEquation(result));
    EXPECT_EQ(m3x3.solveEquation(result),result);

    values = 
    {
        {1,1,1},
        {0,1,1},
        {0,0,1}
    };
    m3x3.set(values);
    result = 
    {
        {6,3,1}
    };
    EXPECT_NO_THROW(m3x3.solveEquation({{10,4,1}}));
    EXPECT_EQ(m3x3.solveEquation({10,4,1}),result);
}
TEST_F(MatrixTest,Equation5x5)
{
    Matrix m5x5 = Matrix(5,5);
    m5x5.set(std::vector<std::vector<double>> {
        
        {1,2,3,4,5},
        {0,1,5,6,7},
        {0,0,1,3,2},
        {0,0,0,1,2},
        {0,0,0,0,1},

    });
    EXPECT_NO_THROW(m5x5.solveEquation({{35,38,17,4,1}}));
    EXPECT_TRUE(m5x5.solveEquation({35,38,17,4,1}) == (std::vector<double>{47,-26,9,2,1}));
}
TEST_F(MatrixTest,Transpose)
{
    Matrix m5x5 = Matrix(5,5);
    m5x5.set(std::vector<std::vector<double>> {
        
        {1,2,3,4,5},
        {0,1,2,3,4},
        {0,0,1,2,3},
        {0,0,0,1,2},
        {0,0,0,0,1},

    });
    std::vector<std::vector<double>> result =
    {
        {1,0,0,0,0},
        {2,1,0,0,0},
        {3,2,1,0,0},
        {4,3,2,1,0},
        {5,4,3,2,1},
    };
    Matrix m5x5t(5,5);
    m5x5t.set(result);
    EXPECT_NO_THROW(m5x5.transpose());
    EXPECT_TRUE(m5x5.transpose() == m5x5t);
}

TEST_F(MatrixTest,Inverse2x2)
{
    Matrix m2x2 = Matrix(2,2);
    m2x2.set(std::vector<std::vector<double>> 
    {
        {2,2},
        {1,2},
    });
    Matrix res2x2 = Matrix(2,2);
    res2x2.set(std::vector<std::vector<double>> 
    {
        {1,-1},
        {-0.5,1},
    });
    EXPECT_NO_THROW(m2x2.inverse());
    EXPECT_TRUE(m2x2.inverse() == res2x2);
}

TEST_F(MatrixTest,Inverse3x3)
{
    Matrix m3x3 = Matrix(3,3);
    m3x3.set(std::vector<std::vector<double>> 
    {
        {1,1,1},
        {6,5,4},
        {13,10,8},
    });
    Matrix res3x3 = Matrix(3,3);
    res3x3.set(std::vector<std::vector<double>> 
    {
        {0,-2,1},
        {-4,5,-2},
        {5,-3,1},
    });
    EXPECT_NO_THROW(m3x3.inverse());
    EXPECT_TRUE(m3x3.inverse() == res3x3);
}

TEST_F(MatrixTest,InverseGeneral)
{
    /* maximalni velkost matice < 4 */
    Matrix m5x5 = Matrix(5,5);
    m5x5.set(std::vector<std::vector<double>> 
    {
        {1,2,3,4,5},
        {0,1,2,3,4},
        {0,0,1,2,3},
        {0,0,0,1,2},
        {0,0,0,0,1},
    });
    EXPECT_ANY_THROW(m5x5.inverse());
    /* matica nesmie byt singularna */
    Matrix m3x3(2,2);
    m3x3.set(std::vector<std::vector<double>> 
    {
        {2,5,7},
        {6,3,4},
        {0,0,0},
    }); 
    EXPECT_ANY_THROW(m3x3.inverse());
}
/*** Konec souboru white_box_tests.cpp ***/
