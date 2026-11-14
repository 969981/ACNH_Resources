
void FUN_015709f0(long param_1,long param_2)

{
  long *__dest;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  uint *puVar4;
  
  if (param_2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x2dd0));
  uVar1 = *(uint *)(param_1 + 0x168);
  if (0 < (int)uVar1) {
    __dest = *(long **)(param_1 + 0x170);
    uVar3 = 0;
    __n = (long)(int)uVar1 * 8;
    puVar4 = (uint *)(param_1 + 0x168);
    do {
      __n = __n - 8;
      if (*__dest == param_2) {
        iVar2 = (int)uVar3;
        if (-1 < iVar2) {
          if ((int)uVar1 <= iVar2) goto LAB_01570b04;
          if ((int)uVar1 <= iVar2 + 1) goto LAB_01570afc;
          goto LAB_01570aec;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      __dest = __dest + 1;
    } while (uVar1 != uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x7b8);
  if (0 < (int)uVar1) {
    __dest = *(long **)(param_1 + 0x7c0);
    uVar3 = 0;
    __n = (long)(int)uVar1 * 8;
    puVar4 = (uint *)(param_1 + 0x7b8);
    do {
      __n = __n - 8;
      if (*__dest == param_2) {
        iVar2 = (int)uVar3;
        if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
          if (iVar2 + 1 < (int)uVar1) {
LAB_01570aec:
            memmove(__dest,__dest + 1,__n);
            uVar1 = *puVar4;
          }
LAB_01570afc:
          *puVar4 = uVar1 - 1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      __dest = __dest + 1;
    } while (uVar1 != uVar3);
  }
LAB_01570b04:
  FUN_015efc70(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x88),param_2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2dd0));
  return;
}

