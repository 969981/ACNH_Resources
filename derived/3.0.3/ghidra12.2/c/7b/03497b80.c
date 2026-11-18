
void FUN_03497b80(long param_1)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  
  if (*(long *)(*(long *)(param_1 + 0x228) + 0x570) != 0) {
    uVar15 = *(uint *)(param_1 + 0x248);
    if (0 < (int)uVar15) {
      uVar7 = 0;
      uVar9 = DAT_04c4a524;
      do {
        lVar11 = *(long *)(param_1 + 0x250);
        uVar2 = uVar7;
        if (*(uint *)(param_1 + 0x248) <= uVar7) {
          uVar2 = 0;
        }
        uVar4 = *(uint *)(lVar11 + (ulong)uVar2 * 0x38 + 0x20);
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            if (*(uint *)(*(long *)(lVar11 + (ulong)uVar2 * 0x38 + 0x28) + uVar10 * 4) == uVar9) {
              lVar13 = *(long *)(lVar11 + (ulong)uVar2 * 0x38 + 8);
              uVar4 = uVar9;
              if (*(uint *)(lVar13 + 0x2c8) <= uVar9) {
                uVar4 = 0;
              }
              if (*(long *)(*(long *)(lVar13 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
                lVar11 = lVar11 + (ulong)uVar2 * 0x38;
                puVar12 = (uint *)(lVar11 + 0x10);
                plVar6 = (long *)(lVar11 + 0x18);
                uVar3 = uVar10;
                if (*puVar12 <= (uint)uVar10) {
                  uVar3 = 0;
                }
                piVar14 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
                if (*piVar14 != -1) {
                  *piVar14 = -1;
                  if (*puVar12 <= (uint)uVar10) {
                    uVar10 = 0;
                  }
                  *(undefined4 *)(*plVar6 + uVar10 * 0x30 + 0x2c) = 2;
                  uVar9 = DAT_04c4a524;
                }
              }
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar15);
      uVar15 = *(uint *)(param_1 + 0x248);
    }
    if (uVar15 != 0) {
      lVar11 = *(long *)(param_1 + 0x250);
      uVar7 = 0;
      do {
        plVar6 = (long *)(lVar11 + (long)(int)uVar7 * 0x38);
        (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x1c1d8,0);
        uVar7 = uVar7 + 1;
      } while (uVar15 != uVar7);
    }
  }
  puVar5 = PTR_DAT_04bb2200;
  pcVar1 = (char *)(param_1 + 0x1ce00);
  if (*pcVar1 == '\0') {
    return;
  }
  param_1 = param_1 + 0x1c1e0;
  lVar11 = 0x40;
  do {
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(*(long *)puVar5 + 0x140),param_1);
    }
    if (*(int *)(param_1 + 0x20) != -1) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    lVar13 = DAT_0575aaf0;
    param_1 = param_1 + 0x30;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (*pcVar1 == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar8 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar8;
      if (iVar8 == 0) {
        iVar8 = 0;
        *(undefined8 *)(lVar13 + 0xc) = 0x200000000;
      }
      else {
        iVar8 = 2;
      }
      goto LAB_03497da0;
    }
  }
  iVar8 = -2;
LAB_03497da0:
  if (-1 < iVar8) {
    *pcVar1 = '\0';
  }
  return;
}

