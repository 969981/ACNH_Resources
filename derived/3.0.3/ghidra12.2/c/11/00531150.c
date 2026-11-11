
undefined2 * FUN_00531150(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  
  *param_1 = *param_2;
  puVar4 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 8);
    lVar9 = *(long *)(param_2 + 4);
    if ((int)(*(uint *)(param_1 + 10) & 0x3fffffff) < (int)uVar2) {
      uVar5 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x48,*(undefined8 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 4) = uVar5;
    }
    uVar10 = *(uint *)(param_1 + 8);
    iVar7 = uVar10 - uVar2;
    if (0 < iVar7) {
      puVar11 = (uint *)(*(long *)(param_1 + 4) + (long)(int)uVar10 * 0x48 + -0x24);
      do {
        puVar11[5] = 0;
        if ((-1 < (int)puVar11[6]) && (*(long *)(puVar11 + 3) != 0)) {
          FUN_00421f90(puVar4,*(long *)(puVar11 + 3),4,puVar11[6] & 0x3fffffff);
        }
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[6] = 0x80000000;
        puVar11[-1] = 0;
        if ((-1 < (int)*puVar11) && (*(long *)(puVar11 + -3) != 0)) {
          FUN_00421f90(puVar4,*(long *)(puVar11 + -3),4,*puVar11 & 0x3fffffff);
        }
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        *puVar11 = 0x80000000;
        puVar11[-7] = 0;
        if ((-1 < (int)puVar11[-6]) && (*(long *)(puVar11 + -9) != 0)) {
          FUN_00421f90(puVar4,*(long *)(puVar11 + -9),4,puVar11[-6] & 0x3fffffff);
        }
        puVar11[-9] = 0;
        puVar11[-8] = 0;
        iVar7 = iVar7 + -1;
        puVar11[-6] = 0x80000000;
        puVar11 = puVar11 + -0x12;
      } while (iVar7 != 0);
      uVar10 = *(uint *)(param_1 + 8);
    }
    lVar6 = *(long *)(param_1 + 4);
    uVar1 = uVar10;
    if ((int)uVar2 <= (int)uVar10) {
      uVar1 = uVar2;
    }
    if ((lVar6 != lVar9) && (0 < (int)uVar1)) {
      uVar12 = (ulong)uVar1;
      lVar8 = lVar9;
      do {
        FUN_00531340(lVar6,lVar8);
        uVar12 = uVar12 - 1;
        lVar6 = lVar6 + 0x48;
        lVar8 = lVar8 + 0x48;
      } while (uVar12 != 0);
      lVar6 = *(long *)(param_1 + 4);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar10) {
        uVar3 = ~uVar10;
      }
      iVar7 = uVar2 + uVar3 + 1;
      lVar6 = lVar6 + (long)(int)uVar1 * 0x48;
      lVar9 = lVar9 + (long)(int)uVar1 * 0x48;
      do {
        FUN_0052ca20(lVar6,lVar9);
        iVar7 = iVar7 + -1;
        lVar6 = lVar6 + 0x48;
        lVar9 = lVar9 + 0x48;
      } while (iVar7 != 0);
    }
    *(uint *)(param_1 + 8) = uVar2;
  }
  return param_1;
}

