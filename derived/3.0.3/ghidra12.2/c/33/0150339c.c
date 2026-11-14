
void FUN_0150339c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_049a7208;
  lVar2 = DAT_0520f098;
  if (DAT_0520eff0 == param_1) {
    DAT_0520eff0 = (long *)0x0;
    lVar3 = DAT_0520f098 + 0x2868;
    *(undefined **)(DAT_0520f098 + 0x2868) = PTR_DAT_04bbcee8 + 0x10;
    FUN_014b3634(lVar3);
    *(undefined **)(lVar2 + 0x2540) = PTR_DAT_04bbd468 + 0x10;
    FUN_01552530(lVar2 + 0x2540);
    *(undefined ***)(lVar2 + 0x24d8) = &PTR_LAB_049a7370;
    FUN_01548348(lVar2 + 0x24d8);
    DAT_0520f098 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

