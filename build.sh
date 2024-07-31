#!/bin/bash

# Vérifie si un argument a été fourni
if [ -z "$1" ]; then
    echo "Usage: ./build.sh <nom_du_programme_sans_extension>"
    exit 1
fi

# Nom du programme (sans l'extension .c)
program_name=$1

# Compile le programme
gcc "${program_name}.c" -o "$program_name"
compile_status=$?

# Vérifie si la compilation a réussi
if [ $compile_status -eq 0 ]; then
    # Exécute le programme compilé
    ./"$program_name"
else
    echo "Compilation failed."
fi

