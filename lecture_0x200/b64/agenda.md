# Agenda

## how to compile
* gcc stage001.c => a.out
* gcc stage001.c -o stage001 => stage001


## variables global/scoping
* int
* long int
* float
* double
* char

## arithmetic operators
* `+ - / * %`
* shortcut: i += / i-= / i++ / i--

## comparison operators
* `< > <= >= == != || &&`

## control structures
* if-else-then
* while
* for
* switch

## functions

## Others
* strcmp
* argc e argv

## Steps
1. Lavorare con con gli input passati da CLI - argc argv
2. Verifica se sono stati passati argomenti, in caso negativo stampare l'help
3. Verifica se il primo parametro è -e per encoder
4. Verifica se il primo parametro è -d per decoder
5. Includere la libreria che implementa l'algoritmo base64 e che mette a disposizione le funzioni:
     b64_encode(str, encoded) e b64_decode(str, decoded)
