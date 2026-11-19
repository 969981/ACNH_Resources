
void FUN_03b3fa30(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar5 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar5) {
    iVar4 = -uVar5;
    uVar7 = (ulong)uVar5;
    do {
      uVar6 = uVar7 - 1;
      uVar5 = (uint)uVar6;
      if (uVar5 < *(uint *)(param_1 + 0x28)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x30) + (uVar6 & 0xffffffff) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_03b3eb60(lVar3);
      if (*(int *)(lVar3 + 0x7c) == 0) {
        if ((-1 < (int)uVar5) && (iVar2 = *(int *)(param_1 + 0x28), (int)uVar5 < iVar2)) {
          if ((int)uVar7 < iVar2) {
            memmove((void *)(*(long *)(param_1 + 0x30) + (uVar6 & 0xffffffff) * 8),
                    (void *)(*(long *)(param_1 + 0x30) + (uVar7 & 0xffffffff) * 8),
                    -(ulong)((uint)(iVar4 + iVar2) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar4 + iVar2) << 3);
            iVar2 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar2 + -1;
        }
        *(byte *)(lVar3 + 0xb0) = *(byte *)(lVar3 + 0xb0) & 0xfd;
      }
      iVar4 = iVar4 + 1;
      bVar1 = 1 < uVar7;
      uVar7 = uVar6;
    } while (bVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

