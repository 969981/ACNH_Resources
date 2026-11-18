
void FUN_03604170(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x148);
  if (*(long *)(param_1 + 0x140) != param_2) {
    lVar1 = *(long *)(param_1 + 0x140);
  }
  uVar2 = *(long *)(param_2 + 0x110) - *(long *)(param_2 + 0x120);
  if ((*(byte *)(param_1 + 0x138) < 2) || (*(char *)(param_1 + 0x139) == '\0')) {
    while ((ulong)(*(long *)(lVar1 + 0x110) - *(long *)(lVar1 + 0x120)) < uVar2) {
      if (*(byte *)(lVar1 + 0xd2) < 3) {
        FUN_0361bf5c(lVar1);
      }
      else if (*(char *)(lVar1 + 0x200) < '\0') {
        FUN_0361d4d4(lVar1);
      }
      else if ((*(byte *)(lVar1 + 0xec3) >> 2 & 1) == 0) {
        FUN_0361cd78(lVar1);
      }
      else {
        FUN_0361c670(lVar1);
      }
    }
  }
  else {
    while (*(ulong *)(lVar1 + 0x118) < *(long *)(lVar1 + 0x120) + uVar2) {
      Yield();
    }
  }
  if (((*(int *)(param_2 + 0x4080) != 0) || (*(int *)(param_2 + 0x4084) != 0)) ||
     (*(int *)(lVar1 + 0x4084) != 0)) {
    if ((1 < *(byte *)(param_1 + 0x138)) && (*(char *)(param_1 + 0x139) != '\0')) {
      nn::os::LockMutex((MutexType *)(param_1 + 0xc58));
    }
    FUN_036042e0(param_1,0,uVar2,param_2);
    if ((1 < *(byte *)(param_1 + 0x138)) && (*(char *)(param_1 + 0x139) != '\0')) {
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xc58));
      return;
    }
  }
  return;
}

