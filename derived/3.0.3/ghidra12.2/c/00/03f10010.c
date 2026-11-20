
float FUN_03f10010(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long *plVar21;
  float fVar22;
  
  plVar10 = *(long **)(param_1 + 6);
  plVar21 = plVar10;
  if (plVar10 == (long *)0x0) {
    lVar16 = *(long *)(param_1 + 2);
    if (lVar16 == 0) {
      return 3.4028235e+38;
    }
    if (param_1[4] != *(uint *)(lVar16 + 0x10)) {
      return 3.4028235e+38;
    }
    lVar13 = *(long *)(*(long *)(lVar16 + 0x120) + 8);
    lVar16 = *(long *)(lVar13 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar16 == 0)) {
      return 3.4028235e+38;
    }
    if (DAT_05aebc00 != '\0') {
      lVar16 = lVar13 + 0x70;
    }
    lVar16 = *(long *)(lVar16 + 8);
    if (lVar16 == 0) {
      return 3.4028235e+38;
    }
    if (*(uint *)(lVar16 + 0x18) == 0) {
      return 3.4028235e+38;
    }
    plVar21 = (long *)((ulong)*(uint *)(lVar16 + 0x18) + lVar16);
    if (*plVar21 != 0x101feff464e494d) {
      return 3.4028235e+38;
    }
  }
  uVar6 = *(uint *)(plVar21 + 8);
  if (uVar6 != 0) {
    puVar1 = (uint *)((ulong)uVar6 + (long)(plVar21 + 8));
    uVar12 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      lVar16 = -(long)puVar1;
      do {
        lVar16 = lVar16 + -8;
        if (puVar1[1] == param_2) {
          lVar16 = (ulong)puVar1[2] - lVar16;
          if (lVar16 != 0) {
            if (plVar10 == (long *)0x0) {
              if (*(long *)(param_1 + 2) == 0) {
                uVar6 = 0;
                uVar7 = 0;
              }
              else {
                if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
                  uVar6 = FUN_03b46270();
                  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
                  if (*(long *)(param_1 + 6) != 0) {
                    uVar7 = *param_1;
                    goto LAB_03f10240;
                  }
                }
                else {
                  uVar6 = 0;
                }
                uVar7 = 0;
                if (*(long *)(param_1 + 2) != 0) {
                  if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
                    uVar7 = FUN_03b46270();
                  }
                  else {
                    uVar7 = 0;
                  }
                }
              }
              uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
            }
            else {
              uVar6 = *param_1;
              uVar7 = uVar6;
            }
LAB_03f10240:
            uVar2 = *(ushort *)(lVar16 + 4);
            uVar8 = (uint)uVar2;
            if (uVar8 == 0) {
              uVar12 = 0;
              goto LAB_03f102a4;
            }
            uVar12 = (ulong)(uVar2 >> 1);
            uVar20 = *(uint *)(lVar16 + 8 + uVar12 * 4);
            if (uVar20 == uVar7) goto LAB_03f102a4;
            uVar18 = 0;
            goto LAB_03f10288;
          }
          break;
        }
        uVar12 = uVar12 - 1;
        puVar1 = puVar1 + 2;
      } while (uVar12 != 0);
    }
  }
  uVar6 = *(uint *)((long)plVar21 + 0x44);
  if (uVar6 == 0) {
    return 3.4028235e+38;
  }
  puVar1 = (uint *)((ulong)uVar6 + (long)plVar21 + 0x44);
  uVar12 = (ulong)*puVar1;
  if (*puVar1 == 0) {
    return 3.4028235e+38;
  }
  lVar16 = -(long)puVar1;
  while( true ) {
    lVar16 = lVar16 + -8;
    if (puVar1[1] == param_2) break;
    uVar12 = uVar12 - 1;
    puVar1 = puVar1 + 2;
    if (uVar12 == 0) {
      return 3.4028235e+38;
    }
  }
  lVar16 = (ulong)puVar1[2] - lVar16;
  if (lVar16 == 0) {
    return 3.4028235e+38;
  }
  if (plVar10 == (long *)0x0) {
    if (*(long *)(param_1 + 2) == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
        uVar6 = FUN_03b46270();
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        if (*(long *)(param_1 + 6) != 0) {
          uVar7 = *param_1;
          goto LAB_03f10318;
        }
      }
      else {
        uVar6 = 0;
      }
      uVar7 = 0;
      if (*(long *)(param_1 + 2) != 0) {
        if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
          uVar7 = FUN_03b46270();
        }
        else {
          uVar7 = 0;
        }
      }
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar6 = *param_1;
    uVar7 = uVar6;
  }
LAB_03f10318:
  uVar2 = *(ushort *)(lVar16 + 8);
  uVar8 = (uint)uVar2;
  if (uVar8 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)(uVar2 >> 1);
    uVar20 = *(uint *)(lVar16 + 0xc + uVar12 * 8);
    if (uVar20 != uVar7) {
      uVar18 = 0;
      do {
        uVar14 = (uint)uVar12;
        uVar4 = uVar18;
        uVar5 = uVar14;
        uVar3 = uVar8;
        if (uVar20 < uVar7) {
          uVar4 = uVar14;
          uVar5 = uVar8;
          uVar3 = uVar18;
        }
        uVar8 = uVar5;
        uVar18 = uVar4;
        if (uVar3 == uVar14) break;
        uVar12 = (ulong)(uVar18 + uVar8 >> 1);
        uVar20 = *(uint *)(lVar16 + 0xc + uVar12 * 8);
      } while (uVar20 != uVar7);
    }
  }
  uVar8 = (uint)uVar2;
  uVar7 = param_3 + (int)uVar12 + 1;
  if (uVar7 <= uVar8 - 1) {
    if (uVar7 < uVar8) {
      uVar6 = *(int *)(lVar16 + (ulong)uVar7 * 8 + 0xc) - uVar6;
      goto LAB_03f1042c;
    }
LAB_03f103e4:
    uVar6 = -uVar6;
    goto LAB_03f1042c;
  }
  iVar17 = (int)plVar21[3];
  iVar11 = *(int *)((long)plVar21 + 0x1c);
  iVar15 = iVar11 - iVar17;
  if (iVar15 == 0) {
    return 3.4028235e+38;
  }
  uVar2 = *(ushort *)(lVar16 + 10);
  uVar20 = (uVar8 - 1) - (uint)uVar2;
  if (uVar20 == 0) {
    return 3.4028235e+38;
  }
  uVar7 = uVar7 - uVar2;
  uVar18 = 0;
  if (uVar20 != 0) {
    uVar18 = uVar7 / uVar20;
  }
  iVar19 = uVar18 - 1;
  uVar7 = (uVar7 - uVar18 * uVar20) + (uint)uVar2;
  if (uVar7 < uVar8) {
    iVar9 = *(int *)(lVar16 + (ulong)uVar7 * 8 + 0xc);
  }
  else {
LAB_03f10418:
    iVar9 = 0;
  }
  goto LAB_03f1041c;
  while( true ) {
    uVar12 = (ulong)(uVar18 + uVar8 >> 1);
    uVar20 = *(uint *)(lVar16 + 8 + uVar12 * 4);
    if (uVar20 == uVar7) break;
LAB_03f10288:
    uVar14 = (uint)uVar12;
    uVar4 = uVar18;
    uVar5 = uVar14;
    uVar3 = uVar8;
    if (uVar20 < uVar7) {
      uVar4 = uVar14;
      uVar5 = uVar8;
      uVar3 = uVar18;
    }
    uVar8 = uVar5;
    uVar18 = uVar4;
    if (uVar3 == uVar14) break;
  }
LAB_03f102a4:
  uVar8 = (uint)uVar2;
  uVar7 = param_3 + (int)uVar12 + 1;
  if (uVar7 <= uVar8 - 1) {
    if (uVar7 < uVar8) {
      uVar6 = *(int *)(lVar16 + (ulong)uVar7 * 4 + 8) - uVar6;
      goto LAB_03f1042c;
    }
    goto LAB_03f103e4;
  }
  iVar17 = (int)plVar21[3];
  iVar11 = *(int *)((long)plVar21 + 0x1c);
  iVar15 = iVar11 - iVar17;
  if (iVar15 == 0) {
    return 3.4028235e+38;
  }
  uVar2 = *(ushort *)(lVar16 + 6);
  uVar20 = (uVar8 - 1) - (uint)uVar2;
  if (uVar20 == 0) {
    return 3.4028235e+38;
  }
  uVar7 = uVar7 - uVar2;
  uVar18 = 0;
  if (uVar20 != 0) {
    uVar18 = uVar7 / uVar20;
  }
  iVar19 = uVar18 - 1;
  uVar7 = (uVar7 - uVar18 * uVar20) + (uint)uVar2;
  if (uVar8 <= uVar7) goto LAB_03f10418;
  iVar9 = *(int *)(lVar16 + (ulong)uVar7 * 4 + 8);
LAB_03f1041c:
  uVar6 = (iVar11 - (uVar6 + iVar17)) + iVar19 * iVar15 + iVar9;
LAB_03f1042c:
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar21 + 0x14));
  return (float)uVar6 / fVar22;
}

