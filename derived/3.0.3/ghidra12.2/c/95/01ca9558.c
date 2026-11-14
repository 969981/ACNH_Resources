
void FUN_01ca9558(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_04a45430;
  lVar5 = DAT_05358950;
  if (DAT_05358948 != param_1) goto LAB_01ca9758;
  DAT_05358948 = (undefined8 *)0x0;
  plVar3 = *(long **)(DAT_05358950 + 0x100);
  puVar6 = (undefined8 *)(DAT_05358950 + 0xd8);
  *puVar6 = &PTR_LAB_04a43dc8;
  plVar1 = (long *)(lVar5 + 0xf8);
  lVar4 = *plVar1;
  if ((plVar3 != (long *)0x0 || lVar4 != 0) && (lVar2 = *(long *)(lVar5 + 0x110), lVar2 != 0)) {
    *(undefined8 *)(lVar5 + 0x110) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = *(long **)(lVar5 + 0x100);
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = *(long *)(lVar5 + 0xe0);
  *(undefined ***)(lVar5 + 0xd8) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_01ca9678:
    *(undefined8 *)(lVar5 + 0xe0) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)puVar6);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_01ca9678;
  }
  *(undefined8 *)(lVar5 + 0x78) = &PTR_LAB_04a43dc8;
  plVar3 = *(long **)(lVar5 + 0xa0);
  plVar1 = (long *)(lVar5 + 0x98);
  lVar4 = *plVar1;
  if ((plVar3 != (long *)0x0 || lVar4 != 0) && (lVar2 = *(long *)(lVar5 + 0xb0), lVar2 != 0)) {
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = *(long **)(lVar5 + 0xa0);
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar5 + 0xa0) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar4 = *(long *)(lVar5 + 0x80);
  *(undefined ***)(lVar5 + 0x78) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_01ca974c:
    *(undefined8 *)(lVar5 + 0x80) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + lVar5 + 0x78);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_01ca974c;
  }
  DAT_05358950 = 0;
LAB_01ca9758:
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

