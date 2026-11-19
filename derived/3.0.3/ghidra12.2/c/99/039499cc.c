
undefined8 FUN_039499cc(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xac0));
  if ((*(byte *)(param_1 + 9) >> 4 & 1) == 0) {
    puVar6 = *(uint **)(param_2 + 0xd0);
    uVar4 = 1;
    bVar1 = *(byte *)(param_2 + 0x10a);
    lVar3 = *(long *)(param_2 + 0xa0);
  }
  else {
    lVar3 = *(long *)(param_2 + 0xa0);
    if (*(long *)(lVar3 + 0x58) != 0) {
      uVar2 = *(ushort *)(param_1 + 0xb20);
      *(ushort *)(param_1 + 0xb20) = uVar2 + 1;
      uVar5 = (uint)uVar2;
      if (*(uint *)(param_1 + 0xb10) < (uint)uVar2 || *(uint *)(param_1 + 0xb10) == uVar5) {
        uVar5 = 0;
      }
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xb18) + (ulong)uVar5 * 0x18);
      *puVar7 = *(undefined4 *)(lVar3 + 0x50);
      puVar7[1] = *(undefined4 *)(lVar3 + 0x54);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(lVar3 + 0x58);
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar3 + 0x60);
      lVar3 = *(long *)(param_2 + 0xa0);
    }
    puVar6 = *(uint **)(param_2 + 0xd0);
    uVar4 = 0;
    bVar1 = *(byte *)(param_2 + 0x10a);
  }
  uVar5 = (uint)bVar1;
  if (*puVar6 <= (uint)bVar1) {
    uVar5 = 0;
  }
  FUN_03967810(*(long *)(puVar6 + 2) + (ulong)uVar5 * 0xe0,lVar3,uVar4);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xa80));
  *(byte *)(param_2 + 0x111) = *(byte *)(param_2 + 0x111) & 0xfe;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa80));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xac0));
  return 1;
}

