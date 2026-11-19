
void FUN_03b518b0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(*param_1 + 0x1a0);
  if (*(int *)(lVar2 + 0x3f0) != 0) {
    lVar4 = (long)*(int *)(lVar2 + 0x3f0) << 3;
    puVar3 = *(undefined8 **)(lVar2 + 0x3f8);
    do {
      (**(code **)(*(long *)*puVar3 + 8))();
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(lVar2 + 0x3f0) = 0;
  if (*(int *)(lVar2 + 0xe0) != 0) {
    lVar4 = (long)*(int *)(lVar2 + 0xe0) << 3;
    puVar3 = *(undefined8 **)(lVar2 + 0xe8);
    do {
      FUN_03b65370(*puVar3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  lVar2 = *param_1;
  iVar1 = *(int *)(*(long *)(lVar2 + 0x178) + 0x1f8);
  if (iVar1 != 0) {
    lVar4 = (long)iVar1 << 3;
    puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x178) + 0x200);
    do {
      (**(code **)(*(long *)*puVar3 + 0x68))();
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    lVar2 = *param_1;
  }
  FUN_03b6b6e0(*(undefined8 *)(lVar2 + 0x1a8));
  lVar2 = *(long *)(*param_1 + 0x1b8);
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x30));
    if (*(int *)(lVar2 + 0x50) != 0) {
      lVar4 = (long)*(int *)(lVar2 + 0x50) << 3;
      puVar3 = *(undefined8 **)(lVar2 + 0x58);
      do {
        (**(code **)(*(long *)*puVar3 + 0x18))();
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x30));
    lVar2 = *param_1;
    *(ulong *)(*(long *)(lVar2 + 0x1b8) + 8) = *(long *)(lVar2 + 8) + (ulong)*(uint *)(lVar2 + 4);
  }
  return;
}

