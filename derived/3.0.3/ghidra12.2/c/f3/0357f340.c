
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0357f340(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  byte local_68 [4];
  uint local_64;
  
  local_68[0] = *param_2;
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_68,1);
  if (lVar6 == 0) {
    uVar20 = 0;
    goto LAB_0357f7c0;
  }
  lVar15 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar15 = *(long *)(DAT_05574040 + 0x20);
    plVar9 = *(long **)(lVar15 + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_0357f3e4;
LAB_0357f3ac:
    uVar7 = 0;
    if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
      uVar7 = (*(code *)**(undefined8 **)*plVar9)();
    }
  }
  else {
    plVar9 = *(long **)(lVar6 + 0x194d8);
    if (plVar9 != (long *)0x0) goto LAB_0357f3ac;
LAB_0357f3e4:
    uVar7 = 0;
  }
  lVar6 = *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8);
  pbVar1 = (byte *)(lVar6 + 0x305a8);
  uVar20 = 0;
  if ((*pbVar1 >> 1 & 1) != 0) {
    uVar20 = 2;
  }
  if ((*pbVar1 >> 2 & 1) != 0) {
    uVar20 = uVar20 | 4;
  }
  if ((*pbVar1 >> 3 & 1) != 0) {
    uVar20 = uVar20 | 8;
  }
  if ((*pbVar1 >> 4 & 1) != 0) {
    uVar20 = uVar20 | 0x10;
  }
  if ((*pbVar1 >> 5 & 1) != 0) {
    uVar20 = uVar20 | 0x20;
  }
  if ((*pbVar1 >> 6 & 1) != 0) {
    uVar20 = uVar20 | 0x40;
  }
  if ((char)*pbVar1 < '\0') {
    uVar20 = uVar20 | 0x80;
  }
  if ((*(byte *)(lVar6 + 0x305a9) & 1) != 0) {
    uVar20 = uVar20 | 0x100;
  }
  if ((*(byte *)(lVar6 + 0x305a9) >> 1 & 1) != 0) {
    uVar20 = uVar20 | 0x200;
  }
  if ((*(byte *)(lVar6 + 0x305a9) >> 2 & 1) != 0) {
    uVar20 = uVar20 | 0x400;
  }
  if ((*(byte *)(lVar6 + 0x305a9) >> 3 & 1) != 0) {
    uVar20 = uVar20 | 0x800;
  }
  local_64 = 0xb;
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_0357f7c0:
  uVar3 = *param_1;
  if (uVar3 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar12 = 0;
    do {
      piVar14 = (int *)(lVar6 + (long)(int)uVar12 * 0x160);
      if (0 < *piVar14) {
        lVar15 = 0;
        puVar8 = *(undefined8 **)(piVar14 + 4);
        do {
          puVar16 = *(undefined8 **)(*(long *)(piVar14 + 2) + lVar15 * 8);
          lVar15 = lVar15 + 1;
          *puVar16 = puVar8;
          *(undefined8 **)(piVar14 + 4) = puVar16;
          puVar8 = puVar16;
        } while (lVar15 < *piVar14);
      }
      *piVar14 = 0;
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar12);
  }
  iVar4 = 0;
  do {
    uVar3 = FUN_01afe978(iVar4);
    if ((uVar20 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      local_64 = uVar3;
      if (DAT_05771764 == uVar3) {
        uVar12 = 0;
      }
      else if (_DAT_0577176c == uVar3) {
        uVar12 = 1;
      }
      else if (_DAT_05771774 == uVar3) {
        uVar12 = 2;
      }
      else if (_DAT_0577177c == uVar3) {
        uVar12 = 3;
      }
      else if (_DAT_05771784 == uVar3) {
        uVar12 = 4;
      }
      else {
        uVar12 = 5;
        if (_DAT_0577178c != uVar3) {
          if (_DAT_05771794 == uVar3) {
            uVar12 = 6;
          }
          else if (_DAT_0577179c == uVar3) {
            uVar12 = 7;
          }
          else if (_DAT_057717a4 == uVar3) {
            uVar12 = 8;
          }
          else {
            uVar12 = 9;
            if ((_DAT_057717ac != uVar3) && (uVar12 = 10, _DAT_057717b4 != uVar3))
            goto LAB_0357f864;
          }
        }
      }
      if (*param_1 <= uVar12) {
        uVar12 = 0;
      }
      piVar14 = (int *)(*(long *)(param_1 + 2) + (ulong)uVar12 * 0x160);
      if (*piVar14 < piVar14[1]) {
        piVar10 = *(int **)(piVar14 + 4);
        if (piVar10 != (int *)0x0) {
          *(undefined8 *)(piVar14 + 4) = *(undefined8 *)piVar10;
        }
        *piVar10 = 0;
        if (*piVar14 < piVar14[1]) {
          *(int **)(*(long *)(piVar14 + 2) + (long)*piVar14 * 8) = piVar10;
          *piVar14 = *piVar14 + 1;
        }
        *piVar10 = iVar4;
      }
    }
LAB_0357f864:
    iVar5 = 0xdc;
    if (iVar4 < 0xdc) {
      iVar5 = iVar4 + 1;
    }
    iVar4 = iVar5;
  } while (iVar5 != 0xdc);
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar6 = *(long *)(param_1 + 2);
    do {
      piVar14 = (int *)(lVar6 + (long)(int)uVar12 * 0x160);
      iVar4 = *piVar14;
      uVar19 = iVar4 - 1;
      if ((0 < iVar4) && (uVar19 != 0)) {
        lVar15 = *(long *)(piVar14 + 2);
        uVar17 = 0;
        do {
          if ((int)uVar19 <= (int)uVar17) break;
          uVar21 = (ulong)uVar17;
          uVar18 = (ulong)uVar19;
          uVar7 = uVar21;
          uVar19 = uVar17;
          do {
            puVar8 = (undefined8 *)(lVar15 + uVar7 * 8);
            puVar2 = (undefined4 *)puVar8[1];
            iVar4 = FUN_01afeac0(*(undefined4 *)*puVar8);
            iVar5 = FUN_01afeac0(*puVar2);
            if (iVar5 < iVar4) {
              uVar11 = puVar8[1];
              uVar19 = (uint)uVar7;
              puVar8[1] = *(undefined8 *)(lVar15 + uVar7 * 8);
              *(undefined8 *)(lVar15 + uVar7 * 8) = uVar11;
            }
            uVar7 = uVar7 + 1;
          } while (uVar18 != uVar7);
          if ((int)uVar19 <= (int)uVar17) break;
          uVar7 = (ulong)uVar19;
          uVar17 = uVar19;
          do {
            puVar8 = (undefined8 *)(lVar15 + uVar7 * 8);
            puVar2 = (undefined4 *)puVar8[-1];
            iVar4 = FUN_01afeac0(*(undefined4 *)*puVar8);
            iVar5 = FUN_01afeac0(*puVar2);
            if (iVar4 < iVar5) {
              uVar11 = puVar8[-1];
              uVar17 = (uint)uVar7;
              puVar8[-1] = *(undefined8 *)(lVar15 + uVar7 * 8);
              *(undefined8 *)(lVar15 + uVar7 * 8) = uVar11;
            }
            uVar7 = uVar7 - 1;
          } while ((long)uVar21 < (long)uVar7);
        } while (uVar17 != uVar19);
      }
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar12);
  }
  if (0 < (int)param_1[6]) {
    lVar6 = 0;
    puVar8 = *(undefined8 **)(param_1 + 10);
    do {
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 8) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      *puVar16 = puVar8;
      *(undefined8 **)(param_1 + 10) = puVar16;
      puVar8 = puVar16;
    } while (lVar6 < (int)param_1[6]);
  }
  param_1[6] = 0;
  uVar3 = 0;
  do {
    local_64 = uVar3;
    if ((uVar20 >> (ulong)(local_64 & 0x1f) & 1) != 0) {
      uVar3 = param_1[6];
      if ((int)param_1[7] <= (int)uVar3) goto LAB_0357fc10;
      puVar13 = *(uint **)(param_1 + 10);
      if (puVar13 != (uint *)0x0) {
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)puVar13;
      }
      *puVar13 = 0;
      if ((int)param_1[6] < (int)param_1[7]) {
        *(uint **)(*(long *)(param_1 + 8) + (long)(int)param_1[6] * 8) = puVar13;
        param_1[6] = param_1[6] + 1;
      }
      *puVar13 = local_64;
    }
    uVar3 = 0xc;
    if ((int)local_64 < 0xc) {
      uVar3 = local_64 + 1;
    }
  } while (uVar3 != 0xc);
  uVar3 = param_1[6];
LAB_0357fc10:
  if (1 < (int)uVar3) {
    lVar6 = *(long *)(param_1 + 8);
    uVar20 = 0;
    uVar3 = uVar3 - 1;
    do {
      if ((int)uVar3 <= (int)uVar20) {
        return;
      }
      uVar18 = (ulong)uVar20;
      uVar21 = (ulong)uVar3;
      uVar7 = uVar18;
      uVar3 = uVar20;
      do {
        puVar8 = (undefined8 *)(lVar6 + uVar7 * 8);
        puVar2 = (undefined4 *)puVar8[1];
        iVar4 = FUN_01afec80(*(undefined4 *)*puVar8);
        iVar5 = FUN_01afec80(*puVar2);
        if (iVar5 < iVar4) {
          uVar11 = puVar8[1];
          uVar3 = (uint)uVar7;
          puVar8[1] = *(undefined8 *)(lVar6 + uVar7 * 8);
          *(undefined8 *)(lVar6 + uVar7 * 8) = uVar11;
        }
        uVar7 = uVar7 + 1;
      } while (uVar21 != uVar7);
      if ((int)uVar3 <= (int)uVar20) {
        return;
      }
      uVar7 = (ulong)uVar3;
      uVar20 = uVar3;
      do {
        puVar8 = (undefined8 *)(lVar6 + uVar7 * 8);
        puVar2 = (undefined4 *)puVar8[-1];
        iVar4 = FUN_01afec80(*(undefined4 *)*puVar8);
        iVar5 = FUN_01afec80(*puVar2);
        if (iVar4 < iVar5) {
          uVar11 = puVar8[-1];
          uVar20 = (uint)uVar7;
          puVar8[-1] = *(undefined8 *)(lVar6 + uVar7 * 8);
          *(undefined8 *)(lVar6 + uVar7 * 8) = uVar11;
        }
        uVar7 = uVar7 - 1;
      } while ((long)uVar18 < (long)uVar7);
    } while (uVar20 != uVar3);
  }
  return;
}

