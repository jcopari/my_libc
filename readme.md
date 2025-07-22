<div align="center">

  __  __ _      _ _        _
 |  \/  (_) ___| (_) ___  | |
 | |\/| | |/ __| | |/ _ \ | |
 | |  | | | (__| | | (_) ||_|
 |_|  |_|_|\___|_|_|\___/ (_)


</div>

<h1 align="center">my_libc: Minha Biblioteca Pessoal em C</h1>

<p align="center">
Uma implementação personalizada de funções da Biblioteca Padrão do C para um entendimento profundo da programação de baixo nível.
</p>

<p align="center">
<a href="#"><img alt="Language" src="https://img.shields.io/badge/language-C-blue.svg?style=for-the-badge"></a>
<a href="#"><img alt="Build" src="https://img.shields.io/badge/build-passing-brightgreen.svg?style=for-the-badge"></a>
<a href="#"><img alt="Platform" src="https://img.shields.io/badge/platform-Linux%20%7C%20macOS-lightgrey.svg?style=for-the-badge"></a>
<a href="#"><img alt="License" src="https://img.shields.io/badge/license-MIT-informational.svg?style=for-the-badge"></a>
</p>
🗺️ Visão Geral do Projeto

my_libc é uma biblioteca estática (.a) que contém uma coleção de funções de propósito geral, recriadas do zero, sem o uso das implementações originais. O objetivo não é substituir a biblioteca padrão, mas sim dominar os conceitos fundamentais da programação em C.

O projeto é dividido em três partes principais:

    Funções da Libc: Recriação de funções clássicas como strlen, memcpy, atoi, entre outras, espelhando fielmente o comportamento das originais.

    Funções Adicionais: Desenvolvimento de funções úteis que não fazem parte da libc padrão, como my_split e my_itoa.

    Funções Bônus: Implementação de uma estrutura de dados de lista ligada e funções para manipulá-la, demonstrando a capacidade de trabalhar com estruturas de dados complexas.

🎯 Por Que Este Projeto é Importante? (Para Recrutadores)

Em um mundo de linguagens de alto nível e abstrações, desenvolver uma biblioteca em C do zero é um diferencial que atesta uma compreensão profunda dos pilares da computação. Este projeto demonstra:

    🧠 Domínio dos Fundamentos de C: Prova de proficiência em uma linguagem que é a base para muitas outras tecnologias. Evidencia a capacidade de trabalhar com ponteiros, tipos de dados e operações de baixo nível de forma eficaz e segura.

    🔒 Gerenciamento de Memória Explícito: Ao usar malloc e free constantemente, demonstro responsabilidade e disciplina no gerenciamento de memória, uma habilidade crítica para prevenir memory leaks, segmentation faults e outras vulnerabilidades.

    🛡️ Desenvolvimento de Código Robusto e Seguro: A necessidade de recriar funções seguras como my_strlcpy e lidar com casos extremos desenvolve uma mentalidade focada em robustez e segurança.

    🧩 Criação de Ferramentas Reutilizáveis: A construção de uma biblioteca funcional ensina sobre design de API, modularidade e a importância de criar código limpo e bem documentado que pode ser facilmente integrado em outros projetos.

🛠️ Habilidades Desenvolvidas

Este projeto foi fundamental para desenvolver e solidificar um conjunto de habilidades técnicas e conceituais essenciais:

Habilidade Técnica
	

Descrição

Programação em C
	

Fluência na sintaxe, tipos de dados, estruturas de controle e paradigmas da linguagem.

Gerenciamento de Memória
	

Alocação (malloc, calloc) e liberação (free) de memória na heap de forma manual e segura.

Ponteiros
	

Manipulação avançada de ponteiros, incluindo ponteiros para funções e aritmética de ponteiros.

Estruturas de Dados
	

Implementação e manipulação de listas ligadas, uma estrutura de dados fundamental.

Algoritmos
	

Desenvolvimento de algoritmos para busca, manipulação de strings e conversão de dados.

Automação de Build
	

Criação de Makefiles para compilar, limpar e gerenciar o projeto de forma eficiente.

Debugging
	

Capacidade de identificar e corrigir erros complexos, como vazamentos de memória e falhas de segmentação.
🚀 Como Usar

Para utilizar a my_libc em outro projeto, siga os passos:

    Clone o repositório:

    git clone https://github.com/seu-usuario/my_libc.git

    Compile a biblioteca:
    Dentro do diretório my_libc, execute o Makefile para criar o arquivo my_libc.a.

    make

    Integre ao seu projeto:
    Ao compilar seu projeto principal, inclua o cabeçalho my_libc.h e link a biblioteca estática.

    cc seu_projeto.c -L/caminho/para/my_libc -lmy_libc -I/caminho/para/my_libc/includes

    (Ajuste os caminhos conforme necessário).

📊 Painel Interativo do Projeto

Para uma visualização interativa do cronograma de desenvolvimento, conceitos abordados e lista de funções, acesse o painel de controle do projeto:

[Cronograma de criação do projeto + legenda das funções](https://jcopari.github.io/my_libc/)