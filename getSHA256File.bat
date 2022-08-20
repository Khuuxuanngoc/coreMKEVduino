
set /p "FName=input"


set "file=%FName%.zip"

FOR %%A IN (%file%) DO set size=%%~zA



@REM set mysize=getFileSize.bat
set out=certutil -hashfile %file% sha256
@REM set out=certutil -hashfile %FName%.zip sha256

@REM set export=%out% %size%
%out%>output.txt
echo %size%>>output.txt

set /p DUMMY=Hit ENTER to continue...