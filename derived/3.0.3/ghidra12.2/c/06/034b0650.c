
void FUN_034b0650(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  undefined *local_70;
  undefined4 local_68;
  
  puVar1 = (uint *)(param_1 + 0x1cde0);
  uVar4 = (ulong)param_3;
  if (9 < param_3) {
    uVar4 = 0;
  }
  plVar12 = *(long **)(puVar1 + uVar4 * 2 + 6);
  if (*(char *)(param_1 + 0x1ce8c) == '\0') {
    plVar13 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(1 < *(uint *)(param_2 + 0x2e8)) * 8);
    if (plVar13 == (long *)0x0) goto LAB_034b075c;
LAB_034b071c:
    local_70 = PTR_DAT_04bc4e68 + 0x10;
    local_68 = 7;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_70);
    puVar8 = (undefined8 *)(plVar13[3] + 0x1c0);
  }
  else {
    uVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
    plVar13 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(1 < *(uint *)(param_2 + 0x2e8)) * 8);
    if (plVar13 == (long *)0x0) goto LAB_034b075c;
    if ((uVar4 & 1) != 0) goto LAB_034b071c;
    local_70 = PTR_DAT_04bc4e68 + 0x10;
    local_68 = 6;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_70);
    puVar8 = (undefined8 *)(plVar13[3] + 0x1b8);
  }
  (*(code *)*puVar8)(plVar13[1]);
LAB_034b075c:
  lVar5 = param_1 + 0x1cf68 + (ulong)param_3 * 0x18;
  if (9 < param_3) {
    lVar5 = param_1 + 0x1cf68;
  }
  uVar3 = *(uint *)(lVar5 + 8);
  if (uVar3 != 0xffffffff) {
    if (uVar3 < 0x40) {
      lVar6 = param_1 + 0x1c1b8 + (ulong)uVar3 * 0x30;
      *(undefined1 *)(lVar6 + 0x24) = 0;
      *(undefined4 *)(lVar6 + 0x28) = 0;
      if ((*(byte *)(lVar6 + 4) & 1) != 0) {
        FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140));
      }
      piVar9 = (int *)(param_1 + 0x1c1b8 + (ulong)uVar3 * 0x30 + 0x20);
      if (*piVar9 != -1) {
        *piVar9 = -1;
      }
    }
    *(undefined4 *)(lVar5 + 0x10) = 0;
  }
  lVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((lVar5 != 0) && (uVar3 = *puVar1, 0 < (int)uVar3)) {
    uVar14 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x1cde8);
      uVar2 = uVar14;
      if (uVar3 <= uVar14) {
        uVar2 = 0;
      }
      plVar13 = (long *)(lVar6 + (ulong)uVar2 * 0x32830 + 8);
      if (*plVar13 == 0) {
        iVar7 = -1;
      }
      else {
        uVar4 = FUN_01d77c78();
        iVar7 = -1;
        if ((uVar4 & 1) != 0) {
          iVar7 = *(int *)(*plVar13 + 4);
        }
      }
      if (iVar7 == *(int *)(lVar5 + 4)) {
        if ((((*(int *)(lVar6 + (ulong)uVar2 * 0x32830 + 0x19410) == 2) ||
             (*(int *)(lVar6 + (ulong)uVar2 * 0x32830 + 0x32820) == 2)) && (*plVar13 != 0)) &&
           (lVar5 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar5 + 0x16d) != '\0')) {
          uVar3 = *(uint *)(*plVar13 + 4);
          nn::os::LockMutex((MutexType *)(lVar5 + 0x990));
          if (uVar3 < *(uint *)(lVar5 + 0x760)) {
            lVar10 = *(long *)(*(long *)(lVar5 + 0x768) + (long)(int)uVar3 * 8);
          }
          else {
            lVar10 = 0;
          }
          if (*(char *)(lVar10 + 0x32820) != '\0') {
            *(undefined1 *)(lVar10 + 0x32810) = 0;
            *(undefined1 *)(lVar10 + 0x32820) = 0;
            *(undefined1 *)(lVar10 + 0x19400) = 0;
          }
          nn::os::UnlockMutex((MutexType *)(lVar5 + 0x990));
        }
        lVar6 = lVar6 + (ulong)uVar2 * 0x32830;
        memset(plVar13,0,0x1940c);
        *(undefined4 *)(lVar6 + 0x48) = 0xffffffff;
        *(undefined4 *)(lVar6 + 0x40) = 1;
        memset((void *)(lVar6 + 0x19420),0,0x19404);
        *(undefined4 *)(lVar6 + 0x19450) = 1;
        *(undefined4 *)(lVar6 + 0x19458) = 0xffffffff;
        break;
      }
      uVar3 = *puVar1;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar3);
  }
  lVar5 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((lVar5 != 0) && (uVar4 = (ulong)*puVar1, 0 < (int)*puVar1)) {
    lVar6 = *(long *)(param_1 + 0x1cde8);
    plVar13 = (long *)(lVar6 + 8);
    uVar11 = uVar4;
    do {
      if (*plVar13 == lVar5) goto LAB_034b0a08;
      plVar13 = plVar13 + 0x6506;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    do {
      if (*(long *)(lVar6 + 8) == 0) {
        *(long *)(lVar6 + 8) = lVar5;
        *(undefined4 *)(lVar6 + 0x19410) = 1;
        *(undefined4 *)(lVar6 + 0x32820) = 1;
        break;
      }
      lVar6 = lVar6 + 0x32830;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
LAB_034b0a08:
  FUN_034afcb0(param_1,plVar12,param_3);
  return;
}

