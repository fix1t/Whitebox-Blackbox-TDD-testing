//======== Copyright (c) 2021, FIT VUT Brno, All rights reserved. ============//
//
// Purpose:     White Box - Tests suite
//
// $NoKeywords: $ivs_project_1 $white_box_code.cpp
// $Author:     Gabriel BIel <xbielg00@stud.fit.vutbr.cz>
// $Date:       $2021-01-04
//============================================================================//
/**
 * @file white_box_tests.cpp
 * @author Gabriel BIel
 * 
 * @brief Implementace testu prace s maticemi.
 */

#include "gtest/gtest.h"
#include "white_box_code.h"

//============================================================================//
// ** ZDE DOPLNTE TESTY **
//
// Zde doplnte testy operaci nad maticemi. Cilem testovani je:
// 1. Dosahnout maximalniho pokryti kodu (white_box_code.cpp) testy.
// 2. Overit spravne chovani operaci nad maticemi v zavislosti na rozmerech 
//    matic.
//============================================================================//

class matrix1x1 : public ::testing::Test
{
protected:
    Matrix m{};
    
public:
};

TEST(GeneralTests,constructior)
{
    Matrix m1x1{};
    EXPECT_EQ(m1x1.get(0,0),0);
    Matrix m3x3{3,3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            EXPECT_EQ(m3x3.get(i,j),0);
    }
    EXPECT_ANY_THROW(Matrix m3x3(-5,3));
    EXPECT_ANY_THROW(Matrix m3x3(3,-5));
    EXPECT_ANY_THROW(Matrix m3x3(0,0));
}
TEST(GeneralT,SetterGetter)
{
    Matrix m3x3{3,3};
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
}

TEST(GeneralT,SetVector)
{
    /* double values9[9] = {1.6 ,2.3 ,0.5 , 2.7, 56.1 ,1.2,1.3,1.5,2.2};
    Matrix m3x3{3,3};

    EXPECT_TRUE(m3x3.set(values9));
    double values10 [10]= {1.6 ,2.3 ,0.5 , 2.7, 56.1 ,1.2,1.3,1.5,2.2,2.3};
    EXPECT_EQ(m3x3.set(values10),false);
 */
}

TEST(GeneralT,OperatorEq)
{
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_TRUE(m3x3 == m3x3b);
    m3x3.set(0,0,1);
    EXPECT_FALSE(m3x3 == m3x3b);
    Matrix m3x3c{3,4};
    EXPECT_ANY_THROW(m3x3 == m3x3c);
}
TEST(GeneralT,OperatorAdd)
{
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_EQ(m3x3 + m3x3b,m3x3);
    m3x3.set(0,0,1);
    EXPECT_EQ((m3x3 + m3x3b),m3x3);
    Matrix m3x3c{3,4};
    EXPECT_ANY_THROW(m3x3 + m3x3c);
}
TEST(GeneralT,OperatorMulti)
{
    Matrix m3x3{3,3};
    Matrix m3x3b{3,3};
    EXPECT_EQ(m3x3 * m3x3b,m3x3);
    m3x3.set(0,0,1);
    EXPECT_TRUE((m3x3 * m3x3b) == m3x3b);
    EXPECT_FALSE((m3x3 * m3x3b) == m3x3);
    Matrix m3x3c{3,4};
    EXPECT_NO_THROW(m3x3 * m3x3c);
    Matrix m3x3d{4,3};
    EXPECT_ANY_THROW(m3x3 * m3x3d);
}
TEST(GeneralT,OperatorMultiConst)
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
    EXPECT_FALSE((m3x3 * 2) == m3x3b);
}


/*** Konec souboru white_box_tests.cpp ***/
