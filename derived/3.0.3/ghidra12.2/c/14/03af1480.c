
void FUN_03af1480(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  
  lVar3 = *(long *)(param_1 + 0x340);
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  lVar3 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  lVar3 = *(long *)(param_1 + 0x350);
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  puVar7 = *(uint **)(*(long *)(param_1 + 0x358) + 0x31b8);
  nn::os::LockMutex((MutexType *)(puVar7 + 0x22));
  *(undefined2 *)(puVar7 + 2) = 0;
  if (*puVar7 != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(puVar7 + 6);
      uVar1 = uVar2;
      if (puVar7[4] <= uVar2) {
        uVar1 = 0;
      }
      if ((*(uint *)(lVar3 + (long)(int)uVar1 * 0x50 + 0x38) & 3) == 1) {
        lVar4 = lVar3 + (long)(int)uVar1 * 0x50;
        puVar5 = (uint *)(lVar4 + 0x1c);
        *(undefined4 *)(lVar4 + 0x20) = 0;
        if (*puVar5 != 0) {
          uVar6 = 0;
          do {
            *(undefined2 *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x50 + 0x28) + uVar6 * 2) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *puVar5);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar7);
  }
  nn::os::UnlockMutex((MutexType *)(puVar7 + 0x22));
  return;
}

