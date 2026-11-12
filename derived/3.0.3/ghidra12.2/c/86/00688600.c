
int FUN_00688600(long param_1,long param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_3 + 1);
  if (uVar2 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_3,8);
    uVar2 = *(uint *)(param_3 + 1);
  }
  *(long *)(*param_3 + (long)(int)uVar2 * 8) = param_1;
  iVar3 = uVar2 + 1;
  *(int *)(param_3 + 1) = iVar3;
  if (param_1 == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar1 = -0x7ffbfe00;
  }
  else {
    lVar4 = 0;
    do {
      iVar1 = FUN_00688600(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar4 * 8),param_2,param_3);
      if (-1 < iVar1) {
        return iVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x60));
    iVar3 = (int)param_3[1];
  }
  *(int *)(param_3 + 1) = iVar3 + -1;
  return iVar1;
}

