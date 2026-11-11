
void FUN_004acb80(long *param_1,long *param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  int local_24;
  
  if (param_3 == -1) {
    *param_2 = (long)&DAT_04c161d0;
    return;
  }
  if ((param_3 < (int)((ulong)(param_5 - param_4) >> 3)) &&
     (lVar3 = *(long *)(param_4 + (long)param_3 * 8), lVar3 != 0)) {
    *param_2 = lVar3;
    return;
  }
  *param_2 = (long)&DAT_04c161d0;
  local_24 = param_3;
  uVar1 = FUN_004ad8a0(param_1,&local_24);
  if (*(uint *)(param_1 + 1) == uVar1) {
    uVar2 = uVar1;
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar1) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x18);
      uVar2 = *(uint *)(param_1 + 1);
    }
    piVar4 = (int *)(*param_1 + (long)(int)uVar2 * 0x18);
    *piVar4 = local_24;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = -0x80000000;
    *(uint *)(param_1 + 1) = uVar2 + 1;
  }
  lVar3 = *param_1 + (long)(int)uVar1 * 0x18;
  puVar5 = (uint *)(lVar3 + 0x10);
  uVar1 = *puVar5;
  if (uVar1 == (*(uint *)(lVar3 + 0x14) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(lVar3 + 8),8);
    uVar1 = *puVar5;
  }
  *(long **)(*(long *)(lVar3 + 8) + (long)(int)uVar1 * 8) = param_2;
  *puVar5 = uVar1 + 1;
  return;
}

