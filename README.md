# <b>AEDS: Funções com Lista</b>
<h3>Problemática</h3>
<p style="text-aling: center;">Em uma lista A temos um conjunto de elementos inteiros positivos ou não [A1, A2, . . . , An]. Elabore uma função que consiga encontrar
neste conjunto a máxima soma.
</p>
<h3>Solução</h3>

<P>O problema do segmento de soma máxima consiste em encontrar de uma dada lista [0, ..., N] o segmento [indexStart, ..., indexFinal] cuja a soma dos seus elementos seja maior ou igual que a soma de qualquer outro segmento da lista, onde as variáveis "index" representam o começo e o fim do segmento e Ø < indexStart < indexFinal ≤ N.</p>
<p>Exemplo: </p>
<img src=img/img1.png>
<p>Observe nesse exemplo em que a máxima soma seria 13 e as posições para isso seriam de 0 até 2, saltando apenas a última.</p>
<p>Notem que esse problema só é interessante para listas que possuem tanto números negativos, quanto positivos. Nesse sentido, para uma lista completamente positiva basta somar todos os seus elementos para se obter o segmento de soma máxima. Assim sendo, é importante ressaltar que o  segmento maximo apresentado deve ser maior ou igual a zero, pois o segmento vazio é sempre uma opção. Visto isso, se tratanto das listas inteiramente negativas, o algoritiomo porposto considera a lista como um segmento vazio, porque o valor zero sempre será maior que qualquer elemento.</p>

<p>Visto isso, para resolver a problemática é preciso imaginar as propriedades de um solução otima. Primeiramente</p>

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

