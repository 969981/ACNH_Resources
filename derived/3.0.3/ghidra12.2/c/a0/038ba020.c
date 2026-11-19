
void FUN_038ba020(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb24a8;
  *param_1 = &PTR_FUN_04b63868;
  plVar2 = param_1 + 0x1a;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_038bbe20(plVar2);
  lVar3 = param_1[0x1b];
  *plVar2 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_038ba0e4;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar2);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[0x1b] = 1;
LAB_038ba0e4:
  FUN_038bd550(param_1);
  return;
}

