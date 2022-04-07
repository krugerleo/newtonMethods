#ifndef METODOS_H
#define METODOS_H

double calculaNorma(double *X,int n);

double **montamatriz(SistemaL *SL);

double *montaDeltaF(SistemaL *SL);

double calculoNormaDelta(double *delta, int n);

void newton(SistemaL *SL, DadosE *DE);

void pivot(SistemaL *SL, int i);

void retrossubs(SistemaL *SL);

void triang(SistemaL *SL);

void calculaProximoX(SistemaL *SL);
#endif