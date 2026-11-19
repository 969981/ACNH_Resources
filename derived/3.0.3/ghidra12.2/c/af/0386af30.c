
/* WARNING: Removing unreachable block (ram,0x0386af84) */
/* WARNING: Removing unreachable block (ram,0x0386b014) */

void FUN_0386af30(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  uVar2 = FUN_03869ae0(param_2,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x78);
    if (plVar3 != (long *)(param_1 + 0x70)) {
      plVar1 = (long *)(param_2 + 0xb0 + (long)*(int *)(param_1 + 0x84));
      do {
        if (plVar3 == plVar1) {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
          break;
        }
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)(param_1 + 0x70));
    }
  }
  uVar2 = FUN_03869ae0(param_2,1);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x90);
    if (plVar3 != (long *)(param_1 + 0x88)) {
      plVar1 = (long *)(param_2 + 0xe8 + (long)*(int *)(param_1 + 0x9c));
      do {
        if (plVar3 == plVar1) {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
          break;
        }
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)(param_1 + 0x88));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}

