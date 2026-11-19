
/* WARNING: Removing unreachable block (ram,0x0386aad4) */
/* WARNING: Removing unreachable block (ram,0x0386ab68) */

void FUN_0386aa80(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  uVar3 = FUN_03869ae0(param_2,0);
  if ((uVar3 & 1) != 0) {
    lVar1 = param_1 + 0x70;
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != lVar1) {
      do {
        if (lVar4 == param_2 + 0xb0 + (long)*(int *)(param_1 + 0x84)) goto LAB_0386ab38;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
    }
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_2 + 0x158);
    plVar2 = (long *)((long)*(int *)(param_1 + 0x84) + param_2 + 0xb0);
    lVar4 = *(long *)(param_1 + 0x70);
    *(long **)(param_1 + 0x70) = plVar2;
    *plVar2 = lVar4;
    plVar2[1] = lVar1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
LAB_0386ab38:
  uVar3 = FUN_03869ae0(param_2,1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x90);
    lVar1 = param_1 + 0x88;
    if (lVar4 != lVar1) {
      do {
        if (lVar4 == param_2 + 0xe8 + (long)*(int *)(param_1 + 0x9c)) goto LAB_0386abc8;
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
    }
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_2 + 0x158);
    plVar2 = (long *)((long)*(int *)(param_1 + 0x9c) + param_2 + 0xe8);
    lVar4 = *(long *)(param_1 + 0x88);
    *(long **)(param_1 + 0x88) = plVar2;
    *plVar2 = lVar4;
    plVar2[1] = lVar1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
LAB_0386abc8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}

