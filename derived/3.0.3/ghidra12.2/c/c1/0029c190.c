
void FUN_0029c190(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a0);
  while( true ) {
    if (lVar1 == param_1 + 0x198) {
      FUN_0029b390(param_1);
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  FUN_00223704(param_1 + 0x198,lVar1);
  FUN_002236e0(param_1 + 0x1b0,param_1 + 0x1b0,lVar1 + *(int *)(param_1 + 0x1c4));
  FUN_0029b390(param_1);
  return;
}

