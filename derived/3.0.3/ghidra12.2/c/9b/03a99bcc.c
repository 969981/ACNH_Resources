
void FUN_03a99bcc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_FUN_04b70b08;
  param_1[0x49] = (long)&PTR_LAB_04b70b58;
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 0x18))();
    param_1[0x56] = 0;
  }
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x18))();
    param_1[0x57] = 0;
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0x18))();
    param_1[0x51] = 0;
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 0x18))();
    param_1[0x53] = 0;
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
    param_1[0x55] = 0;
  }
  if ((long *)param_1[0x58] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x58] + 8))();
    param_1[0x58] = 0;
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 0x18))();
    param_1[0x54] = 0;
  }
  puVar3 = PTR_DAT_04bd18d8;
  lVar4 = param_1[3];
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x49] = (long)(PTR_DAT_04bd1068 + 0x10);
  param_1[2] = (long)puVar1;
  *param_1 = (long)(puVar3 + 0x10);
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 2));
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

