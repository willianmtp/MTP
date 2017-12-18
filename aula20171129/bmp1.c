
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned char byte;
typedef unsigned short int word;
typedef unsigned int dword;
typedef struct stPixel { byte B; byte G; byte R; } Pixel;
typedef struct stHeaderBMP24bpp {
	byte identificador[2];
	dword tam_arquivo;
	word infores1, infores2;
	dword offset;
	dword tam_cabecalho;
	dword largura_px;
	dword altura_px;
	word qtde_plano_cores;
	word bits_per_pixel;
	dword metodo_compressao;
	dword tam_imagem;
	dword resolucao_horizontal;
	dword resolucao_vertical;
	dword numero_cores_paleta;
	dword numero_cores_importantes;
} HeaderBMP24bpp;

void printHeader(HeaderBMP24bpp header) {
	printf("Origem: %c%c\n", header.identificador[0], header.identificador[1]);
	printf("Tamanho do arquivo: %u bytes\n", header.tam_arquivo);
	printf("Offset: %u bytes\n", header.offset);
	printf("Tamanho do cabecalho: %u bytes\n", header.tam_cabecalho);
	printf("Tamanho da imagem: %u px (L), %u px (A)\n", header.largura_px, header.altura_px);
	printf("Qtde plano de cores: %u\n", header.qtde_plano_cores);
	printf("Bits por pixel (BPP): %u\n", header.bits_per_pixel);
	printf("Metodo de compressao: %u\n", header.metodo_compressao);
	printf("Tamanho da imagem (exceto cabecalho): %u bytes\n", header.tam_imagem);
	printf("Resolução: %u dpi (horizontal), %u dpi (vertical)\n", header.resolucao_horizontal, header. resolucao_vertical);
	printf("Numero de cores na paleta: %u\n", header.numero_cores_paleta);
	printf("Numero de cores importantes: %u\n", header.numero_cores_importantes);
}

void printImagem(Pixel * imagem, int qtd_pixels) {
	int i;
	for(i = 0; i < qtd_pixels; i++)
		printf("%04d : %02X %02X %02X : %03u %03u %03u\n", i, imagem[i].R, imagem[i].G, imagem[i].B,
			imagem[i].R, imagem[i].G, imagem[i].B);
}

Pixel * carregar_imagem(const char * nomearq, HeaderBMP24bpp * pheader) {
	Pixel * imagem = NULL;
	int AUX, PAL, i, j;
	FILE * arq;
	arq = fopen(nomearq, "rb");
	fread(pheader->identificador, sizeof(byte), 2, arq);
	fread(&(pheader->tam_arquivo), sizeof(dword), 1, arq);
	fread(&(pheader->infores1), sizeof(word), 1, arq);
	fread(&(pheader->infores2), sizeof(word), 1, arq);
	//fseek(arq, 2*sizeof(word), SEEK_CUR);
	fread(&(pheader->offset), sizeof(dword), 1, arq);
	fread(&(pheader->tam_cabecalho), sizeof(dword), 1, arq);
	fread(&(pheader->largura_px), sizeof(dword), 1, arq);
	fread(&(pheader->altura_px), sizeof(dword), 1, arq);
	fread(&(pheader->qtde_plano_cores), sizeof(word), 1, arq);
	fread(&(pheader->bits_per_pixel), sizeof(word), 1, arq);
	fread(&(pheader->metodo_compressao), sizeof(dword), 1, arq);
	fread(&(pheader->tam_imagem), sizeof(dword), 1, arq);
	fread(&(pheader->resolucao_horizontal), sizeof(dword), 1, arq);
	fread(&(pheader->resolucao_vertical), sizeof(dword), 1, arq);
	fread(&(pheader->numero_cores_paleta), sizeof(dword), 1, arq);
	if(pheader->numero_cores_paleta == 0) pheader->numero_cores_paleta = 1 << pheader->bits_per_pixel;
	fread(&(pheader->numero_cores_importantes), sizeof(dword), 1, arq);
	if(pheader->numero_cores_importantes == 0) pheader->numero_cores_importantes = pheader->numero_cores_paleta;
	// *****************************************************************************
	imagem = (Pixel *) calloc(sizeof(Pixel),pheader->largura_px*pheader->altura_px);
	PAL = floor((pheader->bits_per_pixel*pheader->largura_px + 31.)/32.)*4;
	AUX = PAL - pheader->largura_px*3;
	for(j = 0; j < pheader->altura_px; j++) {
		for(i = 0; i < pheader->largura_px; i++)
			fread(imagem+(j*pheader->largura_px+i), sizeof(Pixel), 1, arq);
		if(AUX > 0) // se não for múltiplo de 32 bits
			fseek(arq, AUX, SEEK_CUR); // fwrite(&lixo, AUX, 1, arq);
	}
	fclose(arq);
	return imagem;
}

int main() {
	Pixel * imagem;
	HeaderBMP24bpp header;
	imagem = carregar_imagem("imagem.bmp", &header);
	if(imagem) {
		printHeader(header);
		printImagem(imagem, header.largura_px*header.altura_px);
		free(imagem);
	}
	return EXIT_SUCCESS;
}
