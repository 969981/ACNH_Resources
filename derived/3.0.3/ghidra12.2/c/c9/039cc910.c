
void FUN_039cc910(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  *(long *)(param_1 + 0x1a0) = param_1 + 0x188;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  if (((*(uint *)(param_1 + 8) ^ 0xffffffff) & 3) != 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar5 = *(long **)(param_1 + 0x38);
    plVar2 = plVar5 + *(int *)(param_1 + 0x30);
    do {
      lVar6 = *plVar5;
      if ((*(byte *)(lVar6 + 0x4e44) >> 4 & 1) != 0) {
        FUN_03949cd0(lVar6 + 0x4e80,&LAB_03a0c3a0);
      }
      *(undefined4 *)(lVar6 + 0x4dcc) = 5;
      uVar3 = *(uint *)(lVar6 + 0x4de8);
      if (0 < (int)uVar3) {
        uVar4 = 0;
        do {
          uVar1 = uVar4 + 1;
          if (uVar3 <= uVar4) {
            uVar4 = 0;
          }
          *(undefined4 *)(*(long *)(lVar6 + 0x4df0) + (long)(int)uVar4 * 4) = 0;
          uVar3 = *(uint *)(lVar6 + 0x4de8);
          uVar4 = uVar1;
        } while ((int)uVar1 < (int)uVar3);
      }
      *(undefined8 *)(lVar6 + 0x4e1c) = 0;
      *(undefined4 *)(lVar6 + 0x4e18) = 0;
      *(undefined4 *)(lVar6 + 0x4d70) = 0;
      FUN_03a0b730(lVar6 + 0x4d50,param_2,*(undefined1 *)(lVar6 + 0x4e96),1,
                   *(undefined4 *)(lVar6 + 0x4e80),*(undefined2 *)(lVar6 + 0x4e3a));
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  return;
}

