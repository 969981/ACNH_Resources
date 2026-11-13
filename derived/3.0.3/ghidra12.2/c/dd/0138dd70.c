
void FUN_0138dd70(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  lVar3 = DAT_04cfae30;
  if (*(long *)(param_1 + 0x68) == 0 && *(long *)(param_1 + 0x60) == 0) goto LAB_0138de40;
  if ((*(byte *)(param_1 + 0x18) >> 2 & 1) == 0) {
    if (DAT_04cfae30 == 0) goto LAB_0138de40;
    plVar4 = (long *)(param_1 + 0x58);
LAB_0138dde4:
    pMVar1 = (MutexType *)(DAT_04cfae30 + 0x50);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar4);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    if (DAT_04cfae30 == 0) goto LAB_0138de40;
    plVar4 = (long *)(param_1 + 0x248);
    if (*(long *)(param_1 + 600) != 0 || *(long *)(param_1 + 0x250) != 0) goto LAB_0138dde4;
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
LAB_0138de40:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0xff;
  *(undefined1 *)(param_1 + 0x3fb) = 0xff;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}

