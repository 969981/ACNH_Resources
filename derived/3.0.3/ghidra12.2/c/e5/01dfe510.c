
undefined8 FUN_01dfe510(long param_1,long *param_2)

{
  void *__s;
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_1 + 0x109) != '\0')) &&
     (*(long *)(param_1 + 0x2f8) != 0)) {
    __s = (void *)(*(long *)(param_1 + 0x600) + 0x141);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_01dfe5bc;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01dfe5bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01dfe5bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01dfe5bc:
    uVar3 = (uint)lVar4;
    if (0x3fe < (int)uVar3) {
      uVar3 = 0x3ff;
    }
    memset(__s,0,0x400);
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(__s,(void *)param_2[1],(ulong)uVar3);
    lVar4 = FUN_01dfe650(DAT_0536bac8,*(undefined8 *)(param_1 + 0x600));
    *(long *)(param_1 + 0x608) = lVar4;
    uVar2 = 0;
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x2d0) = 8;
      nn::os::LockMutex((MutexType *)(param_1 + 0x658));
      FUN_03ebb160(param_1 + 8,2);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
      uVar2 = 1;
    }
  }
  return uVar2;
}

