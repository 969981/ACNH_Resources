
int FUN_039a6dd0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xcb0);
  if (lVar5 != 0) {
    nn::os::LockMutex((MutexType *)(lVar5 + 0x5728));
    if (*(int *)(lVar5 + 0x108) != 0) {
      iVar1 = 0;
      do {
        lVar3 = *(long *)(lVar5 + 0x110) + (long)iVar1 * 0x430;
        if (*(long *)(lVar3 + 0x3d0) == param_1) {
          *(undefined8 *)(lVar3 + 0x3d0) = 0;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (*(int *)(lVar5 + 0x108) != iVar1);
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x5728));
    *(undefined1 *)(param_1 + 0xd18) = 0xff;
  }
  if (param_2 == 0) {
    cVar4 = *(char *)(param_1 + 0xd18);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_2 + 0x5728));
    iVar1 = *(int *)(param_2 + 0x108);
    if (iVar1 == 0) {
      cVar4 = -1;
    }
    else {
      cVar4 = '\0';
      iVar2 = 0;
      do {
        if (*(long *)(*(long *)(param_2 + 0x110) + (long)iVar2 * 0x430 + 0x3d0) == param_1)
        goto LAB_039a6ef0;
        iVar2 = iVar2 + 1;
        cVar4 = cVar4 + '\x01';
      } while (iVar1 != iVar2);
      cVar4 = '\0';
      iVar2 = 0;
      do {
        lVar5 = *(long *)(param_2 + 0x110) + (long)iVar2 * 0x430;
        if (*(long *)(lVar5 + 0x3d0) == 0) {
          *(long *)(lVar5 + 0x3d0) = param_1;
          goto LAB_039a6ef0;
        }
        iVar2 = iVar2 + 1;
        cVar4 = cVar4 + '\x01';
      } while (iVar1 != iVar2);
      cVar4 = -1;
    }
LAB_039a6ef0:
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x5728));
    *(char *)(param_1 + 0xd18) = cVar4;
  }
  *(long *)(param_1 + 0xcb0) = param_2;
  return (int)cVar4;
}

