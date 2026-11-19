
void FUN_0390edb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x160);
  if ((*(long *)(lVar2 + 0x168) == 0 && *(long *)(lVar2 + 0x160) == 0) &&
     (*(int *)(lVar2 + 0x2600) == 0)) {
    *(uint *)(lVar2 + 0x2a38) = *(uint *)(lVar2 + 0x2a38) | 1;
    lVar2 = *(long *)(param_1 + 0x160);
  }
  *(undefined8 *)(lVar2 + 0x2a30) = 0;
  lVar2 = *(long *)(param_1 + 0x160);
  if ((((*(int *)(lVar2 + 0x2600) != 0) || ((*(byte *)(lVar2 + 0x2a38) >> 3 & 1) != 0)) &&
      (*(long *)(lVar2 + 0x168) == 0 && *(long *)(lVar2 + 0x160) == 0)) &&
     (*(long *)(lVar2 + 0x2a30) == 0)) {
    lVar3 = *(long *)(param_1 + 0x1a0);
    nn::os::LockMutex((MutexType *)(lVar3 + 0x890));
    plVar1 = (long *)(*(int *)(lVar3 + 0x23c) + lVar2);
    lVar2 = *(long *)(lVar3 + 0x228);
    *(long **)(lVar3 + 0x228) = plVar1;
    *plVar1 = lVar2;
    plVar1[1] = lVar3 + 0x228;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar1;
    }
    *(int *)(lVar3 + 0x238) = *(int *)(lVar3 + 0x238) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x890));
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 3;
  *(undefined1 *)(param_1 + 0x199) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}

