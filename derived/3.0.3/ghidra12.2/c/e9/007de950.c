
void FUN_007de950(long param_1)

{
  uint *puVar1;
  MutexType *pMVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = DAT_04cb3170;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (*(int *)(param_1 + 0x38) != 0) {
      return;
    }
    if (*(char *)(DAT_04cb3170 + 0x1928) != '\0') {
      pMVar2 = (MutexType *)(DAT_04cb3170 + 0x1950);
      nn::os::LockMutex(pMVar2);
      puVar1 = (uint *)(lVar5 + 8);
      puVar3 = puVar1 + (ulong)*(uint *)(param_1 + 0x24) * 0x324;
      if (1 < *(uint *)(param_1 + 0x24)) {
        puVar3 = puVar1;
      }
      uVar4 = (ulong)*puVar3;
      if (0 < (int)*puVar3) {
        piVar6 = *(int **)(puVar3 + 2);
        lVar5 = 0xffffffff;
        do {
          if (*piVar6 == (int)param_1) {
            if (lVar5 != 0) goto LAB_007dea4c;
            break;
          }
          lVar5 = lVar5 + -1;
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = puVar1 + (ulong)*(uint *)(param_1 + 0x24) * 0x324;
      if (1 < *(uint *)(param_1 + 0x24)) {
        puVar3 = puVar1;
      }
      if ((int)*puVar3 < (int)puVar3[1]) {
        *(long *)(*(long *)(puVar3 + 2) + (long)(int)*puVar3 * 8) = param_1;
        *puVar3 = *puVar3 + 1;
      }
LAB_007dea4c:
      nn::os::UnlockMutex(pMVar2);
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
    FUN_007dfa30(*(undefined8 *)PTR_DAT_04bb30d0,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}

