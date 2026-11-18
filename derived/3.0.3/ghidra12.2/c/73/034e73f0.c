
void FUN_034e73f0(long param_1)

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
  ulong uVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  
  pcVar1 = (char *)(param_1 + 0x1cde8);
  uVar15 = *(uint *)(param_1 + 0x1cdf0);
  if (0 < (int)uVar15) {
    uVar7 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x1cdf8);
      uVar2 = uVar7;
      if (uVar15 <= uVar7) {
        uVar2 = 0;
      }
      uVar4 = *(uint *)(lVar10 + (ulong)uVar2 * 0x38 + 0x20);
      if (0 < (int)uVar4) {
        uVar12 = 0;
        do {
          if (*(uint *)(*(long *)(lVar10 + (ulong)uVar2 * 0x38 + 0x28) + uVar12 * 4) == DAT_04c4a558
             ) {
            lVar9 = *(long *)(lVar10 + (ulong)uVar2 * 0x38 + 8);
            uVar4 = DAT_04c4a558;
            if (*(uint *)(lVar9 + 0x2c8) <= DAT_04c4a558) {
              uVar4 = 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
              lVar9 = lVar10 + (ulong)uVar2 * 0x38;
              puVar11 = (uint *)(lVar9 + 0x10);
              plVar6 = (long *)(lVar9 + 0x18);
              uVar3 = uVar12;
              if (*puVar11 <= (uint)uVar12) {
                uVar3 = 0;
              }
              piVar13 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
              if (*piVar13 != -1) {
                *piVar13 = -1;
                if (*puVar11 <= (uint)uVar12) {
                  uVar12 = 0;
                }
                *(undefined4 *)(*plVar6 + uVar12 * 0x30 + 0x2c) = 2;
                uVar15 = *(uint *)(param_1 + 0x1cdf0);
                lVar10 = *(long *)(param_1 + 0x1cdf8);
              }
            }
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
      uVar2 = uVar7;
      if (uVar15 <= uVar7) {
        uVar2 = 0;
      }
      uVar4 = *(uint *)(lVar10 + (ulong)uVar2 * 0x38 + 0x20);
      if (0 < (int)uVar4) {
        uVar12 = 0;
        do {
          if (*(uint *)(*(long *)(lVar10 + (ulong)uVar2 * 0x38 + 0x28) + uVar12 * 4) == DAT_04c4a55c
             ) {
            lVar9 = *(long *)(lVar10 + (ulong)uVar2 * 0x38 + 8);
            uVar4 = DAT_04c4a55c;
            if (*(uint *)(lVar9 + 0x2c8) <= DAT_04c4a55c) {
              uVar4 = 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
              lVar10 = lVar10 + (ulong)uVar2 * 0x38;
              puVar11 = (uint *)(lVar10 + 0x10);
              plVar6 = (long *)(lVar10 + 0x18);
              uVar3 = uVar12;
              if (*puVar11 <= (uint)uVar12) {
                uVar3 = 0;
              }
              piVar13 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
              if (*piVar13 != -1) {
                *piVar13 = -1;
                if (*puVar11 <= (uint)uVar12) {
                  uVar12 = 0;
                }
                *(undefined4 *)(*plVar6 + uVar12 * 0x30 + 0x2c) = 2;
                uVar15 = *(uint *)(param_1 + 0x1cdf0);
              }
            }
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar15);
  }
  if (uVar15 != 0) {
    lVar10 = *(long *)(param_1 + 0x1cdf8);
    uVar7 = 0;
    do {
      plVar6 = (long *)(lVar10 + (long)(int)uVar7 * 0x38);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x1c1c0,0);
      uVar7 = uVar7 + 1;
    } while (uVar15 != uVar7);
  }
  iVar8 = *(int *)(param_1 + 0x1ce00);
  if (iVar8 != 0) {
    iVar16 = 0;
    lVar10 = *(long *)(param_1 + 0x1ce08);
    do {
      if ((((*(int *)(lVar10 + (long)iVar16 * 0x32830 + 0x19410) == 2) ||
           (*(int *)(lVar10 + (long)iVar16 * 0x32830 + 0x32820) == 2)) &&
          (lVar9 = *(long *)(lVar10 + (long)iVar16 * 0x32830 + 8), lVar9 != 0)) &&
         (lVar14 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar14 + 0x16d) != '\0')) {
        uVar15 = *(uint *)(lVar9 + 4);
        nn::os::LockMutex((MutexType *)(lVar14 + 0x990));
        if (uVar15 < *(uint *)(lVar14 + 0x760)) {
          lVar9 = *(long *)(*(long *)(lVar14 + 0x768) + (long)(int)uVar15 * 8);
        }
        else {
          lVar9 = 0;
        }
        if (*(char *)(lVar9 + 0x32820) != '\0') {
          *(undefined1 *)(lVar9 + 0x32810) = 0;
          *(undefined1 *)(lVar9 + 0x32820) = 0;
          *(undefined1 *)(lVar9 + 0x19400) = 0;
        }
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x990));
      }
      lVar9 = lVar10 + (long)iVar16 * 0x32830;
      memset((void *)(lVar9 + 8),0,0x1940c);
      *(undefined4 *)(lVar9 + 0x40) = 1;
      *(undefined4 *)(lVar9 + 0x48) = 0xffffffff;
      memset((void *)(lVar9 + 0x19420),0,0x19404);
      iVar16 = iVar16 + 1;
      *(undefined4 *)(lVar9 + 0x19450) = 1;
      *(undefined4 *)(lVar9 + 0x19458) = 0xffffffff;
    } while (iVar8 != iVar16);
  }
  puVar5 = PTR_DAT_04bb2200;
  if (*pcVar1 == '\0') {
    return;
  }
  lVar10 = 0x40;
  param_1 = param_1 + 0x1c1c8;
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
      goto LAB_034e7820;
    }
  }
  iVar8 = -2;
LAB_034e7820:
  if (-1 < iVar8) {
    *pcVar1 = '\0';
  }
  return;
}

