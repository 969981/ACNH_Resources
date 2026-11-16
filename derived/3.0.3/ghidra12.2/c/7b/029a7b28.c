
void FUN_029a7b28(long param_1,undefined2 *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0xe8) == 0) {
    pMVar1 = (MutexType *)(param_1 + 0x118);
    nn::os::LockMutex(pMVar1);
    lVar2 = FUN_02999570(param_1 + 0xf0,param_3,param_3,2);
    if (lVar2 == 0) {
      nn::os::UnlockMutex(pMVar1);
LAB_029a7d5c:
      lVar2 = FUN_029996e0(param_1 + 0xf0,2);
      if (lVar2 == 0) goto LAB_029a7b50;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
      nn::os::UnlockMutex(pMVar1);
      if (lVar2 == 0) goto LAB_029a7d5c;
    }
    puVar3 = (undefined2 *)(param_1 + 0x27c0);
    if (*(uint *)(lVar2 + 4) < 0x85) {
      puVar3 = puVar3 + (ulong)*(uint *)(lVar2 + 4) * 0x570;
    }
  }
  else {
LAB_029a7b50:
    puVar3 = (undefined2 *)(param_1 + 0x27c0);
  }
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 2);
  uVar4 = *(undefined8 *)(puVar3 + 4);
  uVar5 = *(undefined8 *)(puVar3 + 0xc);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(param_2 + 0xc) = uVar5;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(puVar3 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar3 + 0x18);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar3 + 0x1a);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar3 + 0x1c);
  *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(puVar3 + 0x1e);
  uVar4 = *(undefined8 *)(puVar3 + 0x22);
  uVar5 = *(undefined8 *)(puVar3 + 0x26);
  uVar6 = *(undefined8 *)(puVar3 + 0x2a);
  *(undefined4 *)(param_2 + 0x2e) = *(undefined4 *)(puVar3 + 0x2e);
  *(undefined8 *)(param_2 + 0x2a) = uVar6;
  *(undefined8 *)(param_2 + 0x26) = uVar5;
  *(undefined8 *)(param_2 + 0x22) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar3 + 0x30);
  *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(puVar3 + 0x32);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(puVar3 + 0x34);
  *(undefined4 *)(param_2 + 0x36) = *(undefined4 *)(puVar3 + 0x36);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(puVar3 + 0x38);
  *(undefined4 *)(param_2 + 0x3a) = *(undefined4 *)(puVar3 + 0x3a);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(puVar3 + 0x3c);
  *(undefined1 *)(param_2 + 0x3e) = *(undefined1 *)(puVar3 + 0x3e);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(puVar3 + 0x40);
  *(undefined4 *)(param_2 + 0x42) = *(undefined4 *)(puVar3 + 0x42);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(puVar3 + 0x44);
  *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(puVar3 + 0x46);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar3 + 0x48);
  if (*(int *)(puVar3 + 0x4c) < 1) {
    if (*(long *)(param_2 + 0x50) != 0) {
      *(undefined4 *)(param_2 + 0x4c) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(puVar3 + 0x54);
    if (0 < *(int *)(puVar3 + 0x4c)) {
      *(int *)(param_2 + 0x4c) = *(int *)(puVar3 + 0x4c);
      *(undefined2 **)(param_2 + 0x50) = param_2 + 0x54;
    }
  }
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(puVar3 + 0x68);
  if (*(int *)(puVar3 + 0x58) < 1) {
    if (*(long *)(param_2 + 0x5c) != 0) {
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x5c) = 0;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x6a) = *(undefined8 *)(puVar3 + 0x6a);
    if (0 < *(int *)(puVar3 + 0x58)) {
      *(int *)(param_2 + 0x58) = *(int *)(puVar3 + 0x58);
      *(undefined2 **)(param_2 + 0x5c) = param_2 + 0x6a;
    }
  }
  if (*(int *)(puVar3 + 0x60) < 1) {
    if (*(long *)(param_2 + 100) != 0) {
      *(undefined4 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 100) = 0;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x6e) = *(undefined8 *)(puVar3 + 0x6e);
    if (0 < *(int *)(puVar3 + 0x60)) {
      *(int *)(param_2 + 0x60) = *(int *)(puVar3 + 0x60);
      *(undefined2 **)(param_2 + 100) = param_2 + 0x6e;
    }
  }
  return;
}

