
void FUN_03c1f9d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_04b7dfd8;
  param_1[0x45] = (long)&PTR_LAB_04b7e0b0;
  FUN_038e1a84(param_1 + 0x201);
  plVar2 = (long *)param_1[0x1fa];
  lVar3 = param_1[0x1f9];
  param_1[0x1f5] = (long)&PTR_FUN_048f9de8;
  if ((plVar2 != (long *)0x0 || lVar3 != 0) && (lVar1 = param_1[0x1fc], lVar1 != 0)) {
    param_1[0x1fc] = 0;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar2;
      plVar2 = (long *)param_1[0x1fa];
    }
    if (plVar2 != (long *)0x0) {
      *plVar2 = param_1[0x1f9];
    }
    param_1[0x1f9] = 0;
    param_1[0x1fa] = 0;
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  lVar3 = param_1[0x1f6];
  param_1[0x1f5] = (long)&PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) goto LAB_03c1faf0;
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar3 + 0x84) + 0xfa8);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar1 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar1 + 0x20));
    }
  }
  param_1[0x1f6] = 1;
LAB_03c1faf0:
  if ((char)param_1[0x65] != '\0') {
    DAT_05aecb08 = 0;
  }
  FUN_038e31ec(param_1 + 0x59);
  FUN_038e31ec(param_1 + 0x4f);
  FUN_038e1a84(param_1 + 0x46);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

