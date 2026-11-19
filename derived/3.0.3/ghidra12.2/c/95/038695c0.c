
/* WARNING: Removing unreachable block (ram,0x03869614) */
/* WARNING: Removing unreachable block (ram,0x038696a8) */

void FUN_038695c0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  uVar3 = FUN_03869ae0(param_2,0);
  if ((uVar3 & 1) != 0) {
    lVar1 = param_1 + 0x128;
    lVar4 = *(long *)(param_1 + 0x130);
    if (lVar4 != lVar1) {
      do {
        if (lVar4 == param_2 + 0xb0 + (long)*(int *)(param_1 + 0x13c)) goto LAB_03869678;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
    }
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_2 + 0x158);
    plVar2 = (long *)((long)*(int *)(param_1 + 0x13c) + param_2 + 0xb0);
    lVar4 = *(long *)(param_1 + 0x128);
    *(long **)(param_1 + 0x128) = plVar2;
    *plVar2 = lVar4;
    plVar2[1] = lVar1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  }
LAB_03869678:
  uVar3 = FUN_03869ae0(param_2,1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x148);
    lVar1 = param_1 + 0x140;
    if (lVar4 != lVar1) {
      do {
        if (lVar4 == param_2 + 0xe8 + (long)*(int *)(param_1 + 0x154)) goto LAB_03869708;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
    }
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_2 + 0x158);
    plVar2 = (long *)((long)*(int *)(param_1 + 0x154) + param_2 + 0xe8);
    lVar4 = *(long *)(param_1 + 0x140);
    *(long **)(param_1 + 0x140) = plVar2;
    *plVar2 = lVar4;
    plVar2[1] = lVar1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  }
LAB_03869708:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}

