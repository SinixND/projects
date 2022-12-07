GENERAL NAMING CONVENTION:

Variables: my_var
Classes: cParentClass
    no "_"
private Member Attributes: mClassAttribute 
public Member Attribute: see Variable
(Member-)Functions: verbFunction
Object: oMyObject
Pointers: pPointer
Reference: rReferenceVar
Constants: kConstVar
Global Constants: CONST_VAR
Statics: sStaticVar
Macros: (_MYCLASS_H_)

GIT PUSH:
git add. && git commit -m "msg" -a && git push -v

GIT PULL:
git fetch --all && git reset --hard origin/main

GIT CHANGE REPO-NAME:
git remote set-url origin https://URL

Julia arguments:
julia --threads=auto
