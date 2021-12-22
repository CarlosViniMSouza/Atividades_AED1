/*

--> Alterações em nossa lista:

Agora que você já deve ter se familiarizado com os conceitos e lógicas de tirar e inserir elementos em uma lista, vamos fazer algumas mudanças, deixar o programa mais robusto e flexível.

Já no tutorial passado, na parte de inserir elementos, criamosa a função aloca(), que como o próprio nome diz, ela vai alocar espaço para uma estrutura, um nó em nossa lista.

Ela pede para inserir o número, colocar na variável 'num' da struct e retorna o endereço alocado dinamicamente.

Agora, criamos também a variável global tam, que irá armazenar o tamanho de nossa lista.

Ou seja, quantos nós tem nossa lista. E para contabilizar isso, toda vez que criamos um nó, incrementamos essa variável.

Analogamente, sempre que tiramos uma struct da lista, decrementamos a variável.

Alteramos também a função exibe, que agora exibe a ordem dos elementos na lista.
Conforme podemos ver na imagem no início deste tutorial.

*/

/*

--> Como inserir nós em qualquer posição da lista:

Vamos agora mostrar como criar a função insere() que recebe a LISTA e pergunta ao usuário em que posição o usuário quer inserir o elemento na lista. Ou seja, se queremos inserir na posição 'n', o elemento vai ficar nessa posição 'n' e o que estava lá antigamente vai para frente, para posição 'n+1'.

O usuário vai dizer a posição e está sera armazenada na variável pos.

Podemos inserir desde a posição 1 até a 'tam'.

Obviamente, fora desse intervalo devemos mostrar uma mensagem de erro.

Feita essa verificação da posição, vamos adicionar o elemento na dita posição.

Caso seja posição 1, não devemos nos estressar.

Afinal, inserir um elemento na posição 1 é inserir uma estrutura no início da lista, e já criamos uma função para isto, a insereInicio(), bastando chamar ela: insereInicio(LISTA);

Caso seja em qualquer outra posição, a coisa fica mais trabalhosa.

O segredo para isto é identificar dois elementos.o anterior e o elemento que está naquela posição.

Por exemplo, se queremos colocar um nó na terceira posição, devemos guardar essa posição e a anterior, pois iremos fazer o segundo elemento apontar para o novo nó, e fazer esse novo nó apontar para aquele que estava na terceira posição.

Para isso vamos usar dois ponteiros do tipo node, o tipo de nossa estrutura: o 'atual' e o 'anterior'.

O atual começa no primeiro nó da LISTA, e o anterior não está em uma posição anterior (um aponta para LISTA->prox e o outro para LISTA).

Agora temos que fazer estes dois pontos 'correrem' pela lista até chegar onde queremos.

Vamos usar um laço for para isso, e em cada iteração fazemos o seguinte:

Fazemos o ponteiro 'anterior' receber o ponteiro 'atual', e depois fazemos o 'atual' receber o próximo elemento da lista, que é o 'atual -> prox'.

E agora vamos inserir nosso nó, que criamos ao declarar o ponteiro 'novo' e fazer ele receber um bloco alocado pela função aloca().

Vamos lá, devagar pois não é tão simples.

Temos dois nós: o 'atual' e o 'anterior'. Queremos colocar um novo nó, o 'novo', no lugar do nó 'atual' e empurrar o 'atual' pra frente.

Para isso, devemos pegar o 'anterior' e fazer apontar para o 'novo': anterior -> prox = novo;

E o novo nó deve apontar para o que estava nesse posição: novo -> prox = atual;

E claro, incrementar o tamanho da lista: tam++;

Pronto. Já podemos colocar um nó no início, no fim ou em qualquer lugar de nossa lista :)

Vamos para o próximo passo: retirar elementos de nossa lista.

*/

/*

--> Como retirar estruturas de uma lista:

Se já leu todos nossos tutoriais sobre listas em C, certamente já deve ter em mente como implementar um algoritmo que retire um elemento.

Vamos usar exatamente a mesma ideia que usamos na parte passada do tutorial, para achar os elementos 'atual' (que vamos excluir) e o anterior a ele.

Ou seja, aquele mesmo laço while será usado, da mesma maneira.

Porém, não vamos precisar de um novo nó, afinal não vamos adicionar nada, e sim retirar a struct apontada pelo ponteiro 'atual'.

E como vimos diversas, o ato de 'retirar' um nó de uma lista é simplesmente deixar de apontar algum elemento da lista para ele.

Quem aponta para o elemento que queremos retirar é: anterior -> prox

Qual elemento que vem após o elemento que vamos retirar: atual -> prox

Elemento retirado, que devemos retornar da função: atual

Ou seja, para excluir, basta apontarmos o elemento anterior ao que queremos retirar, para aquele elemento que vem DEPOIS do que queremos retirar.

Isso é feito da seguinte maneira: anterior -> prox = atual -> prox

E pronto. A lista continua ligada, mas sem o elemento 'atual', na qual retornamos, sem antes decrementar a variável tam, já que retiramos uma estrutura da lista.

*/