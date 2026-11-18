
void FUN_034654bc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((((*(int *)(param_1 + 0x19410) == 2) || (*(int *)(param_1 + 0x32820) == 2)) &&
      (*(long *)(param_1 + 8) != 0)) &&
     (lVar3 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar3 + 0x16d) != '\0')) {
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 4);
    nn::os::LockMutex((MutexType *)(lVar3 + 0x990));
    if (uVar1 < *(uint *)(lVar3 + 0x760)) {
      lVar2 = *(long *)(*(long *)(lVar3 + 0x768) + (long)(int)uVar1 * 8);
    }
    else {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x32820) != '\0') {
      *(undefined1 *)(lVar2 + 0x32810) = 0;
      *(undefined1 *)(lVar2 + 0x32820) = 0;
      *(undefined1 *)(lVar2 + 0x19400) = 0;
    }
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x990));
  }
  memset((void *)(param_1 + 8),0,0x1940c);
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  memset((void *)(param_1 + 0x19420),0,0x19404);
  *(undefined4 *)(param_1 + 0x19450) = 1;
  *(undefined4 *)(param_1 + 0x19458) = 0xffffffff;
  return;
}

