#ifndef DRIVER_H
#define DRIVER_H
/* Headers */
#include "MIDIA.h"
#include "DVD.h"
#include "CD.h"

/* Bibliotecas C++ */
#include <iostream>
#include <deque>
#include <iterator>

<<<<<<< HEAD
=======
/*
*/

>>>>>>> fdb2da0a07ac5d9f5f6e3e2e89ca436d5f6a44f6
/* Inicio das funções */

/* Função A */
/* Dado o nome de um artista, exibir todos os CD's de sua autoria ordenados pela data de lançamento */
void showAllCds(string artista, deque<MIDIA> &colecao)
{

    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getArtista() == artista) && (w->getFormato()))
        {
            cout << "cd----->" << w->getTitulo() << endl;
        }
    }
};

void showAllDvds(string artista, deque<MIDIA> &colecao)
{

    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getArtista() == artista) && (!w->getFormato()))
        {
            cout << "dvd----->" << w->getTitulo() << endl;
        }
    }
};

void showAll(string artista, deque<MIDIA> &colecao)
{

    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        cout << "midia----->" << w->getTitulo() << endl;
    }
};

void showAllInYear(int lancamento, deque<MIDIA> &colecao)
{

    std::deque<MIDIA>::iterator w;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getLancamento() == lancamento) && (!w->getFormato()))
        {
            cout << "midia----->" << w->getTitulo() << endl;
        }
    }
};

void showAllByGen(string gen, deque<MIDIA> &colecao)
{
    std::deque<MIDIA>::iterator w;
    cout << "DVDs" << endl;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getGenero() == gen) && (!w->getFormato()))
        {
            cout << "dvd----->" << w->getTitulo() << endl;
        }
    }
    cout << "CDs" << endl;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        if ((w->getGenero() == gen) && (w->getFormato()))
        {
            cout << "cd----->" << w->getTitulo() << endl;
        }
    }
}

void showAllKw(deque<MIDIA> &colecao)
{
    std::deque<MIDIA>::iterator w;
    cout << "DVDs" << endl;
    for (w = colecao.begin(); w != colecao.end(); w++)
    {
        std::deque<string>::iterator temp;
        deque<string> kw = w->getKeywords();

        for (temp = kw.begin(); temp != kw.end(); temp++)
        {
            cout << "dvd----->" << *temp << endl;
        }
    }
}
#endif