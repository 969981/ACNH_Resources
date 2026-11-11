
long FUN_00387550(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == param_1 + 0x10) {
      return 0;
    }
    iVar1 = strcmp((char *)(lVar2 + 0x10),param_2);
    if (iVar1 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}

