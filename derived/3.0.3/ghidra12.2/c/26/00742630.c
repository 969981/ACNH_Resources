
void FUN_00742630(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bb3510;
  *param_1 = (long)&PTR_LAB_04903cf8;
  lVar3 = 0;
  do {
    lVar2 = *(long *)puVar1 + 0x108 + lVar3 * 0x18;
    if (*(long *)(lVar2 + 8) != lVar2) {
      lVar4 = (long)*(int *)(lVar2 + 0x14);
      plVar5 = (long *)(*(long *)(lVar2 + 8) - lVar4);
      do {
        if (plVar5 == param_1) {
          plVar5 = (long *)(lVar4 + (long)param_1);
          if (*plVar5 != 0) {
            *(long *)(*plVar5 + 8) = plVar5[1];
          }
          if ((long *)plVar5[1] != (long *)0x0) {
            *(long *)plVar5[1] = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          goto LAB_007426f4;
        }
        plVar5 = (long *)(*(long *)((long)plVar5 + lVar4 + 8) - lVar4);
      } while (plVar5 != (long *)(lVar2 - lVar4));
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
LAB_007426f4:
  param_1[0xe] = (long)&PTR_LAB_04903d30;
  FUN_038e1c80(param_1 + 0x13);
  lVar3 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

