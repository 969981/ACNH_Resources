
long FUN_0015fd30(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  
  sVar2 = strlen(param_2);
  plVar3 = *(long **)(*param_1 + 0x808);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_00144b34(*plVar3,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar3 + sVar2) & 0xfe) == 0x3a)) break;
    plVar3 = (long *)plVar3[1];
  }
  return *plVar3;
}

