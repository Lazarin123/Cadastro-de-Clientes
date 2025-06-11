<h2>🚀 Sistema de Cadastro de Clientes em C 🚀</h2>
<p>Este é um sistema simples de cadastro de clientes desenvolvido em C. Ele permite que você cadastre novos clientes e visualize a quantidade total de clientes já registrados. Os dados são salvos em um arquivo de texto para que não se percam!</p>
<br>
<h2>✨ Funcionalidades</h2>
<p>📝 Cadastrar Cliente: Adicione um novo cliente informando seu nome e sobrenome.<br>
📋 Listar Clientes: Exibe o número total de clientes que já estão cadastrados.<br>
💾 Armazenamento Persistente: Seus clientes são salvos em um arquivo chamado "clientes.txt", então as informações não somem quando você fecha o programa!</p>
<br>
<h2>⚙️ Como Compilar e Rodar</h2>
<h3>Para colocar este projeto para funcionar, você precisará de um compilador C (como o GCC).</h3>
<p>1. Compilar: Abra seu terminal ou prompt de comando, navegue até a pasta onde você salvou o arquivo e use o seguinte comando:</p><br>

```bash
gcc cadastro.c -o cadastro.exe ou .out (dependendo de seu sistema.)
```
Rodar: Depois de compilar, execute o programa assim:

```bash
./cadastro.exe ou .out
```

<h2>🚀 Como Usar</h2>
<p>Ao rodar o programa, você verá uma mensagem de boas-vindas e um menu de opções:<br>
1. Cadastrar Cliente:<br>
Escolha a opção 1.<br>
O programa pedirá para você digitar o nome e sobrenome do cliente.<br>
As informações serão salvas no arquivo clientes.txt.<br><br>
2. Listar Clientes:<br>
Escolha a opção 2.<br>
O programa mostrará quantos clientes estão cadastrados no total.<br>
Atenção: Atualmente, esta opção apenas mostra a contagem total.<br><br>
3. Sair:<br>
Escolha a opção 3 para fechar o programa. 👋<br></p>

<h2>🏗️ Estrutura do Projeto</h2>
<p>"cadastro.c": Contém toda a lógica principal do sistema, incluindo as funções de abertura (mensagem de boas-vindas), escolha (menu de opções) e escolhas (que executa a ação escolhida).<br>
"clientes.txt": (Criado automaticamente se não existir) Este é o arquivo onde os dados dos clientes são armazenados.<br>
A primeira linha guarda a quantidade total de clientes, e as linhas seguintes guardam o nome e sobrenome de cada um.</p><br>

<h2>💡 Próximos Passos (Melhorias!)</h2>
<p>Exibir Clientes Individualmente: Modifique a opção "Listar Clientes" para que ela mostre o nome de cada cliente do clientes.txt. Seria super útil!<br>
Buscar/Deletar Cliente: Implemente funções para encontrar um cliente específico ou até mesmo deletar um cadastro.<br>
Validação de Entrada: Verifique se o usuário digitou algo válido (por exemplo, nomes não vazios).<br></p>

<h1>Sinta-se à vontade para explorar, contribuir ou usar este projeto como ponto de partida para suas próprias aventuras em C! 😊</h1>
