
long * FUN_006506b0(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  undefined2 *puVar11;
  
  if (*param_2 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
  }
  else {
    FUN_004435a0();
    lVar5 = *param_1;
    *param_1 = *param_2;
  }
  if (lVar5 != 0) {
    FUN_004435c0();
  }
  if (param_2[1] == 0) {
    lVar5 = param_1[1];
    param_1[1] = 0;
  }
  else {
    FUN_004435a0();
    lVar5 = param_1[1];
    param_1[1] = param_2[1];
  }
  if (lVar5 != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar4 = (int)param_2[3];
  puVar11 = (undefined2 *)param_2[2];
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < iVar4) {
    puVar6 = (undefined2 *)FUN_00426720(PTR_DAT_048607b8,iVar4,2,param_1[2],0);
    param_1[2] = (long)puVar6;
  }
  else {
    puVar6 = (undefined2 *)param_1[2];
  }
  if (iVar4 != 0) {
    uVar10 = (long)iVar4 * 2 - 2;
    uVar1 = ((uint)(uVar10 >> 1) & 0x7fffffff) + 1;
    puVar9 = puVar11;
    if ((uVar1 & 3) != 0) {
      lVar5 = -((ulong)uVar1 & 3);
      puVar7 = puVar6;
      puVar8 = puVar11;
      do {
        puVar9 = puVar8 + 1;
        lVar5 = lVar5 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar8;
        puVar7 = puVar6;
        puVar8 = puVar9;
      } while (lVar5 != 0);
    }
    if (5 < uVar10) {
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar7 = puVar9 + 3;
        puVar9 = puVar9 + 4;
        puVar6[3] = *puVar7;
        puVar6 = puVar6 + 4;
      } while (puVar9 != puVar11 + iVar4);
    }
  }
  *(int *)(param_1 + 3) = iVar4;
  lVar5 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  param_1[4] = lVar5;
  param_1[5] = lVar2;
  return param_1;
}

