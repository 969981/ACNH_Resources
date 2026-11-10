
long FUN_0037c748(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)((ulong)uVar4 + lVar1 + 4) + uVar4));
    if (*piVar2 == 0x15) {
      iVar3 = param_2 + -9;
      if (param_2 < 0x10) {
        iVar3 = param_2;
      }
      bVar5 = *(byte *)((long)piVar2 + (long)iVar3 + 4);
      if (-1 < (char)bVar5) {
        return lVar1 + (ulong)(*(int *)((ulong)uVar4 + (ulong)bVar5 * 4 + lVar1 + 4) + uVar4);
      }
    }
  }
  return 0;
}

