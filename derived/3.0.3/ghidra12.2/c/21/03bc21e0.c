
void FUN_03bc21e0(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 != 0) {
    nn::os::LockMutex((MutexType *)(lVar9 + 200));
    plVar5 = *(long **)(lVar9 + 0x98);
    if (plVar5 != (long *)(lVar9 + 0x90)) {
      plVar4 = (long *)(*(int *)(lVar9 + 0xa4) + param_1);
      do {
        if (plVar5 == plVar4) {
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          *(int *)(lVar9 + 0xa0) = *(int *)(lVar9 + 0xa0) + -1;
          break;
        }
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)(lVar9 + 0x90));
    }
    nn::os::UnlockMutex((MutexType *)(lVar9 + 200));
  }
  puVar8 = *(undefined8 **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffff000d;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar9 = DAT_05aec0b0;
  if (puVar8 != (undefined8 *)0x0) {
    if (*(long *)(DAT_05aec0b0 + 0x28) != 0) {
      pMVar1 = (MutexType *)(DAT_05aec0b0 + 0x58);
      plVar5 = (long *)(DAT_05aec0b0 + 8);
      nn::os::LockMutex(pMVar1);
      plVar4 = *(long **)(lVar9 + 0x10);
      if (plVar4 != plVar5) {
        plVar2 = puVar8 + 10;
        do {
          if (plVar4 == plVar2) {
            if (*plVar2 != 0) {
              *(undefined8 *)(*plVar2 + 8) = puVar8[0xb];
            }
            if ((long *)puVar8[0xb] != (long *)0x0) {
              *(long *)puVar8[0xb] = *plVar2;
            }
            *plVar2 = 0;
            puVar8[0xb] = 0;
            *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
            (**(code **)*puVar8)(puVar8);
            *puVar8 = *(undefined8 *)(lVar9 + 0x20);
            *(undefined8 **)(lVar9 + 0x20) = puVar8;
            break;
          }
          plVar4 = (long *)plVar4[1];
        } while (plVar4 != plVar5);
      }
      nn::os::UnlockMutex(pMVar1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  lVar9 = *(long *)(param_1 + 0x88);
  if ((lVar9 != 0) && (iVar3 = *(int *)(param_1 + 0x80), iVar3 != 0)) {
    iVar6 = 0;
    do {
      puVar7 = (undefined1 *)(lVar9 + (long)iVar6 * 0x98);
      iVar6 = iVar6 + 1;
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0x3f800000;
      *(undefined8 *)(puVar7 + 0xc) = 0x3f800000;
      *(undefined8 *)(puVar7 + 0x14) = 0x3f80000000000000;
      *(undefined8 *)(puVar7 + 0x2c) = 0;
      *(undefined8 *)(puVar7 + 0x34) = 0;
      *(undefined8 *)(puVar7 + 0x3c) = 0;
      *(undefined8 *)(puVar7 + 0x44) = 0;
      *(undefined8 *)(puVar7 + 0x4c) = 0;
      *(undefined8 *)(puVar7 + 0x54) = 0;
      *(undefined8 *)(puVar7 + 0x5c) = 0;
      *(undefined8 *)(puVar7 + 100) = 0;
      *(undefined8 *)(puVar7 + 0x6c) = 0;
      *(undefined8 *)(puVar7 + 0x74) = 0;
      *(undefined8 *)(puVar7 + 0x7c) = 0;
      *(undefined8 *)(puVar7 + 0x84) = 0;
      *(undefined4 *)(puVar7 + 0x8c) = 0;
      *(undefined8 *)(puVar7 + 0x90) = 0x3f800000;
      *(undefined8 *)(puVar7 + 0x1c) = 0;
      *(undefined8 *)(puVar7 + 0x24) = 0;
    } while (iVar3 != iVar6);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  return;
}

