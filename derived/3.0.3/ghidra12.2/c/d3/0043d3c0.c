
void FUN_0043d3c0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  
  if (param_2 < 5) {
    param_2 = 4;
  }
  uVar4 = param_2 * 2 - 1;
  uVar4 = uVar4 | (int)uVar4 >> 0x10;
  uVar4 = uVar4 | (int)uVar4 >> 8;
  uVar4 = uVar4 | (int)uVar4 >> 4;
  uVar4 = uVar4 | (int)uVar4 >> 2;
  uVar4 = uVar4 | (int)uVar4 >> 1;
  uVar1 = uVar4 + 1;
  lVar5 = FUN_0043c4e0(DAT_04c6f050);
  lVar6 = DAT_04c6f058;
  if (lVar5 != 0) {
    lVar6 = lVar5;
  }
  lVar6 = FUN_00422030(*(undefined8 *)(lVar6 + 0x58),8,uVar1);
  if (-1 < (int)uVar4) {
    uVar9 = (ulong)uVar1;
    if (uVar9 - 1 < 3) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar8 = (undefined4 *)(lVar6 + 0x14);
      do {
        lVar5 = lVar5 + 4;
        puVar8[-4] = 0xffffffff;
        puVar8[-2] = 0xffffffff;
        *puVar8 = 0xffffffff;
        puVar8[2] = 0xffffffff;
        puVar8 = puVar8 + 8;
      } while (uVar9 - (uVar9 & 3) != lVar5);
    }
    if ((uVar1 & 3) != 0) {
      lVar7 = -(uVar9 & 3);
      puVar8 = (undefined4 *)(lVar6 + lVar5 * 8 + 4);
      do {
        lVar7 = lVar7 + 1;
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 2;
      } while (lVar7 != 0);
    }
  }
  lVar5 = *param_1;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 4) == -2)) {
    *param_1 = lVar6;
    *(uint *)(param_1 + 1) = uVar4;
    return;
  }
  lVar7 = param_1[1];
  *(uint *)(param_1 + 1) = uVar4;
  uVar1 = (int)lVar7 + 1;
  *param_1 = lVar6;
  if (-1 < (int)lVar7) {
    uVar9 = 0;
    do {
      iVar2 = *(int *)(lVar5 + uVar9 * 8 + 4);
      if (-1 < iVar2) {
        uVar4 = *(uint *)(lVar5 + uVar9 * 8);
        lVar6 = *param_1;
        uVar10 = (ulong)(*(uint *)(param_1 + 1) & uVar4);
        piVar11 = (int *)(lVar6 + uVar10 * 8 + 4);
        iVar3 = *piVar11;
        while (-1 < iVar3) {
          uVar10 = ((long)(uVar10 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 1);
          piVar11 = (int *)(lVar6 + uVar10 * 8 + 4);
          iVar3 = *piVar11;
        }
        *(uint *)(lVar6 + uVar10 * 8) = uVar4;
        *piVar11 = iVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  lVar7 = FUN_0043c4e0(DAT_04c6f050);
  lVar6 = DAT_04c6f058;
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  FUN_004220c0(*(undefined8 *)(lVar6 + 0x58),lVar5,8,uVar1);
  return;
}

