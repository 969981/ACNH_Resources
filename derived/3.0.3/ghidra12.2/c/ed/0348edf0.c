
void FUN_0348edf0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  
  if (*(long *)(*(long *)(param_1 + 0x218) + 0x570) != 0) {
    uVar13 = *(uint *)(param_1 + 0x250);
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        uVar10 = *(uint *)(param_1 + 0x250);
        lVar8 = *(long *)(param_1 + 600);
        uVar1 = uVar6;
        if (uVar10 <= uVar6) {
          uVar1 = 0;
        }
        uVar3 = *(uint *)(lVar8 + (ulong)uVar1 * 0x38 + 0x20);
        if (0 < (int)uVar3) {
          uVar11 = 0;
          do {
            if (*(uint *)(*(long *)(lVar8 + (ulong)uVar1 * 0x38 + 0x28) + uVar11 * 4) ==
                DAT_04c4a510) {
              lVar14 = *(long *)(lVar8 + (ulong)uVar1 * 0x38 + 8);
              uVar3 = DAT_04c4a510;
              if (*(uint *)(lVar14 + 0x2c8) <= DAT_04c4a510) {
                uVar3 = 0;
              }
              if (*(long *)(*(long *)(lVar14 + 0x2d0) + (long)(int)uVar3 * 8) != 0) {
                lVar14 = lVar8 + (ulong)uVar1 * 0x38;
                puVar9 = (uint *)(lVar14 + 0x10);
                plVar5 = (long *)(lVar14 + 0x18);
                uVar2 = uVar11;
                if (*puVar9 <= (uint)uVar11) {
                  uVar2 = 0;
                }
                piVar12 = (int *)(*plVar5 + uVar2 * 0x30 + 0x28);
                if (*piVar12 != -1) {
                  *piVar12 = -1;
                  if (*puVar9 <= (uint)uVar11) {
                    uVar11 = 0;
                  }
                  *(undefined4 *)(*plVar5 + uVar11 * 0x30 + 0x2c) = 2;
                  uVar10 = *(uint *)(param_1 + 0x250);
                  lVar8 = *(long *)(param_1 + 600);
                }
              }
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar3 != uVar11);
        }
        uVar1 = uVar6;
        if (uVar10 <= uVar6) {
          uVar1 = 0;
        }
        uVar10 = *(uint *)(lVar8 + (ulong)uVar1 * 0x38 + 0x20);
        if (0 < (int)uVar10) {
          uVar11 = 0;
          do {
            if (*(uint *)(*(long *)(lVar8 + (ulong)uVar1 * 0x38 + 0x28) + uVar11 * 4) ==
                DAT_04c4a514) {
              lVar14 = *(long *)(lVar8 + (ulong)uVar1 * 0x38 + 8);
              uVar10 = DAT_04c4a514;
              if (*(uint *)(lVar14 + 0x2c8) <= DAT_04c4a514) {
                uVar10 = 0;
              }
              if (*(long *)(*(long *)(lVar14 + 0x2d0) + (long)(int)uVar10 * 8) != 0) {
                lVar8 = lVar8 + (ulong)uVar1 * 0x38;
                puVar9 = (uint *)(lVar8 + 0x10);
                plVar5 = (long *)(lVar8 + 0x18);
                uVar2 = uVar11;
                if (*puVar9 <= (uint)uVar11) {
                  uVar2 = 0;
                }
                piVar12 = (int *)(*plVar5 + uVar2 * 0x30 + 0x28);
                if (*piVar12 != -1) {
                  *piVar12 = -1;
                  if (*puVar9 <= (uint)uVar11) {
                    uVar11 = 0;
                  }
                  *(undefined4 *)(*plVar5 + uVar11 * 0x30 + 0x2c) = 2;
                }
              }
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar10 != uVar11);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar13);
      uVar13 = *(uint *)(param_1 + 0x250);
    }
    if (uVar13 != 0) {
      lVar8 = *(long *)(param_1 + 600);
      uVar6 = 0;
      do {
        plVar5 = (long *)(lVar8 + (long)(int)uVar6 * 0x38);
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x1c1e0,0);
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
  }
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x140) + 0x170) & 1) == 0) {
    return;
  }
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x140) + 0x170) >> 1 & 1) != 0) {
    return;
  }
  lVar14 = 0x40;
  lVar8 = param_1 + 0x1c1e8;
  do {
    *(undefined1 *)(lVar8 + 0x24) = 0;
    *(undefined4 *)(lVar8 + 0x28) = 0;
    if ((*(byte *)(lVar8 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140),lVar8);
    }
    if (*(int *)(lVar8 + 0x20) != -1) {
      *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
    }
    lVar4 = DAT_0575aaf0;
    lVar8 = lVar8 + 0x30;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(char *)(param_1 + 0x1ce08) == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar7 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar7;
      if (iVar7 == 0) {
        iVar7 = 0;
        *(undefined8 *)(lVar4 + 0xc) = 0x200000000;
      }
      else {
        iVar7 = 2;
      }
      goto LAB_0348f0d8;
    }
  }
  iVar7 = -2;
LAB_0348f0d8:
  if (-1 < iVar7) {
    *(char *)(param_1 + 0x1ce08) = '\0';
  }
  return;
}

