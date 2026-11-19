
/* WARNING: Removing unreachable block (ram,0x03869984) */
/* WARNING: Removing unreachable block (ram,0x03869a14) */

void FUN_03869930(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  uVar2 = FUN_03869ae0(param_2,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x130);
    if (plVar3 != (long *)(param_1 + 0x128)) {
      plVar1 = (long *)(param_2 + 0xb0 + (long)*(int *)(param_1 + 0x13c));
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
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
          break;
        }
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)(param_1 + 0x128));
    }
  }
  uVar2 = FUN_03869ae0(param_2,1);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x148);
    if (plVar3 != (long *)(param_1 + 0x140)) {
      plVar1 = (long *)(param_2 + 0xe8 + (long)*(int *)(param_1 + 0x154));
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
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
          break;
        }
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)(param_1 + 0x140));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}

