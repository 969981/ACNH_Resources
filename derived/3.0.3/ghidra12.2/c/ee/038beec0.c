
void FUN_038beec0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long local_58 [4];
  long local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  lVar2 = param_2[5];
  while (lVar2 != 0) {
    FUN_038beec0(param_1,*(undefined8 *)(lVar2 + 0x20));
    lVar2 = param_2[5];
  }
  nn::os::LockMutex(pMVar1);
  if ((int)param_2[0x17] == 7) {
    nn::os::UnlockMutex(pMVar1);
    goto LAB_038bf058;
  }
  plVar5 = param_2 + 4;
  (**(code **)(*param_2 + 0x68))(param_2);
  *(undefined4 *)(param_2 + 0x17) = 7;
  lVar2 = param_2[0x10];
  if (lVar2 != 0) {
    plVar3 = param_2 + 0xd;
    param_2[0x10] = 0;
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = param_2[0xe];
    }
    if ((long *)param_2[0xe] != (long *)0x0) {
      *(long *)param_2[0xe] = *plVar3;
    }
    *plVar3 = 0;
    param_2[0xe] = 0;
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  nn::os::UnlockMutex(pMVar1);
  lVar2 = *plVar5;
  if ((lVar2 == 0) || (*(long **)(lVar2 + 8) != plVar5)) {
    if (param_2[7] != 0) {
      *(long *)(param_2[7] + 0x10) = param_2[6];
    }
    lVar2 = param_2[6];
    if (lVar2 != 0) goto LAB_038befdc;
    if (*plVar5 != 0) {
      *(long *)(*(long *)(*plVar5 + 8) + 0x18) = param_2[7];
    }
  }
  else {
    *(long *)(lVar2 + 8) = param_2[6];
    lVar2 = param_2[6];
    if (lVar2 != 0) {
LAB_038befdc:
      *(long *)(lVar2 + 0x18) = param_2[7];
      param_2[6] = 0;
    }
  }
  param_2[7] = 0;
  param_2[4] = 0;
  FUN_038aae00(plVar5);
  param_2[6] = 0;
  param_2[7] = 0;
  *plVar5 = 0;
  param_2[5] = 0;
  local_58[2] = param_2[0x13];
  local_58[3] = param_2[0x14];
  local_38 = param_2[0x15];
  local_58[0] = param_2[0x11];
  local_58[1] = param_2[0x12];
  uVar4 = (ulong)*(uint *)PTR_DAT_04bd0ca0;
  if (0 < (int)*(uint *)PTR_DAT_04bd0ca0) {
    plVar5 = local_58;
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
LAB_038bf058:
  nn::os::UnlockMutex(pMVar1);
  return;
}

