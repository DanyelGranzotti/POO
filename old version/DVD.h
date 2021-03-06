#ifndef DVD_H
#define DVD_H

/* Headers */
#include "CD.h"
#include "MIDIA.h"

/* Bibliotecas C++ */
#include <iostream>
#include <string>
#include <deque>
#include <iterator>

using namespace std;

class DVD
{
private:
   deque<string *> formatoAudio;
   deque<string *> formatoTela;
   deque<string *> legendas;

public:
   deque<string *> getFormatoAudio();
   void setFormatoAudio(deque<string *>);

   deque<string *> getFormatoTela();
   void setFormatoTela(deque<string *>);

   deque<string *> getLegendas();
   void setColetanea(deque<string *>);
};

deque<string *> DVD::getFormatoAudio()
{
   return (this->formatoAudio);
};
void DVD::setFormatoAudio(deque<string *> name)
{
   this->formatoAudio = name;
};
deque<string *> DVD::getFormatoTela()
{
   return (this->formatoTela);
};
void DVD::setFormatoTela(deque<string *> name)
{
   this->formatoTela = name;
};
deque<string *> DVD::getLegendas()
{
   return (this->legendas);
};
void DVD::setColetanea(deque<string *> name)
{
   this->legendas = name;
};

#endif