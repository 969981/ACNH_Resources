
undefined8 FUN_01dfccf0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_1 + 0x109) != '\0')) &&
     (*(long *)(param_1 + 0x2e8) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x618);
    if (0 < (int)uVar1) {
      uVar3 = (ulong)uVar1 & 3;
      if (uVar1 < 4) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5 + 0x18) = 0;
        } while (((ulong)uVar1 & 0xfffffffc) != uVar4);
      }
      if ((uVar1 & 3) != 0) {
        lVar5 = uVar4 << 3;
        do {
          uVar3 = uVar3 - 1;
          *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = 0;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    **(undefined8 **)(param_1 + 0x620) = *param_2;
    *(undefined8 *)(*(long *)(param_1 + 0x620) + (ulong)(1 < *(uint *)(param_1 + 0x618)) * 8) =
         param_2[1];
    *(undefined8 *)(*(long *)(param_1 + 0x620) + (ulong)(2 < *(uint *)(param_1 + 0x618)) * 0x10) =
         param_2[2];
    lVar5 = 0x18;
    if (*(uint *)(param_1 + 0x618) < 4) {
      lVar5 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = param_2[3];
    *(undefined8 *)(*(long *)(param_1 + 0x620) + (ulong)(4 < *(uint *)(param_1 + 0x618)) * 0x20) =
         param_2[4];
    lVar5 = 0x28;
    if (*(uint *)(param_1 + 0x618) < 6) {
      lVar5 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = param_2[5];
    lVar5 = 0x30;
    if (*(uint *)(param_1 + 0x618) < 7) {
      lVar5 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = param_2[6];
    lVar5 = 0x38;
    if (*(uint *)(param_1 + 0x618) < 8) {
      lVar5 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = param_2[7];
    *(undefined8 *)(*(long *)(param_1 + 0x620) + (ulong)(8 < *(uint *)(param_1 + 0x618)) * 0x40) =
         param_2[8];
    lVar5 = 0x48;
    if (*(uint *)(param_1 + 0x618) < 10) {
      lVar5 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x620) + lVar5) = param_2[9];
    *(undefined4 *)(param_1 + 0x2d0) = 0x13;
    nn::os::LockMutex((MutexType *)(param_1 + 0x658));
    FUN_03ebb160(param_1 + 8,2);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x658));
    uVar2 = 1;
  }
  return uVar2;
}

