
void FUN_00960e20(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0492a770;
  puVar3 = PTR_DAT_04bb27c8;
  if ((char)param_1[0x37] != '\0') {
    lVar4 = *(long *)PTR_DAT_04bb27c8;
    *(undefined1 *)(param_1 + 0x37) = 0;
    if (*(long *)(lVar4 + 0xa8) != 0) {
      FUN_00974960(*(long *)(lVar4 + 0xa8),param_1 + 0x38,7);
      lVar4 = *(long *)(*(long *)puVar3 + 0xa8);
      if (lVar4 != 0) {
        FUN_00974a90(lVar4,param_1 + 0x38,0);
      }
    }
  }
  puVar1 = PTR_DAT_04bb5c98 + 0x10;
  param_1[0x38] = (long)(PTR_DAT_04bbc1a0 + 0x10);
  *param_1 = (long)puVar1;
  if ((param_1[2] == 0 && param_1[1] == 0) || (lVar4 = *(long *)puVar3, lVar4 == 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
  plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

