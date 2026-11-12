
void FUN_00905440(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *__dest;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[4];
  *param_1 = &PTR_FUN_04926bb8;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x358);
    if (0 < (int)uVar2) {
      __dest = *(undefined8 **)(lVar5 + 0x360);
      uVar4 = 0;
      __n = (long)(int)uVar2 * 8;
      do {
        __n = __n - 8;
        if ((undefined8 *)*__dest == param_1) {
          iVar3 = (int)uVar4;
          if ((-1 < iVar3) && (iVar3 < (int)uVar2)) {
            if (iVar3 + 1 < (int)uVar2) {
              memmove(__dest,__dest + 1,__n);
              uVar2 = *(uint *)(lVar5 + 0x358);
            }
            *(uint *)(lVar5 + 0x358) = uVar2 - 1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        __dest = __dest + 1;
      } while (uVar2 != uVar4);
    }
    param_1[4] = 0;
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

