
long FUN_002ca2c0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == param_1 + 8) {
      return 0;
    }
    iVar1 = FUN_002b43fc(lVar2 + 0x18);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + 0x10;
}

