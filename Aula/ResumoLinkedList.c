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
