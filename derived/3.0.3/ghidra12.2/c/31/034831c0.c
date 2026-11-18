
void FUN_034831c0(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  
  pcVar1 = (char *)(param_1 + 0x1cf08);
  if (*(long *)(*(long *)(param_1 + 0x228) + 0x570) != 0) {
    uVar15 = *(uint *)(param_1 + 0x1cf80);
    if (0 < (int)uVar15) {
      uVar6 = 0;
      uVar8 = DAT_04c4a4f0;
      do {
        lVar12 = *(long *)(param_1 + 0x1cf88);
        uVar11 = uVar6;
        if (*(uint *)(param_1 + 0x1cf80) <= uVar6) {
          uVar11 = 0;
        }
        uVar3 = *(uint *)(lVar12 + (ulong)uVar11 * 0x38 + 0x20);
        if (0 < (int)uVar3) {
          uVar9 = 0;
          do {
            if (*(uint *)(*(long *)(lVar12 + (ulong)uVar11 * 0x38 + 0x28) + uVar9 * 4) == uVar8) {
              lVar14 = *(long *)(lVar12 + (ulong)uVar11 * 0x38 + 8);
              uVar3 = uVar8;
              if (*(uint *)(lVar14 + 0x2c8) <= uVar8) {
                uVar3 = 0;
              }
              if (*(long *)(*(long *)(lVar14 + 0x2d0) + (long)(int)uVar3 * 8) != 0) {
                lVar12 = lVar12 + (ulong)uVar11 * 0x38;
                puVar10 = (uint *)(lVar12 + 0x10);
                plVar5 = (long *)(lVar12 + 0x18);
                uVar2 = uVar9;
                if (*puVar10 <= (uint)uVar9) {
                  uVar2 = 0;
                }
                piVar13 = (int *)(*plVar5 + uVar2 * 0x30 + 0x28);
                if (*piVar13 != -1) {
                  *piVar13 = -1;
                  if (*puVar10 <= (uint)uVar9) {
                    uVar9 = 0;
                  }
                  *(undefined4 *)(*plVar5 + uVar9 * 0x30 + 0x2c) = 2;
                  uVar8 = DAT_04c4a4f0;
                }
              }
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar15);
      uVar15 = *(uint *)(param_1 + 0x1cf80);
    }
    if (uVar15 != 0) {
      lVar12 = *(long *)(param_1 + 0x1cf88);
      uVar6 = 0;
      do {
        plVar5 = (long *)(lVar12 + (long)(int)uVar6 * 0x38);
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x1c2e0,0);
        uVar6 = uVar6 + 1;
      } while (uVar15 != uVar6);
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x228) + 0x578) != 0) {
    uVar15 = *(uint *)(param_1 + 0x1cf90);
    if (0 < (int)uVar15) {
      uVar6 = 0;
      do {
        uVar11 = *(uint *)(param_1 + 0x1cf90);
        lVar12 = *(long *)(param_1 + 0x1cf98);
        uVar8 = uVar6;
        if (uVar11 <= uVar6) {
          uVar8 = 0;
        }
        uVar3 = *(uint *)(lVar12 + (ulong)uVar8 * 0x38 + 0x20);
        if (0 < (int)uVar3) {
          uVar9 = 0;
          do {
            if (*(uint *)(*(long *)(lVar12 + (ulong)uVar8 * 0x38 + 0x28) + uVar9 * 4) ==
                DAT_04c4a4f8) {
              lVar14 = *(long *)(lVar12 + (ulong)uVar8 * 0x38 + 8);
              uVar3 = DAT_04c4a4f8;
              if (*(uint *)(lVar14 + 0x2c8) <= DAT_04c4a4f8) {
                uVar3 = 0;
              }
              if (*(long *)(*(long *)(lVar14 + 0x2d0) + (long)(int)uVar3 * 8) != 0) {
                lVar14 = lVar12 + (ulong)uVar8 * 0x38;
                puVar10 = (uint *)(lVar14 + 0x10);
                plVar5 = (long *)(lVar14 + 0x18);
                uVar2 = uVar9;
                if (*puVar10 <= (uint)uVar9) {
                  uVar2 = 0;
                }
                piVar13 = (int *)(*plVar5 + uVar2 * 0x30 + 0x28);
                if (*piVar13 != -1) {
                  *piVar13 = -1;
                  if (*puVar10 <= (uint)uVar9) {
                    uVar9 = 0;
                  }
                  *(undefined4 *)(*plVar5 + uVar9 * 0x30 + 0x2c) = 2;
                  uVar11 = *(uint *)(param_1 + 0x1cf90);
                  lVar12 = *(long *)(param_1 + 0x1cf98);
                }
              }
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
        uVar8 = uVar6;
        if (uVar11 <= uVar6) {
          uVar8 = 0;
        }
        uVar11 = *(uint *)(lVar12 + (ulong)uVar8 * 0x38 + 0x20);
        if (0 < (int)uVar11) {
          uVar9 = 0;
          do {
            if (*(uint *)(*(long *)(lVar12 + (ulong)uVar8 * 0x38 + 0x28) + uVar9 * 4) ==
                DAT_04c4a4fc) {
              lVar14 = *(long *)(lVar12 + (ulong)uVar8 * 0x38 + 8);
              uVar11 = DAT_04c4a4fc;
              if (*(uint *)(lVar14 + 0x2c8) <= DAT_04c4a4fc) {
                uVar11 = 0;
              }
              if (*(long *)(*(long *)(lVar14 + 0x2d0) + (long)(int)uVar11 * 8) != 0) {
                lVar12 = lVar12 + (ulong)uVar8 * 0x38;
                puVar10 = (uint *)(lVar12 + 0x10);
                plVar5 = (long *)(lVar12 + 0x18);
                uVar2 = uVar9;
                if (*puVar10 <= (uint)uVar9) {
                  uVar2 = 0;
                }
                piVar13 = (int *)(*plVar5 + uVar2 * 0x30 + 0x28);
                if (*piVar13 != -1) {
                  *piVar13 = -1;
                  if (*puVar10 <= (uint)uVar9) {
                    uVar9 = 0;
                  }
                  *(undefined4 *)(*plVar5 + uVar9 * 0x30 + 0x2c) = 2;
                }
              }
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar11 != uVar9);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar15);
      uVar15 = *(uint *)(param_1 + 0x1cf90);
    }
    if (uVar15 != 0) {
      lVar12 = *(long *)(param_1 + 0x1cf98);
      uVar6 = 0;
      do {
        plVar5 = (long *)(lVar12 + (long)(int)uVar6 * 0x38);
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x1c2e0,0);
        uVar6 = uVar6 + 1;
      } while (uVar15 != uVar6);
    }
  }
  puVar4 = PTR_DAT_04bb2200;
  if (*pcVar1 == '\0') {
    return;
  }
  param_1 = param_1 + 0x1c2e8;
  lVar12 = 0x40;
  do {
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(*(long *)puVar4 + 0x140),param_1);
    }
    if (*(int *)(param_1 + 0x20) != -1) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    lVar14 = DAT_0575aaf0;
    param_1 = param_1 + 0x30;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  if (*pcVar1 == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar7 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar7;
      if (iVar7 == 0) {
        iVar7 = 0;
        *(undefined8 *)(lVar14 + 0xc) = 0x200000000;
      }
      else {
        iVar7 = 2;
      }
      goto LAB_034835f0;
    }
  }
  iVar7 = -2;
LAB_034835f0:
  if (-1 < iVar7) {
    *pcVar1 = '\0';
  }
  return;
}

