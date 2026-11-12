
void FUN_007dfa30(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x1928) == '\0') {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1950));
  puVar1 = (uint *)(param_1 + 8);
  puVar2 = puVar1 + (ulong)*(uint *)(param_2 + 0x24) * 0x324;
  if (1 < *(uint *)(param_2 + 0x24)) {
    puVar2 = puVar1;
  }
  if (0 < (int)*puVar2) {
    lVar4 = 0;
    lVar5 = 8;
    do {
      if (*(int *)(*(long *)(puVar2 + 2) + lVar5 + -8) == (int)param_2) {
        iVar3 = (int)lVar4;
        if (iVar3 != 1) {
          puVar2 = puVar1 + (ulong)*(uint *)(param_2 + 0x24) * 0x324;
          if (1 < *(uint *)(param_2 + 0x24)) {
            puVar2 = puVar1;
          }
          if ((-1 < -iVar3) && (uVar6 = *puVar2, -iVar3 < (int)uVar6)) {
            if (1 - iVar3 < (int)uVar6) {
              memmove((void *)(*(long *)(puVar2 + 2) + lVar5 + -8),
                      (void *)(*(long *)(puVar2 + 2) + lVar5),((int)uVar6 + lVar4) * 8 - 8);
              uVar6 = *puVar2;
            }
            *puVar2 = uVar6 - 1;
          }
        }
        break;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 8;
    } while (-lVar4 != (ulong)*puVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1950));
  return;
}

