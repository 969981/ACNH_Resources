
void FUN_034bbec0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  
  uVar15 = *(uint *)(param_1 + 600);
  if (0 < (int)uVar15) {
    uVar7 = 0;
    do {
      uVar12 = *(uint *)(param_1 + 600);
      lVar10 = *(long *)(param_1 + 0x260);
      uVar2 = uVar7;
      if (uVar12 <= uVar7) {
        uVar2 = 0;
      }
      uVar4 = *(uint *)(lVar10 + (ulong)uVar2 * 0x38 + 0x20);
      if (0 < (int)uVar4) {
        uVar13 = 0;
        do {
          if (*(uint *)(*(long *)(lVar10 + (ulong)uVar2 * 0x38 + 0x28) + uVar13 * 4) == DAT_04c4a538
             ) {
            lVar9 = *(long *)(lVar10 + (ulong)uVar2 * 0x38 + 8);
            uVar4 = DAT_04c4a538;
            if (*(uint *)(lVar9 + 0x2c8) <= DAT_04c4a538) {
              uVar4 = 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
              lVar9 = lVar10 + (ulong)uVar2 * 0x38;
              puVar11 = (uint *)(lVar9 + 0x10);
              plVar6 = (long *)(lVar9 + 0x18);
              uVar3 = uVar13;
              if (*puVar11 <= (uint)uVar13) {
                uVar3 = 0;
              }
              piVar14 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
              if (*piVar14 != -1) {
                *piVar14 = -1;
                if (*puVar11 <= (uint)uVar13) {
                  uVar13 = 0;
                }
                *(undefined4 *)(*plVar6 + uVar13 * 0x30 + 0x2c) = 2;
                uVar12 = *(uint *)(param_1 + 600);
                lVar10 = *(long *)(param_1 + 0x260);
              }
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
      }
      uVar2 = uVar7;
      if (uVar12 <= uVar7) {
        uVar2 = 0;
      }
      uVar12 = *(uint *)(lVar10 + (ulong)uVar2 * 0x38 + 0x20);
      if (0 < (int)uVar12) {
        uVar13 = 0;
        do {
          if (*(uint *)(*(long *)(lVar10 + (ulong)uVar2 * 0x38 + 0x28) + uVar13 * 4) == DAT_04c4a53c
             ) {
            lVar9 = *(long *)(lVar10 + (ulong)uVar2 * 0x38 + 8);
            uVar12 = DAT_04c4a53c;
            if (*(uint *)(lVar9 + 0x2c8) <= DAT_04c4a53c) {
              uVar12 = 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2d0) + (long)(int)uVar12 * 8) != 0) {
              lVar10 = lVar10 + (ulong)uVar2 * 0x38;
              puVar11 = (uint *)(lVar10 + 0x10);
              plVar6 = (long *)(lVar10 + 0x18);
              uVar3 = uVar13;
              if (*puVar11 <= (uint)uVar13) {
                uVar3 = 0;
              }
              piVar14 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
              if (*piVar14 != -1) {
                *piVar14 = -1;
                if (*puVar11 <= (uint)uVar13) {
                  uVar13 = 0;
                }
                *(undefined4 *)(*plVar6 + uVar13 * 0x30 + 0x2c) = 2;
              }
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
    uVar15 = *(uint *)(param_1 + 600);
  }
  if (uVar15 != 0) {
    lVar10 = *(long *)(param_1 + 0x260);
    uVar7 = 0;
    do {
      plVar6 = (long *)(lVar10 + (long)(int)uVar7 * 0x38);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x1c1f8,0);
      uVar7 = uVar7 + 1;
    } while (uVar15 != uVar7);
  }
  iVar8 = *(int *)(param_1 + 0x268);
  if (iVar8 != 0) {
    lVar10 = *(long *)(param_1 + 0x270);
    iVar17 = 0;
    do {
      if ((((*(int *)(lVar10 + (long)iVar17 * 0x32830 + 0x19410) == 2) ||
           (*(int *)(lVar10 + (long)iVar17 * 0x32830 + 0x32820) == 2)) &&
          (lVar9 = *(long *)(lVar10 + (long)iVar17 * 0x32830 + 8), lVar9 != 0)) &&
         (lVar16 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar16 + 0x16d) != '\0')) {
        uVar15 = *(uint *)(lVar9 + 4);
        nn::os::LockMutex((MutexType *)(lVar16 + 0x990));
        if (uVar15 < *(uint *)(lVar16 + 0x760)) {
          lVar9 = *(long *)(*(long *)(lVar16 + 0x768) + (long)(int)uVar15 * 8);
        }
        else {
          lVar9 = 0;
        }
        if (*(char *)(lVar9 + 0x32820) != '\0') {
          *(undefined1 *)(lVar9 + 0x32810) = 0;
          *(undefined1 *)(lVar9 + 0x32820) = 0;
          *(undefined1 *)(lVar9 + 0x19400) = 0;
        }
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x990));
      }
      lVar9 = lVar10 + (long)iVar17 * 0x32830;
      memset((void *)(lVar9 + 8),0,0x1940c);
      *(undefined4 *)(lVar9 + 0x40) = 1;
      *(undefined4 *)(lVar9 + 0x48) = 0xffffffff;
      memset((void *)(lVar9 + 0x19420),0,0x19404);
      iVar17 = iVar17 + 1;
      *(undefined4 *)(lVar9 + 0x19450) = 1;
      *(undefined4 *)(lVar9 + 0x19458) = 0xffffffff;
    } while (iVar8 != iVar17);
  }
  puVar5 = PTR_DAT_04bb2200;
  pcVar1 = (char *)(param_1 + 0x1ce20);
  if (*pcVar1 == '\0') {
    return;
  }
  param_1 = param_1 + 0x1c200;
  lVar10 = 0x40;
  do {
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(*(long *)puVar5 + 0x140),param_1);
    }
    if (*(int *)(param_1 + 0x20) != -1) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    lVar9 = DAT_0575aaf0;
    param_1 = param_1 + 0x30;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (*pcVar1 == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar8 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar8;
      if (iVar8 == 0) {
        iVar8 = 0;
        *(undefined8 *)(lVar9 + 0xc) = 0x200000000;
      }
      else {
        iVar8 = 2;
      }
      goto LAB_034bc2e4;
    }
  }
  iVar8 = -2;
LAB_034bc2e4:
  if (-1 < iVar8) {
    *pcVar1 = '\0';
  }
  return;
}

