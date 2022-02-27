//======== Copyright (c) 2017, FIT VUT Brno, All rights reserved. ============//
//
// Purpose:     Red-Black Tree - public interface tests
//
// $NoKeywords: $ivs_project_1 $black_box_tests.cpp
// $Author:     JMENO PRIJMENI <xlogin00@stud.fit.vutbr.cz>
// $Date:       $2017-01-04
//============================================================================//
/**
 * @file black_box_tests.cpp
 * @author JMENO PRIJMENI
 * 
 * @brief Implementace testu binarniho stromu.
 */

#include <vector>

#include "gtest/gtest.h"

#include "red_black_tree.h"

//============================================================================//
// ** ZDE DOPLNTE TESTY **
//
// Zde doplnte testy Red-Black Tree, testujte nasledujici:
// 1. Verejne rozhrani stromu
//    - InsertNode/DeleteNode a FindNode
//    - Chovani techto metod testuje pro prazdny i neprazdny strom.
// 2. Axiomy (tedy vzdy platne vlastnosti) Red-Black Tree:
//    - Vsechny listove uzly stromu jsou *VZDY* cerne.
//    - Kazdy cerveny uzel muze mit *POUZE* cerne potomky.
//    - Vsechny cesty od kazdeho listoveho uzlu ke koreni stromu obsahuji
//      *STEJNY* pocet cernych uzlu.
//============================================================================//

class EmptyTree : public ::testing::Test
{
protected:
    BinaryTree tree;
};

class NonEmptyTree : public ::testing::Test
{
protected:
    virtual void SetUp() 
    {
        int values[] = { 10, 85, 15, 70, 20, 60, 30, 50, 65, 80, 90, 40, 5, 55 };

        for(int i = 0; i < 14; ++i)
            tree.InsertNode(values[i]);
    }
    BinaryTree tree;
};

class TreeAxioms : public ::testing::Test
{
protected:
    BinaryTree tree;
};



TEST_F(EmptyTree, InsertNode)
{
    auto result = tree.InsertNode(0);
    EXPECT_TRUE(result.first);
    EXPECT_EQ(result.second->key,0);

    result = tree.InsertNode(0);
    EXPECT_FALSE(result.first);
    EXPECT_EQ(result.second->key,0);

}
TEST_F(EmptyTree, DeleteNode)
{
    auto result = tree.DeleteNode(0);
    EXPECT_FALSE(result);
    result = tree.DeleteNode(10);
    EXPECT_FALSE(result);

}
TEST_F(EmptyTree, FindNode)
{
    auto result = tree.FindNode(0);
    EXPECT_FALSE(result);
    result = tree.FindNode(10);
    EXPECT_FALSE(result);
}
TEST_F(NonEmptyTree, InsertNode)
{
    auto result = tree.InsertNode(0);
    EXPECT_TRUE(result.first);
    EXPECT_EQ(result.second->key,0);

    result = tree.InsertNode(10);
    EXPECT_FALSE(result.first);
    EXPECT_EQ(result.second->key,10);

}
TEST_F(NonEmptyTree, DeleteNode)
{
    auto result = tree.DeleteNode(0);
    EXPECT_FALSE(result);
    result = tree.DeleteNode(10);
    EXPECT_TRUE(result);

}
TEST_F(NonEmptyTree, FindNode)
{
    auto result = tree.FindNode(0);
    EXPECT_FALSE(result);
    result = tree.FindNode(10);
    EXPECT_TRUE(result);
}
TEST_F(TreeAxioms, Axiom1)
{
    std::vector<Node_t *> nodeVector{};
    tree.GetAllNodes(nodeVector);
    for (auto node : nodeVector)
    {
        if (node->pLeft == nullptr && node->pRight == nullptr)
        {
            EXPECT_EQ(node->color,1);
        }
    }
        
}
TEST_F(TreeAxioms, Axiom2)
{
    std::vector<Node_t *> nodeVector{};
    tree.GetNonLeafNodes(nodeVector);
    for (auto node : nodeVector)
    {
        if (node->color == 0)
        {
            EXPECT_EQ(node->pLeft->color,1);
            EXPECT_EQ(node->pRight->color,1);
        }
    }
}
TEST_F(TreeAxioms, Axiom3)
{
    std::vector<Node_t *> nodeVector{};
    tree.GetLeafNodes(nodeVector);
    int countNodes = 0;
    int countAllParents = 0;
    for (auto node : nodeVector)
    {
        countNodes++;
        int countParents = 0;
        while (node->pParent != nullptr)
        {
            if (node->pParent->color == 1)
            {
                countParents++;
            }
            node = node->pParent;
        }
        countAllParents += countParents;
        ASSERT_EQ(countAllParents%countNodes,0);           //<ked pripocitam rovnake cilo, nedostavam zvysok
        if (countAllParents == 0)
            break;
        EXPECT_EQ(countNodes*countParents, 0);
    }        
}
/*** Konec souboru black_box_tests.cpp ***/
