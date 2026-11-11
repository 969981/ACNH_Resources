
void FUN_00513a30(long *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  
  param_1[2] = 1;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  puVar3 = PTR_DAT_04bddcf0;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[8] = 0;
  param_1[0xb] = 0x7fffffff;
  param_1[0xc] = 0x3e800000bf800000;
  param_1[9] = -0x8000000000000000;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = -0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = -0x8000000000000000;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0x101;
  *(undefined4 *)((long)param_1 + 0x134) = param_3;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = -0x8000000000000000;
  param_1[0x13] = 0;
  FUN_004435a0(param_2);
  iVar2 = *(int *)(param_2 + 0x38);
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar2) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,iVar2,8,param_1[4],(int)param_1[5],
                         (uint *)((long)param_1 + 0x2c));
    param_1[4] = lVar4;
  }
  uVar7 = *(uint *)(param_1 + 5);
  if ((int)uVar7 < iVar2) {
    *(int *)(param_1 + 5) = iVar2;
    memset((void *)(param_1[4] + (long)(int)uVar7 * 8),0,(ulong)(iVar2 + ~uVar7) * 8 + 8);
  }
  else if (iVar2 < (int)uVar7) {
    *(int *)(param_1 + 5) = iVar2;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar2) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,iVar2,8,param_1[6],(int)param_1[7],
                         (uint *)((long)param_1 + 0x3c));
    param_1[6] = lVar4;
  }
  uVar7 = *(uint *)(param_1 + 7);
  if ((int)uVar7 < iVar2) {
    *(int *)(param_1 + 7) = iVar2;
    memset((void *)(param_1[6] + (long)(int)uVar7 * 8),0,(ulong)(iVar2 + ~uVar7) * 8 + 8);
    iVar2 = *(int *)(param_2 + 0x28);
    puVar3 = PTR_DAT_048607b8;
  }
  else {
    if (iVar2 < (int)uVar7) {
      *(int *)(param_1 + 7) = iVar2;
    }
    iVar2 = *(int *)(param_2 + 0x28);
    puVar3 = PTR_DAT_048607b8;
  }
  PTR_DAT_048607b8 = puVar3;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar5 = FUN_0053d110(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4 * 8),param_4,param_1);
      uVar7 = *(uint *)(param_1 + 9);
      if (uVar7 == (*(uint *)((long)param_1 + 0x4c) & 0x3fffffff)) {
        FUN_00426990(puVar3,param_1 + 8,8);
        uVar7 = *(uint *)(param_1 + 9);
      }
      lVar4 = lVar4 + 1;
      *(undefined8 *)(param_1[8] + (long)(int)uVar7 * 8) = uVar5;
      *(uint *)(param_1 + 9) = uVar7 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x28));
  }
  puVar3 = PTR_DAT_048607b8;
  lVar4 = param_1[3];
  if (0 < *(int *)(lVar4 + 0x58)) {
    lVar8 = 0;
    do {
      plVar6 = *(long **)(*(long *)(lVar4 + 0x50) + lVar8 * 8);
      lVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
      if (lVar4 != 0) {
        uVar7 = *(uint *)(param_1 + 0x10);
        if (uVar7 == (*(uint *)((long)param_1 + 0x84) & 0x3fffffff)) {
          FUN_00426990(puVar3,param_1 + 0xf,0x10);
          uVar7 = *(uint *)(param_1 + 0x10);
        }
        *(uint *)(param_1 + 0x10) = uVar7 + 1;
        puVar1 = (undefined4 *)(param_1[0xf] + (long)(int)uVar7 * 0x10);
        *puVar1 = (int)lVar8;
        *(long *)(puVar1 + 2) = lVar4;
      }
      lVar4 = param_1[3];
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar4 + 0x58));
  }
  puVar3 = PTR_DAT_048607b8;
  if (0 < *(int *)(lVar4 + 0x68)) {
    lVar8 = 0;
    do {
      lVar4 = FUN_005d2bd0(*(undefined8 *)(*(long *)(lVar4 + 0x60) + lVar8 * 8),param_1);
      if (lVar4 != 0) {
        uVar7 = *(uint *)(param_1 + 0x12);
        if (uVar7 == (*(uint *)((long)param_1 + 0x94) & 0x3fffffff)) {
          FUN_00426990(puVar3,param_1 + 0x11,0x10);
          uVar7 = *(uint *)(param_1 + 0x12);
        }
        *(uint *)(param_1 + 0x12) = uVar7 + 1;
        puVar1 = (undefined4 *)(param_1[0x11] + (long)(int)uVar7 * 0x10);
        *puVar1 = (int)lVar8;
        *(long *)(puVar1 + 2) = lVar4;
      }
      lVar4 = param_1[3];
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar4 + 0x68));
  }
  return;
}

