#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAX_HISTORICO 10

typedef struct {
    char tipo[30];
    float valor1;
    float valor2;
    float resultado;
    char unidade[20];
} Calculo;

Calculo historico[MAX_HISTORICO];
int pos_historico = 0;

void limpar_tela();
void menu_principal();
void calcular_razao_mistura();
void calcular_molaridade();
void calcular_molalidade();
void calcular_porcentagem_massa();
void converter_unidades();
void mostrar_historico();
void adicionar_historico(const char* tipo, float val1, float val2, float res, const char* unid);
void menu_conversao_massa();
void menu_conversao_volume();
void menu_conversao_molar();

int main() {
    menu_principal();
    return 0;
}

void limpar_tela() {
    system("clear || cls");
}

void adicionar_historico(const char* tipo, float val1, float val2, float res, const char* unid) {
    if (pos_historico < MAX_HISTORICO) {
        strncpy(historico[pos_historico].tipo, tipo, 29);
        historico[pos_historico].valor1 = val1;
        historico[pos_historico].valor2 = val2;
        historico[pos_historico].resultado = res;
        strncpy(historico[pos_historico].unidade, unid, 19);
        pos_historico++;
    } else {
        // Rotaciona o histórico quando cheio
        for (int i = 0; i < MAX_HISTORICO-1; i++) {
            historico[i] = historico[i+1];
        }
        pos_historico = MAX_HISTORICO-1;
        strncpy(historico[pos_historico].tipo, tipo, 29);
        historico[pos_historico].valor1 = val1;
        historico[pos_historico].valor2 = val2;
        historico[pos_historico].resultado = res;
        strncpy(historico[pos_historico].unidade, unid, 19);
    }
}

void menu_principal() {
    int opcao;
    limpar_tela();
    
    printf("\n==============================================\n");
    printf("    CALCULADORA AVANÇADA DE MISTURAS QUÍMICAS\n");
    printf("==============================================\n\n");
    
    printf("Selecione o tipo de cálculo:\n\n");
    printf("1. Razão de Mistura (massa soluto/massa solvente)\n");
    printf("2. Molaridade (mol/L)\n");
    printf("3. Molalidade (mol/kg)\n");
    printf("4. Porcentagem em Massa (%% m/m)\n");
    printf("5. Conversor de Unidades\n");
    printf("6. Histórico de Cálculos\n");
    printf("7. Sair\n\n");
    printf("Digite sua opção (1-7): ");
    
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            calcular_razao_mistura();
            break;
        case 2:
            calcular_molaridade();
            break;
        case 3:
            calcular_molalidade();
            break;
        case 4:
            calcular_porcentagem_massa();
            break;
        case 5:
            converter_unidades();
            break;
        case 6:
            mostrar_historico();
            break;
        case 7:
            printf("\nPrograma encerrado. Obrigado!\n");
            exit(0);
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            getchar(); getchar();
            menu_principal();
    }
}

void calcular_razao_mistura() {
    float soluto, solvente;
    limpar_tela();
    
    printf("\n=== RAZÃO DE MISTURA ===\n\n");
    printf("Digite a massa do soluto (g): ");
    scanf("%f", &soluto);
    printf("Digite a massa do solvente (g): ");
    scanf("%f", &solvente);
    
    if(solvente == 0) {
        printf("\nErro: Massa do solvente não pode ser zero!\n");
    } else {
        float razao = soluto / solvente;
        printf("\nRESULTADO:\n");
        printf("Razão de mistura = %.4f g/g\n", razao);
        printf("(%.4f g de soluto por 1 g de solvente)\n", razao);
        adicionar_historico("Razão de Mistura", soluto, solvente, razao, "g/g");
    }
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    menu_principal();
}

void calcular_molaridade() {
    float moles, volume;
    limpar_tela();
    
    printf("\n=== MOLARIDADE (mol/L) ===\n\n");
    printf("Digite a quantidade de soluto (mol): ");
    scanf("%f", &moles);
    printf("Digite o volume da solução (L): ");
    scanf("%f", &volume);
    
    if(volume == 0) {
        printf("\nErro: Volume não pode ser zero!\n");
    } else {
        float molaridade = moles / volume;
        printf("\nRESULTADO:\n");
        printf("Molaridade = %.4f mol/L\n", molaridade);
        adicionar_historico("Molaridade", moles, volume, molaridade, "mol/L");
    }
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    menu_principal();
}

void calcular_molalidade() {
    float moles, massa_solvente;
    limpar_tela();
    
    printf("\n=== MOLALIDADE (mol/kg) ===\n\n");
    printf("Digite a quantidade de soluto (mol): ");
    scanf("%f", &moles);
    printf("Digite a massa do solvente (kg): ");
    scanf("%f", &massa_solvente);
    
    if(massa_solvente == 0) {
        printf("\nErro: Massa do solvente não pode ser zero!\n");
    } else {
        float molalidade = moles / massa_solvente;
        printf("\nRESULTADO:\n");
        printf("Molalidade = %.4f mol/kg\n", molalidade);
        adicionar_historico("Molalidade", moles, massa_solvente, molalidade, "mol/kg");
    }
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    menu_principal();
}

void calcular_porcentagem_massa() {
    float soluto, solucao;
    limpar_tela();
    
    printf("\n=== PORCENTAGEM EM MASSA (%%) ===\n\n");
    printf("Digite a massa do soluto (g): ");
    scanf("%f", &soluto);
    printf("Digite a massa total da solução (g): ");
    scanf("%f", &solucao);
    
    if(solucao == 0) {
        printf("\nErro: Massa da solução não pode ser zero!\n");
    } else {
        float porcentagem = (soluto / solucao) * 100;
        printf("\nRESULTADO:\n");
        printf("Porcentagem em massa = %.2f%%\n", porcentagem);
        adicionar_historico("% Massa", soluto, solucao, porcentagem, "%");
    }
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    menu_principal();
}

void converter_unidades() {
    int opcao;
    limpar_tela();
    
    printf("\n=== CONVERSOR DE UNIDADES ===\n\n");
    printf("Selecione o tipo de conversão:\n\n");
    printf("1. Massa (g, mg, kg, lb)\n");
    printf("2. Volume (L, mL, m³, gal)\n");
    printf("3. Concentração Molar (mol/L, mmol/L)\n");
    printf("4. Voltar ao menu principal\n\n");
    printf("Digite sua opção (1-4): ");
    
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            menu_conversao_massa();
            break;
        case 2:
            menu_conversao_volume();
            break;
        case 3:
            menu_conversao_molar();
            break;
        case 4:
            menu_principal();
            break;
        default:
            printf("\nOpção inválida! Tente novamente.\n");
            getchar(); getchar();
            converter_unidades();
    }
}

void menu_conversao_massa() {
    int de, para;
    float valor, resultado;
    limpar_tela();
    
    printf("\n=== CONVERSÃO DE MASSA ===\n\n");
    printf("Unidades disponíveis:\n");
    printf("1. Gramas (g)\n");
    printf("2. Miligramas (mg)\n");
    printf("3. Quilogramas (kg)\n");
    printf("4. Libras (lb)\n\n");
    
    printf("Converter de (1-4): ");
    scanf("%d", &de);
    printf("Para (1-4): ");
    scanf("%d", &para);
    printf("Digite o valor a converter: ");
    scanf("%f", &valor);
    
    // Converter para gramas primeiro
    switch(de) {
        case 1: break; // já está em gramas
        case 2: valor /= 1000; break; // mg para g
        case 3: valor *= 1000; break; // kg para g
        case 4: valor *= 453.592; break; // lb para g
        default:
            printf("\nUnidade de origem inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Converter de gramas para unidade desejada
    switch(para) {
        case 1: resultado = valor; break; // para gramas
        case 2: resultado = valor * 1000; break; // para mg
        case 3: resultado = valor / 1000; break; // para kg
        case 4: resultado = valor / 453.592; break; // para lb
        default:
            printf("\nUnidade de destino inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Nomes das unidades para exibição
    char *nomes[] = {"g", "mg", "kg", "lb"};
    
    printf("\nRESULTADO:\n");
    printf("%.4f %s = %.4f %s\n", valor, nomes[de-1], resultado, nomes[para-1]);
    adicionar_historico("Conversão Massa", valor, 0, resultado, nomes[para-1]);
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    converter_unidades();
}

void menu_conversao_volume() {
    int de, para;
    float valor, resultado;
    limpar_tela();
    
    printf("\n=== CONVERSÃO DE VOLUME ===\n\n");
    printf("Unidades disponíveis:\n");
    printf("1. Litros (L)\n");
    printf("2. Mililitros (mL)\n");
    printf("3. Metros cúbicos (m³)\n");
    printf("4. Galões (gal)\n\n");
    
    printf("Converter de (1-4): ");
    scanf("%d", &de);
    printf("Para (1-4): ");
    scanf("%d", &para);
    printf("Digite o valor a converter: ");
    scanf("%f", &valor);
    
    // Converter para litros primeiro
    switch(de) {
        case 1: break; // já está em litros
        case 2: valor /= 1000; break; // mL para L
        case 3: valor *= 1000; break; // m³ para L
        case 4: valor *= 3.78541; break; // gal para L
        default:
            printf("\nUnidade de origem inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Converter de litros para unidade desejada
    switch(para) {
        case 1: resultado = valor; break; // para L
        case 2: resultado = valor * 1000; break; // para mL
        case 3: resultado = valor / 1000; break; // para m³
        case 4: resultado = valor / 3.78541; break; // para gal
        default:
            printf("\nUnidade de destino inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Nomes das unidades para exibição
    char *nomes[] = {"L", "mL", "m³", "gal"};
    
    printf("\nRESULTADO:\n");
    printf("%.4f %s = %.4f %s\n", valor, nomes[de-1], resultado, nomes[para-1]);
    adicionar_historico("Conversão Volume", valor, 0, resultado, nomes[para-1]);
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    converter_unidades();
}

void menu_conversao_molar() {
    int de, para;
    float valor, resultado;
    limpar_tela();
    
    printf("\n=== CONVERSÃO DE CONCENTRAÇÃO MOLAR ===\n\n");
    printf("Unidades disponíveis:\n");
    printf("1. mol/L\n");
    printf("2. mmol/L\n\n");
    
    printf("Converter de (1-2): ");
    scanf("%d", &de);
    printf("Para (1-2): ");
    scanf("%d", &para);
    printf("Digite o valor a converter: ");
    scanf("%f", &valor);
    
    // Converter para mol/L primeiro
    switch(de) {
        case 1: break; // já está em mol/L
        case 2: valor /= 1000; break; // mmol/L para mol/L
        default:
            printf("\nUnidade de origem inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Converter de mol/L para unidade desejada
    switch(para) {
        case 1: resultado = valor; break; // para mol/L
        case 2: resultado = valor * 1000; break; // para mmol/L
        default:
            printf("\nUnidade de destino inválida!\n");
            getchar(); getchar();
            converter_unidades();
            return;
    }
    
    // Nomes das unidades para exibição
    char *nomes[] = {"mol/L", "mmol/L"};
    
    printf("\nRESULTADO:\n");
    printf("%.4f %s = %.4f %s\n", valor, nomes[de-1], resultado, nomes[para-1]);
    adicionar_historico("Conversão Molar", valor, 0, resultado, nomes[para-1]);
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    converter_unidades();
}

void mostrar_historico() {
    limpar_tela();
    
    printf("\n=== HISTÓRICO DE CÁLCULOS ===\n\n");
    
    if (pos_historico == 0) {
        printf("Nenhum cálculo no histórico.\n");
    } else {
        printf("%-25s %-10s %-10s %-15s %s\n", 
               "Tipo", "Valor 1", "Valor 2", "Resultado", "Unidade");
        printf("------------------------------------------------------------\n");
        
        for (int i = 0; i < pos_historico; i++) {
            printf("%-25s %-10.2f %-10.2f %-15.4f %s\n", 
                   historico[i].tipo, 
                   historico[i].valor1, 
                   historico[i].valor2, 
                   historico[i].resultado, 
                   historico[i].unidade);
        }
    }
    
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    menu_principal();
}