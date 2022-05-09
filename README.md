# <b>AEDS: Funções com Lista</b>
<h3>Problemática</h3>
<p style="text-aling: center;">Crie uma lista que consiga armazenar um conjunto de 100 nomes quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura conduza as seguintes ações: </p>
<div style="margin: 30px 30px 30px 30px;">
	<ul>
		<li>
			<p>Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova
todas as réplicas sem mover os ”ponteiro“.</p></li><li><p>Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?</p>
		</li>
	</ul>
</div>
<h3>Solução</h3>
<p style="text-aling: center;">Tendo em vista a problemática, a estrutura selecionada para sua resolução foi a lista encadeada simples. Contextualizando, uma lista encadeada simples é uma sequência de células; cada célula contém um objeto (todos os objetos são do mesmo tipo) e o endereço da célula seguinte.  Nesse contexto, é empregado o Item nas células sendo que cada objeto é um registro que pode ser definido assim:</p> 
<div>
	<code><pre>Class Item{
	string value;
	Item *prox;
};</pre></code>
</div><br>
<p>Para exemplificar a implementação de listas encadeadas simples, vamos considerar Figura 1. Nela é possivel observar a representação do algoritimo, no qual é necessário armazenar o endereço de início e fim para que ela nao desapareça durante o processamento. 
<br><img src="img/img1.png"><br>
<p>Visto isso, após contruir todas essas estruturas, resta apenas implementar uma função que seja capaz de verificar Itens repetidos dentro da lista. Nessa conjuntura, é importante enfatizar que um item pode ou nao possuir valor, desse modo torna-se facil efeturar a "exclusão" dos itens duplicados no sistema. Assim sendo, para expor um Item vazio basta categorizar um valor especial que o identifique como tal. Este projeto utiliza da seguinte estrutura para isso:</p>
<div>
	<code><pre>Item::Item(){
	this->value = "-";
};</pre></code>
</div><br>
<p>Com isso, o software identifica objetos repetidos no interior da lista e os torna vazios.</p>
<p>Por fim, para atender o quesito de  remover todas as réplicas sem mover os ”ponteiro“, basta desconsiderar os elementos vazios durante a apresentação da lista ao usuário.</p>

<p>No que se trata do gerenciamento dos espaços em branco para novas inserções, o custo será a busca por algum elemento vazio dentro da lista e consequentemente a inserção do valor no respectivo local. Espera-se, no pior caso, uma complexidade de <i>n+1</i>, pois cada elemento da lista deve ser verificado até que se encontre um objeto vazio. Observe no exemplo:</p>
<div>
	<code><pre>do{
	if(strcmp(aux->getValue().c_str(), "") == 0){
		itemEmpty = true;
		aux->setValue(value);
	}
	aux = aux->getProx();
}while((aux != NULL) && (itemEmpty != true));}</pre></code>

<p>onde a variavel  "aux" proporciona O acesso aos Itens de forma segura e "itemEmpty" implica se algum Item vazio foi encontrado na lista.</p>
<h3>Processamento</h3>
<p>Durante o deselvovimento do algoritimo apresentado nesse repositório, foi-se utilizado de três principais plataformas: i) Dev C++, ii) Visual Studio Code e iii) WSL:Ubunto</p>

<ol type="I">
	<li>
		<p>Dev-C++ é um software que oferece um ambiente de desenvolvimento integrado para o desenvolvimento de aplicações. O programa possui todas as funcionalidades padrões necessárias para a escrita, compilação, debugging e execução de programas na linguagem C e C++. Segue em anexo o link para download da platafomra — <a href="https://sourceforge.net/projects/orwelldevcpp/?msclkid=772169bcce5211ec8bf9238bb31ed5b5" target="_blank">Download Dev C++</a>.</p>
	</li>
	<li>
		<p>O Visual Studio Code é um editor de texto multiplataforma disponibilizado pela Microsoft para o desenvolvimento de aplicações, Conhecer essa ferramenta é importante para os desenvolvedores que pretendem trabalhar em ambientes multiplataforma, por exemplo,  podendo operar o desenvolvimento em ambiente Mac e Linux, ao mesmo tempo em que mantém o projeto compatível com Windows. Segue em anexo o link para o site da plataforma — <a href="https://code.visualstudio.com/" target="_blank">Visual Studio Code<a>.</p>
	</li>
	<li>
		<p>O WSL é um método para se executar o Sistema Operaciona Linux dentro do Windows de forma muito facil. Essa platoforma se torna essencial para o desenvovimento em ambiente GNU Linux, evitando tarefas como a intalação de maquinas vituais, criação de dual booting no computador pessoal e entre outras coisas. Além disso, existem diversas vantagens como rodar programas em conjunto e compartihamento de localhost. Segue em anexo um  tutorial de download do WSL2 — <a href="https://youtu.be/hd6lxt5iVsg" target="_blank">Tutorial WSL2</a>.</p>
	</li>
</ol>
<hr>
<div style="margin: 30px 30px 30px 30px;"><p>Tecnologia: C++</p></div>
<div style="margin: 30px 30px 30px 30px; font-size: 30px;"><p><b>Feito por Luan Gonçalves Santos</p><b></div>

