
void FUN_01b28d90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  FUN_01b28e60();
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x10) <= iVar4 + *(int *)(param_1 + 0x14)) {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar3 = *(long *)(param_1 + 8) + (long)(iVar4 + (*(int *)(param_1 + 0x14) - iVar1)) * 0x1f8;
      FUN_01b299c0(param_1,lVar3);
      FUN_01b2da00(param_1,lVar3);
      FUN_01b2e450(param_1,lVar3);
      FUN_01b30550(param_1,lVar3);
      FUN_01b31340(param_1,lVar3);
      FUN_01b31730(param_1,lVar3);
      FUN_01b31db4(param_1,lVar3);
      FUN_01b307d0(param_1,lVar3);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return;
}

