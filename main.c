#include <stdio.h>
#include <stdlib.h>


void boas_vindas() {
    printf("|===============================================|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|  Bem-vindo ao Consultor Químico!\t\t|\n");
    printf("|  Aqui você pode consultar misturas químicas.  |\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|===============================================|\n\n");
}


void desenho_quimico_etilenico(){
    printf("  H   O   H\n");
    printf("   \\ / \\ /\n");
    printf("    C---C\n");
    printf("   / \\ / \\\n");
    printf("  H   O   H\n");
    printf("\n");
    printf("Estrutura simples de uma molécula de etileno (C2H4).\n\n\n");
}





void mostrar_elemento(){
    printf("\t Elemento\t\tSimbolo\t\tNumero atômico\t\tMassa Atômica\n");
    printf("\t1 - [Hidrogênio]\t  H\t              1\t\t            1,00797\n");
    printf("\t2 - [Hélio]\t          He\t              2\t\t            4,0026\n");
    printf("\t3 - [Lítio]\t          Li\t              3\t\t            6,941\n");
    printf("\t4 - [Berílio]\t          Be\t              4\t\t            9,0122\n");
    printf("\t5 - [Boro]\t          B\t              5\t\t            10,81\n");
    printf("\t6 - [Carbono]\t          C\t              6\t\t            12,011\n");
    printf("\t7 - [Nitrogênio]\t  N\t              7\t\t            14,007\n");
    printf("\t8 - [Oxigênio]\t          O\t              8\t\t            15,999\n");
    printf("\t9 - [Flúor]\t          F\t              9\t\t            18,998\n");
    printf("\t10 - [Neônio]\t          Ne\t              10\t\t    20,180\n");
    printf("\t11 - [Sódio]\t          Na\t              11\t\t    22,990\n");
    printf("\t12 - [Magnésio]\t          Mg\t              12\t\t    24,305\n");
    printf("\t13 - [Alumínio]\t          Al\t              13\t\t    26,982\n");
    printf("\t14 - [Silício]\t          Si\t              14\t\t    28,085\n");
    printf("\t15 - [Fósforo]\t          P\t              15\t\t    30,974\n");
    printf("\t16 - [Enxofre]\t          S\t              16\t\t    32,06\n");
    printf("\t17 - [Cloro]\t          Cl\t              17\t\t    35,45\n");
    printf("\t18 - [Argônio]\t          Ar\t              18\t\t    39,948\n");
    printf("\t19 - [Potássio]\t          K\t              19\t\t    39,098\n");
    printf("\t20 - [Cálcio]\t          Ca\t              20\t\t    40,078\n");
    printf("\t21 - [Escândio]\t          Sc\t              21\t\t    44,956\n");
    printf("\t22 - [Titânio]\t          Ti\t              22\t\t    47,867\n");
    printf("\t23 - [Vanádio]\t          V\t              23\t\t    50,942\n");
    printf("\t24 - [Cromo]\t          Cr\t              24\t\t    52,00\n");
    printf("\t25 - [Manganês]\t          Mn\t              25\t\t    54,938\n");
    printf("\t26 - [Ferro]\t          Fe\t              26\t\t    55,845\n");
    printf("\t27 - [Cobalto]\t          Co\t              27\t\t    58,933\n");
    printf("\t28 - [Níquel]\t          Ni\t              28\t\t    58,693\n");
    printf("\t29 - [Cobre]\t          Cu\t              29\t\t    63,546\n");
    printf("\t30 - [Zinco]\t          Zn\t              30\t\t    65,38\n");
    printf("\t31 - [Gálio]\t          Ga\t              31\t\t    69,723\n");
    printf("\t32 - [Germânio]\t          Ge\t              32\t\t    72,63\n");
    printf("\t33 - [Arsênio]\t          As\t              33\t\t    74,922\n");
    printf("\t34 - [Selênio]\t          Se\t              34\t\t    78,971\n");
    printf("\t35 - [Bromo]\t          Br\t              35\t\t    79,904\n");
    printf("\t36 - [Kripton]\t          Kr\t              36\t\t    83,798\n");
    printf("\t37 - [Rubídio]\t          Rb\t              37\t\t    85,468\n");
    printf("\t38 - [Estrôncio]\t  Sr\t              38\t\t    87,62\n");
    printf("\t39 - [Ítrio]\t          Y\t              39\t\t    88,906\n");
    printf("\t40 - [Zircônio]\t          Zr\t              40\t\t    91,224\n");
    printf("\t41 - [Nióbio]\t          Nb\t              41\t\t    92,906\n");
    printf("\t42 - [Molibdênio]\t  Mo\t              42\t\t    95,95\n");
    printf("\t43 - [Tecnécio]\t          Tc\t              43\t\t    98,0\n");
    printf("\t44 - [Rutênio]\t          Ru\t              44\t\t    101,07\n");
    printf("\t45 - [Ródio]\t          Rh\t              45\t\t    102,91\n");
    printf("\t46 - [Paládio]\t          Pd\t              46\t\t    106,42\n");
    printf("\t47 - [Prata]\t          Ag\t              47\t\t    107,868\n");
    printf("\t48 - [Cádmio]\t          Cd\t              48\t\t    112,41\n");
    printf("\t49 - [Índio]\t          In\t              49\t\t    114,82\n");
    printf("\t50 - [Estanho]\t          Sn\t              50\t\t    118,71\n");
    printf("\t51 - [Antimônio]\t  Sb\t              51\t\t    121,76\n");
    printf("\t52 - [Telúrio]\t          Te\t              52\t\t    127,60\n");
    printf("\t53 - [Iodo]\t          I\t              53\t\t    126,90\n");
    printf("\t54 - [Xenônio]\t          Xe\t              54\t\t    131,29\n");
    printf("\t55 - [Cesário]\t          Cs\t              55\t\t    132,91\n");
    printf("\t56 - [Bário]\t          Ba\t              56\t\t    137,33\n");
    printf("\t57 - [Lantânio]\t          La\t              57\t\t    138,91\n");
    printf("\t58 - [Cério]\t          Ce\t              58\t\t    140,12\n");
    printf("\t59 - [Praseodímio]\t  Pr\t              59\t\t    140,91\n");
    printf("\t60 - [Neodímio]\t          Nd\t              60\t\t    144,24\n");
    printf("\t61 - [Promécio]\t          Pm\t              61\t\t    145,0\n");
    printf("\t62 - [Samário]\t          Sm\t              62\t\t    150,36\n");
    printf("\t63 - [Európio]\t          Eu\t              63\t\t    151,96\n");
    printf("\t64 - [Gadolínio]\t  Gd\t              64\t\t    157,25\n");
    printf("\t65 - [Térbio]\t          Tb\t              65\t\t    158,93\n");
    printf("\t66 - [Disprósio]\t  Dy\t              66\t\t    162,50\n");
    printf("\t67 - [Hólmio]\t          Ho\t              67\t\t    164,93\n");
    printf("\t68 - [Érbio]\t          Er\t              68\t\t    167,26\n");
    printf("\t69 - [Túlio]\t          Tm\t              69\t\t    168,93\n");
    printf("\t70 - [Itérbio]\t          Yb\t              70\t\t    173,04\n");
    printf("\t71 - [Lutécio]\t          Lu\t              71\t\t    175,00\n");
    printf("\t72 - [Háfnio]\t          Hf\t              72\t\t    178,49\n");
    printf("\t73 - [Tântalo]\t          Ta\t              73\t\t    180,95\n");
    printf("\t74 - [Tungstênio]\t  W\t              74\t\t    183,84\n");
    printf("\t75 - [Rênio]\t          Re\t              75\t\t    186,21\n");
    printf("\t76 - [Ósmio]\t          Os\t              76\t\t    190,23\n");
    printf("\t77 - [Irídio]\t          Ir\t              77\t\t    192,22\n");
    printf("\t78 - [Platina]\t          Pt\t              78\t\t    195,08\n");
    printf("\t79 - [Ouro]\t          Au\t              79\t\t    196,97\n");
    printf("\t80 - [Mercúrio]\t          Hg\t              80\t\t    200,59\n");
    printf("\t81 - [Tálio]\t          Tl\t              81\t\t    204,38\n");
    printf("\t82 - [Chumbo]\t          Pb\t              82\t\t    207,2\n");
    printf("\t83 - [Bismuto]\t          Bi\t              83\t\t    208,98\n");
    printf("\t84 - [Polônio]\t          Po\t              84\t\t    209,98\n");
    printf("\t85 - [Astato]\t          At\t              85\t\t    210,0\n");
    printf("\t86 - [Radônio]\t          Rn\t              86\t\t    222,0\n");
    printf("\t87 - [Frâncio]\t          Fr\t              87\t\t    223,0\n");
    printf("\t88 - [Radônio]\t          Ra\t              88\t\t    226,0\n");
    printf("\t89 - [Actínio]\t          Ac\t              89\t\t    227,0\n");
    printf("\t90 - [Tório]\t          Th\t              90\t\t    232,04\n");
    printf("\t91 - [Protactínio]\t  Pa\t              91\t\t    231,04\n");
    printf("\t92 - [Urânio]\t          U\t              92\t\t    238,03\n");
    printf("\t93 - [Neptúnio]\t          Np\t              93\t\t    237,0\n");
    printf("\t94 - [Plutônio]\t          Pu\t              94\t\t    244,0\n");
    printf("\t95 - [Amerício]\t          Am\t              95\t\t    243,0\n");
    printf("\t96 - [Curió]\t          Cm\t              96\t\t    247,0\n");
    printf("\t97 - [Berquélio]\t  Bk\t              97\t\t    247,0\n");
    printf("\t98 - [Califórnio]\t  Cf\t              98\t\t    251,0\n");
    printf("\t99 - [Einsteínio]\t  Es\t              99\t\t    252,0\n");
    printf("\t100 - [Fermio]\t          Fm\t              100\t\t    257,0\n");
    printf("\t101 - [Mendelévio]\t  Md\t              101\t\t    258,0\n");
    printf("\t102 - [Nobelio]\t          No\t              102\t\t    259,0\n");
    printf("\t103 - [Lawrêncio]\t  Lr\t              103\t\t    262,0\n");
    printf("\t104 - [Rutherfórdio]\t  Rf\t              104\t\t    267,0\n");
    printf("\t105 - [Dúbnio]\t          Db\t              105\t\t    270,0\n");
    printf("\t106 - [Seabórgio]\t  Sg\t              106\t\t    271,0\n");
    printf("\t107 - [Bohrium]\t          Bh\t              107\t\t    270,0\n");
    printf("\t108 - [Hassio]\t          Hs\t              108\t\t    277,0\n");
    printf("\t109 - [Meitnério]\t  Mt\t              109\t\t    276,0\n");
    printf("\t110 - [Darmstádio]\t  Ds\t              110\t\t    281,0\n");
    printf("\t111 - [Roentgênio]\t  Rg\t              111\t\t    280,0\n");
    printf("\t112 - [Copernício]\t  Cn\t              112\t\t    285,0\n");
    printf("\t113 - [Nihônio]\t          Nh\t              113\t\t    284,0\n");
    printf("\t114 - [Fleróvio]\t  Fl\t              114\t\t    289,0\n");
    printf("\t115 - [Moscóvio]\t  Mc\t              115\t\t    290,0\n");
    printf("\t116 - [Livermório]\t  Lv\t              116\t\t    293,0\n");
    printf("\t117 - [Tenessino]\t  Ts\t              117\t\t    294,0\n");
    printf("\t118 - [Oganessônio]\t  Og\t              118\t\t    294,0\n");
}








// Função para mostrar o nome e símbolo do elemento com base no número atômico
void escolher_elemento(int numeroAtomico) {
    switch (numeroAtomico) {
        case 1: printf("Hidrogênio (H)\n"); break;
        case 2: printf("Hélio (He)\n"); break;
        case 3: printf("Lítio (Li)\n"); break;
        case 4: printf("Berílio (Be)\n"); break;
        case 5: printf("Boro (B)\n"); break;
        case 6: printf("Carbono (C)\n"); break;
        case 7: printf("Nitrogênio (N)\n"); break;
        case 8: printf("Oxigênio (O)\n"); break;
        case 9: printf("Flúor (F)\n"); break;
        case 10: printf("Neônio (Ne)\n"); break;
        case 11: printf("Sódio (Na)\n"); break;
        case 12: printf("Magnésio (Mg)\n"); break;
        case 13: printf("Alumínio (Al)\n"); break;
        case 14: printf("Silício (Si)\n"); break;
        case 15: printf("Fósforo (P)\n"); break;
        case 16: printf("Enxofre (S)\n"); break;
        case 17: printf("Cloro (Cl)\n"); break;
        case 18: printf("Argônio (Ar)\n"); break;
        case 19: printf("Potássio (K)\n"); break;
        case 20: printf("Cálcio (Ca)\n"); break;
        case 21: printf("Escândio (Sc)\n"); break;
        case 22: printf("Titânio (Ti)\n"); break;
        case 23: printf("Vanádio (V)\n"); break;
        case 24: printf("Cromo (Cr)\n"); break;
        case 25: printf("Manganês (Mn)\n"); break;
        case 26: printf("Ferro (Fe)\n"); break;
        case 27: printf("Cobalto (Co)\n"); break;
        case 28: printf("Níquel (Ni)\n"); break;
        case 29: printf("Cobre (Cu)\n"); break;
        case 30: printf("Zinco (Zn)\n"); break;
        case 31: printf("Gálio (Ga)\n"); break;
        case 32: printf("Germânio (Ge)\n"); break;
        case 33: printf("Arsênio (As)\n"); break;
        case 34: printf("Selênio (Se)\n"); break;
        case 35: printf("Bromo (Br)\n"); break;
        case 36: printf("Kripton (Kr)\n"); break;
        case 37: printf("Rubídio (Rb)\n"); break;
        case 38: printf("Estrôncio (Sr)\n"); break;
        case 39: printf("Ítrio (Y)\n"); break;
        case 40: printf("Zircônio (Zr)\n"); break;
        case 41: printf("Nióbio (Nb)\n"); break;
        case 42: printf("Molibdênio (Mo)\n"); break;
        case 43: printf("Tecnécio (Tc)\n"); break;
        case 44: printf("Rutênio (Ru)\n"); break;
        case 45: printf("Ródio (Rh)\n"); break;
        case 46: printf("Paládio (Pd)\n"); break;
        case 47: printf("Prata (Ag)\n"); break;
        case 48: printf("Cádmio (Cd)\n"); break;
        case 49: printf("Índio (In)\n"); break;
        case 50: printf("Estanho (Sn)\n"); break;
        case 51: printf("Antimônio (Sb)\n"); break;
        case 52: printf("Telúrio (Te)\n"); break;
        case 53: printf("Iodo (I)\n"); break;
        case 54: printf("Xenônio (Xe)\n"); break;
        case 55: printf("Cesário (Cs)\n"); break;
        case 56: printf("Bário (Ba)\n"); break;
        case 57: printf("Lantânio (La)\n"); break;
        case 58: printf("Cério (Ce)\n"); break;
        case 59: printf("Praseodímio (Pr)\n"); break;
        case 60: printf("Neodímio (Nd)\n"); break;
        case 61: printf("Promécio (Pm)\n"); break;
        case 62: printf("Samário (Sm)\n"); break;
        case 63: printf("Európio (Eu)\n"); break;
        case 64: printf("Gadolínio (Gd)\n"); break;
        case 65: printf("Térbio (Tb)\n"); break;
        case 66: printf("Disprósio (Dy)\n"); break;
        case 67: printf("Hólmio (Ho)\n"); break;
        case 68: printf("Érbio (Er)\n"); break;
        case 69: printf("Túlio (Tm)\n"); break;
        case 70: printf("Itérbio (Yb)\n"); break;
        case 71: printf("Lutécio (Lu)\n"); break;
        case 72: printf("Háfnio (Hf)\n"); break;
        case 73: printf("Tântalo (Ta)\n"); break;
        case 74: printf("Tungstênio (W)\n"); break;
        case 75: printf("Rênio (Re)\n"); break;
        case 76: printf("Ósmio (Os)\n"); break;
        case 77: printf("Irídio (Ir)\n"); break;
        case 78: printf("Platina (Pt)\n"); break;
        case 79: printf("Ouro (Au)\n"); break;
        case 80: printf("Mercúrio (Hg)\n"); break;
        case 81: printf("Tálio (Tl)\n"); break;
        case 82: printf("Chumbo (Pb)\n"); break;
        case 83: printf("Bismuto (Bi)\n"); break;
        case 84: printf("Polônio (Po)\n"); break;
        case 85: printf("Astato (At)\n"); break;
        case 86: printf("Radônio (Rn)\n"); break;
        case 87: printf("Francio (Fr)\n"); break;
        case 88: printf("Radônio (Ra)\n"); break;
        case 89: printf("Actínio (Ac)\n"); break;
        case 90: printf("Tório (Th)\n"); break;
        case 91: printf("Protactínio (Pa)\n"); break;
        case 92: printf("Urânio (U)\n"); break;
        case 93: printf("Neptúnio (Np)\n"); break;
        case 94: printf("Plutônio (Pu)\n"); break;
        case 95: printf("Amerício (Am)\n"); break;
        case 96: printf("Curió (Cm)\n"); break;
        case 97: printf("Berquélio (Bk)\n"); break;
        case 98: printf("Califórnio (Cf)\n"); break;
        case 99: printf("Einsteínio (Es)\n"); break;
        case 100: printf("Fermio (Fm)\n"); break;
        case 101: printf("Mendelévio (Md)\n"); break;
        case 102: printf("Nobelio (No)\n"); break;
        case 103: printf("Laurêncio (Lr)\n"); break;
        case 104: printf("Rutherfordio (Rf)\n"); break;
        case 105: printf("Dúbnio (Db)\n"); break;
        case 106: printf("Seabórgio (Sg)\n"); break;
        case 107: printf("Bohrio (Bh)\n"); break;
        case 108: printf("Hassio (Hs)\n"); break;
        case 109: printf("Meitnério (Mt)\n"); break;
        case 110: printf("Darmstádio (Ds)\n"); break;
        case 111: printf("Roentgênio (Rg)\n"); break;
        case 112: printf("Copernício (Cn)\n"); break;
        case 113: printf("Nihônio (Nh)\n"); break;
        case 114: printf("Fleróvio (Fl)\n"); break;
        case 115: printf("Moscóvio (Mc)\n"); break;
        case 116: printf("Livermório (Lv)\n"); break;
        case 117: printf("Tenessino (Ts)\n"); break;
        case 118: printf("Oganessônio (Og)\n"); break;
        default: printf("Elemento não encontrado.\n");
    }
}






// Função para calcular a molaridade
double calcular_molaridade(double massa_soluto, double massa_molar, double volume_litros) {
    // Calculando a quantidade de matéria (n) do soluto
    double quantidade_materia = massa_soluto / massa_molar;

    // Calculando a molaridade (M = n / V)
    double molaridade = quantidade_materia / volume_litros;

    return molaridade;
}



int main() {
    double massa_soluto, massa_molar, volume_litros;
    int numeroAtomico;

    // Tela inicial de boas-vindas + desenho quimico de um etileno
    boas_vindas();
    desenho_quimico_etilenico();
    printf("\n\n\n");

    // Mostrando todos os elementos químicos
    mostrar_elemento();

    // Solicitar ao usuário a escolha de um elemento
    printf("Escolha o número do elemento (1 a 118): ");
    scanf("%d", &numeroAtomico);
    escolher_elemento(numeroAtomico);

    // Solicitar ao usuário os valores necessários para calcular a molaridade
    printf("\nDigite a massa do soluto em gramas: ");
    scanf("%lf", &massa_soluto);
    printf("Digite a massa molar do soluto em g/mol: ");
    scanf("%lf", &massa_molar);
    printf("Digite o volume da solução em litros: ");
    scanf("%lf", &volume_litros);

    // Calculando a molaridade
    double molaridade = calcular_molaridade(massa_soluto, massa_molar, volume_litros);

    // Exibindo o resultado
    printf("\nA molaridade da solução é: %.2lf mol/L\n", molaridade);

    return 0;
}
 
