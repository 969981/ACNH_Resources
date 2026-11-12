
long FUN_00688570(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x60))) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x58) + lVar4 * 8);
      uVar1 = *(ulong *)(lVar3 + 0x28) & 0xfffffffffffffffe;
      if ((uVar1 != 0) && (iVar2 = FUN_0043a240(uVar1,param_2), iVar2 == 0)) {
        return lVar3;
      }
      lVar3 = FUN_00688570(lVar3,param_2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x60));
  }
  return 0;
}

