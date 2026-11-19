
void FUN_0384b3d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR_DAT_04bb30a0;
  puVar1 = (undefined8 *)FUN_00a8c18c(lVar4);
  uVar5 = *puVar1;
  if (*(short *)(lVar4 + 0x65ad8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = 1;
  *(char *)(param_1 + 9) = (char)((ulong)uVar5 >> 0x10);
  *(char *)(param_1 + 10) = (char)((ulong)uVar5 >> 0x18);
  *(char *)(param_1 + 0xb) = (char)((ulong)uVar5 >> 0x20);
  *(char *)(param_1 + 0xc) = (char)((ulong)uVar5 >> 0x28);
  *(char *)(param_1 + 0xd) = (char)((ulong)uVar5 >> 0x30);
  *(short *)(param_1 + 0xe) = (short)uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  FUN_038430f8(param_1 + 0x960);
  return;
}

