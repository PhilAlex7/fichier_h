#include <stdio.h>
#include <stdlib.h>

typedef enum{FALSE = 0, TRUE = 1} BOOL;

typedef struct m_attributs
{
    char *attr;
    struct m_attributs *next;
} Attributs;

typedef struct m_attributs_repere
{
    Attributs *debut;
    Attributs *fin;
    int taille;
} AttributsRepere;

typedef struct m_style
{
    char *selector;
    AttributsRepere *attr;
    struct m_style *next;
} Style;

typedef struct m_style_repere
{
    Style *fin;
    int taille;
} StyleRepere;

int str_len(char*);

int str_cmp(char*, int, const char*);

BOOL is_well_formated(char*);

void addAttr(Attributs *attr, AttributsRepere*, char*);

void addStyle(StyleRepere*, char*, AttributsRepere*);
