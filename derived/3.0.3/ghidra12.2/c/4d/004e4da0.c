
void FUN_004e4da0(ulong *param_1,ulong param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar1 = PTR_DAT_048607b8;
  while( true ) {
    while (param_2 < *param_1) {
      param_1 = (ulong *)param_1[4];
      if (param_1 == (ulong *)0x0) {
        return;
      }
    }
    if (param_2 <= param_1[1]) break;
    param_1 = (ulong *)param_1[5];
    if (param_1 == (ulong *)0x0) {
      return;
    }
  }
  uVar2 = (uint)param_1[3];
  if (uVar2 == (*(uint *)((long)param_1 + 0x1c) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 2,4);
    uVar2 = (uint)param_1[3];
  }
  *(undefined4 *)(param_1[2] + (long)(int)uVar2 * 4) = param_3;
  iVar3 = (int)param_1[7];
  *(uint *)(param_1 + 3) = uVar2 + 1;
  if (iVar3 < 1) {
    return;
  }
  lVar4 = 0;
  do {
    puVar5 = *(ulong **)(param_1[6] + lVar4 * 8);
    if ((*puVar5 <= param_2) && (param_2 <= puVar5[1])) {
      uVar2 = (uint)puVar5[3];
      if (uVar2 == (*(uint *)((long)puVar5 + 0x1c) & 0x3fffffff)) {
        FUN_00426990(puVar1,puVar5 + 2,4);
        uVar2 = (uint)puVar5[3];
      }
      *(undefined4 *)(puVar5[2] + (long)(int)uVar2 * 4) = param_3;
      *(uint *)(puVar5 + 3) = uVar2 + 1;
      iVar3 = (int)param_1[7];
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < iVar3);
  return;
}

