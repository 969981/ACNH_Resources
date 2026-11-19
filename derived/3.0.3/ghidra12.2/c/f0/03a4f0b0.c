
void FUN_03a4f0b0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[0x7a];
  *param_1 = &PTR_FUN_04b6e200;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0xcb0);
    if (lVar5 != 0) {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x5728));
      if (*(int *)(lVar5 + 0x108) != 0) {
        iVar2 = 0;
        do {
          lVar3 = *(long *)(lVar5 + 0x110) + (long)iVar2 * 0x430;
          if (*(long *)(lVar3 + 0x3d0) == lVar4) {
            *(undefined8 *)(lVar3 + 0x3d0) = 0;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (*(int *)(lVar5 + 0x108) != iVar2);
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x5728));
      *(undefined1 *)(lVar4 + 0xd18) = 0xff;
    }
    *(undefined8 *)(lVar4 + 0xcb0) = 0;
  }
  if ((long *)param_1[0x7b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7b] + 8))();
    param_1[0x7b] = 0;
  }
  __ptr = (void *)param_1[0x7c];
  if (__ptr != (void *)0x0) {
    FUN_03b05aa8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x7c] = 0;
  }
  FUN_039eb890(param_1);
  return;
}

