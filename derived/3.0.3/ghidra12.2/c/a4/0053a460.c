
/* WARNING: Type propagation algorithm not settling */

void FUN_0053a460(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  
  param_1[2] = 1;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  puVar6 = PTR_DAT_04bddd10;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = 0x3f80000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = -0x8000000000000000;
  FUN_004385d0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined1 **)((long)param_1 + 0x144) = &DAT_3f8000003f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = -0x8000000000000000;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0x80000000;
  param_1[0x2c] = -0x8000000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = -0x8000000000000000;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_0053d290(param_1 + 0x42);
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = param_4;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_004435a0(param_2);
  iVar3 = *(int *)(param_2 + 0x48);
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < iVar3) {
    lVar7 = FUN_00426720(PTR_DAT_048607b8,iVar3,0x10,param_1[4],(int)param_1[5],
                         (uint *)((long)param_1 + 0x2c));
    param_1[4] = lVar7;
  }
  if ((int)param_1[5] != iVar3) {
    *(int *)(param_1 + 5) = iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x48);
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) < iVar3) {
    lVar7 = FUN_00426720(PTR_DAT_048607b8,iVar3,0x10,param_1[6],(int)param_1[7]);
    param_1[6] = lVar7;
    iVar4 = (int)param_1[7];
  }
  else {
    iVar4 = (int)param_1[7];
  }
  if (iVar4 == iVar3) {
    cVar5 = *(char *)(param_2 + 0x60);
  }
  else {
    *(int *)(param_1 + 7) = iVar3;
    cVar5 = *(char *)(param_2 + 0x60);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 9) = 0;
    iVar3 = *(int *)(param_2 + 0xd8);
    puVar6 = PTR_DAT_048607b8;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x48);
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar3) {
      lVar7 = FUN_00426720(PTR_DAT_048607b8,iVar3,0x10,param_1[8],(int)param_1[9]);
      param_1[8] = lVar7;
    }
    uVar10 = *(uint *)(param_1 + 9);
    if ((int)uVar10 < iVar3) {
      *(int *)(param_1 + 9) = iVar3;
      memset((void *)(param_1[8] + (long)(int)uVar10 * 0x10),0,
             (ulong)(iVar3 + ~uVar10) * 0x10 + 0x10);
      iVar3 = *(int *)(param_2 + 0xd8);
      puVar6 = PTR_DAT_048607b8;
    }
    else {
      if (iVar3 < (int)uVar10) {
        *(int *)(param_1 + 9) = iVar3;
      }
      iVar3 = *(int *)(param_2 + 0xd8);
      puVar6 = PTR_DAT_048607b8;
    }
  }
  PTR_DAT_048607b8 = puVar6;
  if (0 < iVar3) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_2 + 0xd0) + lVar9);
      lVar8 = FUN_0053d490(lVar12);
      puVar2 = (undefined1 *)(*(long *)(param_2 + 0x198) + lVar9);
      *(undefined1 *)(lVar8 + 0x9d) = *puVar2;
      *(undefined1 *)(lVar8 + 0x9c) = puVar2[1];
      *(undefined4 *)(lVar8 + 0x98) = *(undefined4 *)(puVar2 + 4);
      FUN_00482480(lVar8 + 0x20,param_3,lVar12 + 0x20);
      uVar10 = *(uint *)(param_1 + 0x2e);
      if (uVar10 == (*(uint *)((long)param_1 + 0x174) & 0x3fffffff)) {
        FUN_00426990(puVar6,param_1 + 0x2d,8);
        uVar10 = *(uint *)(param_1 + 0x2e);
      }
      *(long *)(param_1[0x2d] + (long)(int)uVar10 * 8) = lVar8;
      *(uint *)(param_1 + 0x2e) = uVar10 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar7 < *(int *)(param_2 + 0xd8));
  }
  puVar6 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_2 + 0x90)) {
    lVar7 = 0;
    do {
      plVar11 = *(long **)(*(long *)(param_2 + 0x88) + lVar7 * 8);
      lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,param_1);
      if (lVar9 != 0) {
        uVar10 = *(uint *)(param_1 + 0x2c);
        if (uVar10 == (*(uint *)((long)param_1 + 0x164) & 0x3fffffff)) {
          FUN_00426990(puVar6,param_1 + 0x2b,0x10);
          uVar10 = *(uint *)(param_1 + 0x2c);
        }
        *(uint *)(param_1 + 0x2c) = uVar10 + 1;
        puVar1 = (undefined4 *)(param_1[0x2b] + (long)(int)uVar10 * 0x10);
        *puVar1 = (int)plVar11[4];
        *(long *)(puVar1 + 2) = lVar9;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x90));
  }
  puVar6 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_2 + 0xa0)) {
    lVar7 = 0;
    do {
      plVar11 = *(long **)(*(long *)(param_2 + 0x98) + lVar7 * 8);
      lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,param_1);
      if (lVar9 != 0) {
        uVar10 = *(uint *)(param_1 + 0x41);
        if (uVar10 == (*(uint *)((long)param_1 + 0x20c) & 0x3fffffff)) {
          FUN_00426990(puVar6,param_1 + 0x40,0x10);
          uVar10 = *(uint *)(param_1 + 0x41);
        }
        *(uint *)(param_1 + 0x41) = uVar10 + 1;
        puVar1 = (undefined4 *)(param_1[0x40] + (long)(int)uVar10 * 0x10);
        *puVar1 = (int)plVar11[4];
        *(long *)(puVar1 + 2) = lVar9;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0xa0));
  }
  lVar8 = DAT_0413f4d8;
  lVar9 = DAT_0413f4d0;
  lVar7 = DAT_0413f4c0;
  param_1[0x21] = DAT_0413f4c8;
  param_1[0x20] = lVar7;
  param_1[0x23] = lVar8;
  param_1[0x22] = lVar9;
  lVar8 = DAT_0413f4f8;
  lVar9 = DAT_0413f4f0;
  lVar7 = DAT_0413f4e0;
  param_1[0x25] = DAT_0413f4e8;
  param_1[0x24] = lVar7;
  param_1[0x27] = lVar8;
  param_1[0x26] = lVar9;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x13d);
  *(undefined1 *)((long)param_1 + 0x269) = *(undefined1 *)(param_2 + 0x180);
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  uVar10 = 0;
  if (*(short *)(param_2 + 0x1c0) != 0) {
    uVar10 = 3;
  }
  *(uint *)((long)param_1 + 0x26c) = uVar10;
  if (*(short *)(param_2 + 0x1d8) != 0) {
    *(uint *)((long)param_1 + 0x26c) = uVar10 | 4;
  }
  return;
}

