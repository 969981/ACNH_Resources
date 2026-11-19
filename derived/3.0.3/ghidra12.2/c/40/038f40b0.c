
undefined4 FUN_038f40b0(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar3 = 0xfffffffe;
  }
  else {
    lVar6 = 0;
    do {
      pbVar11 = param_2 + lVar6;
      lVar6 = lVar6 + 1;
    } while (*pbVar11 != 0);
    uVar10 = (uint)*param_2;
    puVar7 = *(uint **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x20) * 0x18);
    uVar9 = *puVar7;
    if (*param_2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      pbVar11 = param_2;
      do {
        pbVar11 = pbVar11 + 1;
        uVar8 = uVar10 + uVar8 * 0x492;
        uVar10 = (uint)*pbVar11;
      } while (uVar10 != 0);
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar8 / uVar9;
    }
    iVar2 = uVar8 - uVar10 * uVar9;
    if (puVar7[(int)(iVar2 * 2 | 1)] == 0) {
      return 0xffffffff;
    }
    uVar9 = 0;
    iVar5 = (int)lVar6;
    uVar3 = 0xffffffff;
    uVar10 = puVar7[iVar2 * 2 + 2];
    do {
      bVar1 = *(byte *)((long)puVar7 + (ulong)uVar10);
      if (bVar1 + 1 == iVar5) {
        lVar6 = (ulong)uVar10 + 1;
        if (iVar5 + -1 < 1) {
LAB_038f41a8:
          return *(undefined4 *)((long)puVar7 + lVar6 + (ulong)(uint)bVar1);
        }
        uVar4 = (ulong)(iVar5 - 1);
        pbVar11 = (byte *)((long)puVar7 + lVar6);
        pbVar12 = param_2;
        while( true ) {
          if (*pbVar12 != *pbVar11) break;
          uVar4 = uVar4 - 1;
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar12 + 1;
          if (uVar4 == 0) goto LAB_038f41a8;
        }
      }
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + bVar1 + 5;
    } while (uVar9 != puVar7[(int)(iVar2 * 2 | 1)]);
  }
  return uVar3;
}

