@echo off
REM Sprawdzenie, czy foldery istnieją, a następnie ich usunięcie

REM Usunięcie folderu Binaries
IF EXIST "Binaries" (
    echo Usuwanie folderu Binaries...
    rmdir /s /q "Binaries"
) ELSE (
    echo Folder Binaries nie istnieje.
)

REM Usunięcie folderu Intermediate
IF EXIST "Intermediate" (
    echo Usuwanie folderu Intermediate...
    rmdir /s /q "Intermediate"
) ELSE (
    echo Folder Intermediate nie istnieje.
)

REM Usunięcie folderu Saved
IF EXIST "Saved" (
    echo Usuwanie folderu Saved...
    rmdir /s /q "Saved"
) ELSE (
    echo Folder Saved nie istnieje.
)

echo Usuwanie zakończone.
pause
