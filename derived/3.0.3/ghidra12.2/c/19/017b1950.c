
void FUN_017b1950(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar5 == 0) {
    if ((*(byte *)(param_1 + 0x60) == 0) && ((param_2 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar2 = *(uint *)(lVar5 + 0xee0);
    if (((uint)*(byte *)(param_1 + 0x60) == ((uint)(uVar2 < 4) & 0xbU >> (ulong)(uVar2 & 0xf))) &&
       ((param_2 & 1) == 0)) {
      return;
    }
    *(byte *)(param_1 + 0x60) = uVar2 < 4 & (byte)(0xb >> (ulong)(uVar2 & 0xf));
    if (*(uint *)(lVar5 + 0xee0) < 4 && *(uint *)(lVar5 + 0xee0) != 2) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x28));
      uVar1 = *(uint *)(param_1 + 0x74);
      uVar2 = *(uint *)(param_1 + 0x68) ^ *(uint *)(param_1 + 0x68) << 0xb;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = uVar1;
      *(uint *)(param_1 + 0x74) = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
        lVar6 = (long)*(int *)(param_1 + 0x5c);
        lVar5 = *(long *)(param_1 + 0x50) - lVar6;
        do {
          *(undefined1 *)(lVar5 + 0x18) = 0;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
        } while (lVar5 != (param_1 + 0x48) - lVar6);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
      return;
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  uVar1 = *(uint *)(param_1 + 0x74);
  uVar2 = *(uint *)(param_1 + 0x68) ^ *(uint *)(param_1 + 0x68) << 0xb;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x70);
  uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  *(uint *)(param_1 + 0x70) = uVar1;
  *(uint *)(param_1 + 0x74) = uVar2;
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar6 = (long)*(int *)(param_1 + 0x5c);
    uVar7 = (ulong)*(uint *)(param_1 + 0x58) * (ulong)uVar2 >> 0x20;
    lVar5 = *(long *)(param_1 + 0x50) - lVar6;
    do {
      uVar3 = *(undefined4 *)(param_1 + 100);
      iVar4 = (int)uVar7;
      uVar7 = (ulong)(iVar4 - 1);
      *(bool *)(lVar5 + 0x18) = iVar4 == 0;
      if (iVar4 != 0) {
        uVar3 = 0;
      }
      *(undefined4 *)(lVar5 + 0x1c) = uVar3;
      lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
    } while (lVar5 != (param_1 + 0x48) - lVar6);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  iVar4 = 1;
  if (*(int *)(param_1 + 100) < 4) {
    iVar4 = *(int *)(param_1 + 100) + 1;
  }
  *(int *)(param_1 + 100) = iVar4;
  return;
}

