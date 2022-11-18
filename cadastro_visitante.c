#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nomeTitular[100], cpfTitular[20], mesValidade[2], anoValidade[4], numeroCartao[50], ddd[2], numeroTelefone[10], cpf[20], nome[100], diaNasc[2], mesNasc[2], anoNasc[4], email[100], senha[20], resposta;
	int count = 0;
	
	printf("+------------------------------------------------+\n");
	printf("|            PREENCHA AS INFORMAÇÕES             |\n");
	printf("+------------------------------------------------+\n\n");
	printf("nome: ");
	fgets(nome, 100, stdin);
	printf("CPF: ");
	scanf("%s", &cpf);
	printf("data de nascimento: \n");
	printf("Dia: ");
	scanf("%s", &diaNasc);
	printf("mes: ");
	scanf("%s",&mesNasc);
	printf("ano: ");
	scanf("%s",&anoNasc);
	printf("Vincule um e-mail a esta conta: ");
	scanf("%s", &email);
	printf("Cria uma senha: ");
	scanf("%s", &senha);
	printf("Telefone: ");
	printf("DDD: ");
	scanf("%s", &ddd);
	printf("Infome o seu número de telefone: ");
	scanf("%s", &numeroTelefone);
		fflush(stdin);


	printf("================================");
	printf("\nNome: %s", nome);
	printf("Data de Nascimento: %s/%s/%s", diaNasc, mesNasc, anoNasc);
	printf("\nE-mail: %s", email);
	printf("\nCPF: %s", cpf);
	printf("\nSenha: %s", senha);
	printf("\n================================\n");
	printf("\nDados cadastrados com sucesso!\n\n");
	
	printf("\n================================");
	printf("\nNúmero: %s %s", ddd, numeroTelefone);
	printf("\n================================\n");
	printf("\nNúmero de Telefone cadastrado com sucesso!\n\n");
	
	printf("\nConta criada com sucesso... ");
	
	count=0;
	do{
		if(count>0){
			printf("Resposta inválida, por favor digite s, para sim ou n, para não! ");
			scanf("%s",&resposta);
		}else{
			printf("Deseja cadastrar um cartão agora?(s/n) ");
			scanf("%s",&resposta);
		}
	count++;
	}while(resposta!='s' && resposta!='n');
	
	if(resposta=='s'){
		
		printf("Digite o número do cartão: ");
		scanf(" %[^\n]s",&numeroCartao);
		
		printf("Digite o nome do titular do cartão: ");
		scanf(" %[^\n]s",&nomeTitular);
		
		printf("Validade do cartão:\n ");
		printf("Mês: ");
		scanf("%s", &mesValidade);
		printf("Ano: ");
		scanf("%s",&anoValidade);
		
		printf("\n================================");
		printf("\nNúmero do Cartão: %s", numeroCartao);
		printf("\nData de Validade: %s/%s", mesValidade, anoValidade);
		printf("\nNome do Titular: %s", nomeTitular);
		printf("\n================================\n");
		printf("\nCartão cadastrado com sucesso!\n\n");
		printf("\nLogue na sua conta e comece a usar nossos serviços!");
	}else{
		printf("\nLogue na sua conta e comece a usar nossos serviços!");
	}
		
	
	return 0;
}
