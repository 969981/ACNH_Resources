
void FUN_038f7e50(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  plVar12 = (long *)param_1[5];
  *param_1 = &PTR_FUN_04b65a90;
  lVar13 = DAT_05ae78d0;
  for (; DAT_05ae78d0 = lVar13, plVar12 != (long *)0x0; plVar12 = (long *)plVar12[4]) {
    lVar13 = plVar12[3];
    while (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 8) = 0;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      lVar8 = *(long *)(lVar13 + 0x30);
      *(undefined8 *)(lVar13 + 0x30) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined8 *)(lVar13 + 0x20) = 0;
      *(undefined2 *)(lVar13 + 0x2a) = 0;
      *(byte *)(lVar13 + 0x28) = *(byte *)(lVar13 + 0x28) & 0xfe;
      lVar13 = lVar8;
    }
    plVar12[3] = 0;
    if ((int)plVar12[0x25] < 0) {
      (*DAT_04c61fc8)(plVar12 + 5);
      *(undefined4 *)((long)plVar12 + 300) = 0;
      *(uint *)(plVar12 + 0x25) = *(uint *)(plVar12 + 0x25) & 0x7fffffff;
      plVar6 = (long *)plVar12[1];
    }
    else {
      plVar6 = (long *)plVar12[1];
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
      plVar12[1] = 0;
    }
    if (plVar12[2] != 0) {
      (**(code **)(**(long **)(*plVar12 + 8) + 0x38))();
      plVar12[2] = 0;
    }
    lVar13 = DAT_05ae78d0;
  }
  nn::os::LockMutex((MutexType *)(lVar13 + 0x28));
  iVar4 = *(int *)(lVar13 + 0x48);
  iVar7 = iVar4 + -1;
  if (0 < iVar4) {
    iVar9 = 0;
    lVar8 = *(long *)(lVar13 + 0x50);
    iVar10 = iVar7;
    do {
      iVar1 = iVar9 + iVar10;
      iVar3 = iVar1;
      if (iVar1 < 0 != SCARRY4(iVar9,iVar10)) {
        iVar3 = iVar1 + 1;
      }
      uVar2 = iVar3 >> 1;
      lVar11 = *(long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 8);
      if (lVar11 == param_1[1]) {
        if ((-2 < iVar1) && ((int)uVar2 < iVar4)) {
          iVar9 = uVar2 + 1;
          uVar5 = iVar4 - iVar9;
          if (uVar5 != 0 && iVar9 <= iVar4) {
            memmove((void *)(lVar8 + (ulong)uVar2 * 8),(void *)(lVar8 + (long)iVar9 * 8),
                    -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
            iVar7 = *(int *)(lVar13 + 0x48) + -1;
          }
          *(int *)(lVar13 + 0x48) = iVar7;
        }
        break;
      }
      iVar1 = uVar2 - 1;
      if (lVar11 < (long)param_1[1]) {
        iVar9 = uVar2 + 1;
        iVar1 = iVar10;
      }
      iVar10 = iVar1;
    } while (iVar9 <= iVar1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar13 + 0x28));
  FUN_038e1a84(param_1 + 7);
  lVar13 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar13 != 0) {
    if (lVar13 == 1) {
      return;
    }
    if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar13 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
    }
    plVar12 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)param_1);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

