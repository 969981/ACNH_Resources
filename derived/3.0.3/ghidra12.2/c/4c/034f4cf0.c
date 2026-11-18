
void FUN_034f4cf0(long param_1,uint param_2)

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
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  
  pcVar1 = (char *)(param_1 + 0x1ce00);
  uVar15 = *(uint *)(param_1 + 0x1ce08);
  if (0 < (int)uVar15) {
    uVar7 = 0;
    uVar10 = DAT_04c4a568;
    do {
      lVar12 = *(long *)(param_1 + 0x1ce10);
      uVar2 = uVar7;
      if (uVar15 <= uVar7) {
        uVar2 = 0;
      }
      uVar4 = *(uint *)(lVar12 + (ulong)uVar2 * 0x38 + 0x20);
      if (0 < (int)uVar4) {
        uVar11 = 0;
        do {
          if (*(uint *)(*(long *)(lVar12 + (ulong)uVar2 * 0x38 + 0x28) + uVar11 * 4) == uVar10) {
            lVar9 = *(long *)(lVar12 + (ulong)uVar2 * 0x38 + 8);
            uVar4 = uVar10;
            if (*(uint *)(lVar9 + 0x2c8) <= uVar10) {
              uVar4 = 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2d0) + (long)(int)uVar4 * 8) != 0) {
              lVar12 = lVar12 + (ulong)uVar2 * 0x38;
              puVar13 = (uint *)(lVar12 + 0x10);
              plVar6 = (long *)(lVar12 + 0x18);
              uVar3 = uVar11;
              if (*puVar13 <= (uint)uVar11) {
                uVar3 = 0;
              }
              piVar14 = (int *)(*plVar6 + uVar3 * 0x30 + 0x28);
              if (*piVar14 != -1) {
                *piVar14 = -1;
                if (*puVar13 <= (uint)uVar11) {
                  uVar11 = 0;
                }
                *(undefined4 *)(*plVar6 + uVar11 * 0x30 + 0x2c) = 2;
                uVar15 = *(uint *)(param_1 + 0x1ce08);
                uVar10 = DAT_04c4a568;
              }
            }
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar4 != uVar11);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar15);
  }
  if (uVar15 != 0) {
    lVar12 = *(long *)(param_1 + 0x1ce10);
    uVar7 = 0;
    do {
      plVar6 = (long *)(lVar12 + (long)(int)uVar7 * 0x38);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x1c1d8,0);
      uVar7 = uVar7 + 1;
    } while (uVar15 != uVar7);
  }
  puVar5 = PTR_DAT_04bb2200;
  iVar8 = *(int *)(param_1 + 0x1ce18);
  if (iVar8 != 0) {
    iVar17 = 0;
    lVar12 = *(long *)(param_1 + 0x1ce20);
    do {
      if ((((*(int *)(lVar12 + (long)iVar17 * 0x32830 + 0x19410) == 2) ||
           (*(int *)(lVar12 + (long)iVar17 * 0x32830 + 0x32820) == 2)) &&
          (lVar9 = *(long *)(lVar12 + (long)iVar17 * 0x32830 + 8), lVar9 != 0)) &&
         (lVar16 = *(long *)(*(long *)puVar5 + 0x140), *(char *)(lVar16 + 0x16d) != '\0')) {
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
      lVar9 = lVar12 + (long)iVar17 * 0x32830;
      memset((void *)(lVar9 + 8),0,0x1940c);
      *(undefined4 *)(lVar9 + 0x48) = 0xffffffff;
      *(undefined4 *)(lVar9 + 0x40) = 1;
      memset((void *)(lVar9 + 0x19420),0,0x19404);
      iVar17 = iVar17 + 1;
      *(undefined4 *)(lVar9 + 0x19450) = 1;
      *(undefined4 *)(lVar9 + 0x19458) = 0xffffffff;
    } while (iVar8 != iVar17);
  }
  if (*pcVar1 == '\0') {
    return;
  }
  lVar12 = 0x40;
  param_1 = param_1 + 0x1c1e0;
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
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  if ((param_2 & 1) == 0) {
    return;
  }
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
      goto LAB_034f5078;
    }
  }
  iVar8 = -2;
LAB_034f5078:
  if (-1 < iVar8) {
    *pcVar1 = '\0';
  }
  return;
}

