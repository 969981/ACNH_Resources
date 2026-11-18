
void FUN_032a4288(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((long *)param_1[0x59] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x59] + 8))();
  }
  if ((long *)param_1[0x4f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4f] + 8))();
  }
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 8))();
  }
  if ((long *)param_1[0x43] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x43] + 8))();
  }
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 8))();
  }
  plVar1 = param_1 + 0x15;
  *plVar1 = (long)(PTR_DAT_04bb24a8 + 0x10);
  param_1[0x2c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_038bbe20(plVar1);
  lVar2 = param_1[0x16];
  *plVar1 = (long)&PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) goto LAB_032a43ac;
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)plVar1);
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
  param_1[0x16] = 1;
LAB_032a43ac:
  *param_1 = &PTR_LAB_04b196e0;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  param_1[3] = param_1[2];
  if (((long *)param_1[1] == (long *)0x0) || (param_1[2] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032a43f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x38))();
  return;
}

