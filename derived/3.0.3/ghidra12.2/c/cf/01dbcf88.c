
void FUN_01dbcf88(long param_1)

{
  MutexType *pMVar1;
  uint *puVar2;
  short sVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x1fc) = 1;
  lVar10 = *DAT_0537d558;
  pMVar1 = (MutexType *)(lVar10 + 0x4d8);
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(lVar10 + 0x4f9) = 0;
  nn::os::UnlockMutex(pMVar1);
  puVar6 = PTR_DAT_04bb49f0;
  *(bool *)(*(long *)PTR_DAT_04bc1038 + 0x51) = *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x526b4f86;
  if (**(long **)(*(long *)puVar6 + 8) == 0 && (*(long **)(*(long *)puVar6 + 8))[1] == 0) {
    return;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_01dbd15c:
    if (1 < *(uint *)(param_1 + 0x80)) {
      return;
    }
    lVar10 = *(long *)PTR_DAT_04bb8930;
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = 0;
    if (*(uint *)(lVar10 + 0x18) != 0xffffffff) {
      uVar8 = *(uint *)(lVar10 + 0x18);
    }
    if (*(uint *)(lVar10 + 8) <= uVar8) {
      uVar8 = 0;
    }
    pbVar9 = (byte *)(lVar7 + (long)(int)uVar8 * 0x58 + 0x10);
    bVar4 = *pbVar9;
    if ((bVar4 & 5) == 0) {
      return;
    }
    *pbVar9 = bVar4 & 0xc1;
    if (bVar4 == (bVar4 & 0xc1)) {
      return;
    }
    lVar7 = lVar7 + (long)(int)uVar8 * 0x58;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x17 & 1) == 0) goto LAB_01dbd15c;
      lVar10 = *(long *)PTR_DAT_04bb8930;
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = 0;
      if (*(uint *)(lVar10 + 0x18) != 0xffffffff) {
        uVar8 = *(uint *)(lVar10 + 0x18);
      }
      if (*(uint *)(lVar10 + 8) <= uVar8) {
        uVar8 = 0;
      }
      lVar10 = lVar7 + (long)(int)uVar8 * 0x58;
      bVar4 = *(byte *)(lVar10 + 0x10);
      bVar5 = bVar4 | 0x20;
      *(byte *)(lVar10 + 0x10) = bVar5;
      if (bVar4 == bVar5 && *(char *)(lVar10 + 0x12) == '\x01') {
        return;
      }
      *(char *)(lVar10 + 0x12) = '\x01';
    }
    else {
      lVar10 = *(long *)PTR_DAT_04bb8930;
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = 0;
      if (*(uint *)(lVar10 + 0x18) != 0xffffffff) {
        uVar8 = *(uint *)(lVar10 + 0x18);
      }
      if (*(uint *)(lVar10 + 8) <= uVar8) {
        uVar8 = 0;
      }
      lVar10 = lVar7 + (long)(int)uVar8 * 0x58;
      bVar4 = *(byte *)(lVar10 + 0x10);
      bVar5 = bVar4 | 0x20;
      *(byte *)(lVar10 + 0x10) = bVar5;
      if (bVar4 == bVar5 && *(char *)(lVar10 + 0x12) == '\0') {
        return;
      }
      *(char *)(lVar10 + 0x12) = '\0';
    }
    lVar7 = lVar7 + (long)(int)uVar8 * 0x58;
  }
  *(undefined4 *)(lVar7 + 0x50) = 0x1e;
  return;
}

