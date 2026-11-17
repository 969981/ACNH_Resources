
void FUN_02d7e370(long *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar5 = DAT_05351408;
  if ((char)param_1[0xb3] != '\0') {
    lVar6 = param_1[0xb1];
    if (lVar6 != 0) {
      pMVar1 = (MutexType *)(DAT_05351408 + 0x98);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar5 + 0x68) != lVar5 + 0x60) {
        lVar3 = (long)*(int *)(lVar5 + 0x74);
        lVar4 = *(long *)(lVar5 + 0x68) - lVar3;
        do {
          if (lVar4 == lVar6) {
            *(undefined1 *)(lVar6 + 0x1b0) = 0;
            break;
          }
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar4 != (lVar5 + 0x60) - lVar3);
      }
      nn::os::UnlockMutex(pMVar1);
    }
    *(undefined1 *)(param_1 + 0xb3) = 0;
  }
  lVar5 = DAT_05351408;
  if ((char)param_1[0xb0] != '\0') {
    lVar6 = param_1[0xae];
    if (lVar6 != 0) {
      pMVar1 = (MutexType *)(DAT_05351408 + 0x98);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar5 + 0x68) != lVar5 + 0x60) {
        lVar3 = (long)*(int *)(lVar5 + 0x74);
        lVar4 = *(long *)(lVar5 + 0x68) - lVar3;
        do {
          if (lVar4 == lVar6) {
            *(undefined1 *)(lVar6 + 0x1b0) = 0;
            break;
          }
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar4 != (lVar5 + 0x60) - lVar3);
      }
      nn::os::UnlockMutex(pMVar1);
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (0 < (int)param_1[0x98]) {
    lVar5 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x99] + lVar5 * 8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x98]);
  }
  if (0 < (int)param_1[0x82]) {
    lVar5 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x83] + lVar5 * 8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x82]);
  }
  puVar2 = PTR_DAT_04bb8470;
  if ((char)param_1[0x80] != '\0') {
    local_40 = *(undefined8 *)PTR_DAT_04bb8470;
    local_38 = (undefined4)param_1[0x7a];
    FUN_01c788b4(&local_40,param_1 + 0x7a);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if ((char)param_1[0x79] != '\0') {
    local_40 = *(undefined8 *)puVar2;
    local_38 = (undefined4)param_1[0x73];
    FUN_01c788b4(&local_40,param_1 + 0x73);
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  if ((char)param_1[0x72] != '\0') {
    local_40 = *(undefined8 *)puVar2;
    local_38 = (undefined4)param_1[0x6c];
    FUN_01c788b4(&local_40,param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

