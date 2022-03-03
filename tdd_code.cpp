//======== Copyright (c) 2021, FIT VUT Brno, All rights reserved. ============//
//
// Purpose:     Test Driven Development - priority queue code
//
// $NoKeywords: $ivs_project_1 $tdd_code.cpp
// $Author:     Gabriel Biel <xbielg00@stud.fit.vutbr.cz>
// $Date:       $2022.03.03
//============================================================================//
/**
 * @file tdd_code.cpp
 * @author Gabriel Biel
 * 
 * @brief Implementace metod tridy prioritni fronty.
 */

#include <stdlib.h>
#include <stdio.h>

#include "tdd_code.h"

PriorityQueue::PriorityQueue()
{

}

PriorityQueue::~PriorityQueue()
{

}

void PriorityQueue::Insert(int value)
{
    Element_t *cur = m_pHead;
    Element_t *pNew = new Element_t;
        pNew->value = value;
        pNew->pNext = NULL;
    if (m_pHead == NULL)
    {
        m_pHead = pNew;
        return;        
    }
    if (m_pHead->value <= value)
    {
        pNew->pNext = m_pHead;
        m_pHead = pNew;
        return;
    }
    
    while (1)
    {
    if (cur->pNext == NULL)
    {
        cur->pNext = pNew;
        return;
    }
    if (value >= cur->pNext->value)
    {
        pNew->pNext = cur->pNext;
        cur->pNext = pNew;
        return;
    }
    cur = cur->pNext;
    }
}

bool PriorityQueue::Remove(int value)
{
    Element_t *cur = m_pHead;
    if (m_pHead == NULL)
    {
        return false;
    }
    if (m_pHead->value == value)
    {
        m_pHead = m_pHead->pNext;
        delete cur;
        return true;
    }
    if (m_pHead->value < value)
    {
        return false;
    }
    while (cur->pNext != NULL)
    {
        if (cur->pNext->value == value)
        {
            Element_t* tmp = cur->pNext;
            cur->pNext = cur->pNext->pNext;
            delete tmp;
            return true;
        }
        if (cur->value < value)
            return false;
        cur = cur->pNext;
    }
    return false;
}

PriorityQueue::Element_t *PriorityQueue::Find(int value)
{
    Element_t *cur = m_pHead;
	while (cur != NULL)
    {
        if (cur->value == value)
            return cur;
        cur = cur->pNext;
    }
    return NULL;
}

size_t PriorityQueue::Length()
{
    Element_t *cur = m_pHead;
    int count = 0;
	while (cur != NULL)
    {
        count++;
        cur = cur->pNext;
    }
    return count;
}

PriorityQueue::Element_t *PriorityQueue::GetHead()
{
    return m_pHead;
}

/*** Konec souboru tdd_code.cpp ***/
