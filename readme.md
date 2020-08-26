# Configurando VSCode para execução de códigos C/C++ (Windows)

## 1. Baixando o MinGW

Acesse o [link](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download) para fazer o download do MinGW e escolha as configurações apropriadas ao seu sistema operacional e instale-o.

### Possíveis problemas
Durante a instalação, é possível que você receba algum tipo de mensagem informando que o download não pode ser concluído (não tenho ideia do motivo, mas há issues abertas quanto a isso).
Neste caso, você pode baixar diretamente a pasta compatível com a sua arquitetura [aqui](https://sourceforge.net/projects/mingw-w64/files/mingw-w64/).

#### Exemplo
Para efeito de exemplo, meu sistema operacional é Windows 10.
Estou utilizando a versão com arquitetura **x86_64**, threads do tipo **win32** e exceptions do tipo **seh**, que obtive [aqui](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-win32/seh/x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z).

******

## 2. Configurando o MinGW no PATH

Após baixar os arquivos, é necessário extraí-los com um programa que suporte a extensão [**.7z**](https://www.7-zip.org/) para uma pasta à sua escolha.

Dentro da pasta de destino, há uma pasta **/mingw64/bin**, que deve ser apontada na variável **PATH** do Windows, informando seu caminho completo.

#### Exemplo:
Supondo que o local escolhido para a extração do conteúdo do download seja "C:\Teste\MinGW", deve ser informado o valor "C:\Teste\MinGW\mingw64\bin" na variável PATH do Windows.

Para acessar as variáveis de ambiente do sistema, siga os passos abaixo:

- Em busca, procure por "env"
- Selecione a opção "Editar variáveis de ambiente do sistema"
- Na guia "Avançado", selecione a opção "Variáveis de ambiente"
- No grupo "Variáveis do sistema", procure pela variável PATH e clique em "Editar"
- Adicione o novo caminho completo correspondente à pasta **/bin** do seu MinGW (nesse caso do exemplo, **C:\Teste\MinGW\mingw64\bin**)

### ***PELO AMOR DE ODIN, NÃO VÁ SOBRESCREVER LINHAS QUE JÁ ESTÃO NA PATH***
kkkk Crie a uma linha nova pra você, senão pode zuar a bagaça

******

## 3. Configurando o launcher do VSCode

O VSCode pode ser baixado [aqui](https://code.visualstudio.com/).

Para que o debug funcione direitinho, é necessário baixar a extensão do [C/C++](https://code.visualstudio.com/docs/languages/cpp).

No VSCode, a execução e compilação de projetos é configurada a partir de arquivos JSON.
Na pasta /.vscode, há 3 arquivos principais, responsáveis por gerenciar essa configuração:

- c_cpp_properties.json
- launch.json
- tasks.json

### Arquivo **c_cpp_properties.json**

É o arquivo responsável por configurar o Intellisense nos arquivos **.c/.c++**.

Possui uma propriedade chamada **"compilerPath"**, onde deve ser informado o caminho do executável **g++.exe**, que fica dentro da pasta **/bin**, configurada anteriormente.
- No caso do exemplo do item 2, seu valor seria **"C:/Teste/MinGW/mingw64/bin/g++.exe"**

### Arquivo **tasks.json**

É responsável por definir as tarefas a serem feitas em um determinado projeto. No caso deste exemplo, sua função é chamar o compilador **gcc** e solicitar a compilação dos arquivos **.c**, para que um aplicativo executável **.exe** seja gerado e você consiga executá-lo sem necessidade dos arquivos de código.


Possui uma propriedade chamada **"command"**, que aponta para o caminho do executável **g++.exe**, assim como a propriedade **"compilerPath"** do arquivo **c_cpp_properties.json**.
- No caso do exemplo do item 2, seu valor seria **"C:/Teste/MinGW/mingw64/bin/g++.exe"**

### Arquivo **launch.json**

É responsável por fazer o launch, ou seja, executar sua aplicação a partir dos arquivos **.c**.
Possui uma propriedade chamada **"miDebuggerArgs"**, que aponta para o caminho do executável **gdb.exe**, que fica dentro da pasta **/bin**.
- No caso do exemplo do item 2, seu valor seria **"C:/Teste/MinGW/mingw64/bin/gdb.exe"**.


Além disso, este arquivo possui uma propriedade **"preLaunchTask"**, que indica quais são as tarefas a serem executadas antes de executar o arquivo. Ou seja, no caso deste exemplo, são as tarefas configuradas no arquivo **"tasks.json"**.


******

A explicação está tão detalhado a respeito das outras proriedades dos 3 arquivos de configuração, mas todas as propriedades são bem explicadas no [link](https://code.visualstudio.com/docs/cpp/config-mingw).


******

## Ficam aqui também algumas sugestões de extensões do VSCode:

[Visual Studio KeyMap](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vs-keybindings): ferramente útil que traz muitos dos atalhos disponíveis no Visual Studio
- CTRL + K + D: indentar arquivo, de acordo com o tipo de arquivo e extensões instaladas
- Diversos outros disponíveis na documentação

[EditorConfig](https://marketplace.visualstudio.com/items?itemName=EditorConfig.EditorConfig): útil para definição de regras de indentação e espaçamento de arquivos

[VSCode Icons](https://marketplace.visualstudio.com/items?itemName=vscode-icons-team.vscode-icons): Como o nome já diz, essa extensão traz vários ícones bem legais para arquivos, que variam de acordo com o tipo de projeto/repositório.

******


### Espero ter ajudado! :smiley:
