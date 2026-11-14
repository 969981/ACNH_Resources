
void FUN_01c82e2c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04a43da8;
  lVar6 = DAT_05353640;
  puVar1 = PTR_DAT_04bd0d40;
  if (DAT_05353618 != param_1) goto LAB_01c83020;
  DAT_05353618 = (long *)0x0;
  *(undefined ***)(DAT_05353640 + 0x140) = &PTR_LAB_04a43dc8;
  lVar7 = *(long *)(lVar6 + 0x160);
  puVar4 = *(undefined8 **)(lVar6 + 0x168);
  if ((puVar4 != (undefined8 *)0x0 || lVar7 != 0) && (lVar2 = *(long *)(lVar6 + 0x178), lVar2 != 0))
  {
    *(undefined8 *)(lVar6 + 0x178) = 0;
    if (lVar7 != 0) {
      *(undefined8 **)(lVar7 + 8) = puVar4;
      puVar4 = *(undefined8 **)(lVar6 + 0x168);
    }
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = *(undefined8 *)(lVar6 + 0x160);
    }
    *(undefined8 *)(lVar6 + 0x160) = 0;
    *(undefined8 *)(lVar6 + 0x168) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar7 = *(long *)(lVar6 + 0x148);
  *(undefined **)(lVar6 + 0x140) = puVar1 + 0x10;
  if (lVar7 == 0) {
LAB_01c82f44:
    *(undefined8 *)(lVar6 + 0x148) = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + lVar6 + 0x140);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_01c82f44;
  }
  *(undefined8 *)(lVar6 + 0xe0) = &PTR_LAB_04a43dc8;
  plVar5 = *(long **)(lVar6 + 0x108);
  plVar3 = (long *)(lVar6 + 0x100);
  lVar7 = *plVar3;
  if ((plVar5 != (long *)0x0 || lVar7 != 0) && (lVar2 = *(long *)(lVar6 + 0x118), lVar2 != 0)) {
    *(undefined8 *)(lVar6 + 0x118) = 0;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
      plVar5 = *(long **)(lVar6 + 0x108);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar3;
    }
    *plVar3 = 0;
    *(undefined8 *)(lVar6 + 0x108) = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  lVar7 = *(long *)(lVar6 + 0xe8);
  *(undefined **)(lVar6 + 0xe0) = puVar1 + 0x10;
  if (lVar7 == 0) {
LAB_01c83014:
    *(undefined8 *)(lVar6 + 0xe8) = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + lVar6 + 0xe0);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
    goto LAB_01c83014;
  }
  DAT_05353640 = 0;
LAB_01c83020:
  lVar6 = param_1[1];
  *param_1 = (long)(puVar1 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

