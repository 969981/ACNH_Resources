
uint FUN_0131ffc0(long param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((*param_2 == *(ushort *)PTR_DAT_04bb3170) ||
     (uVar3 = *param_2 & 0x7f, *(uint *)(param_1 + 8) <= uVar3)) {
    uVar3 = 0xff;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = lVar5 + (ulong)uVar3 * 0x70;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
    iVar2 = *(int *)(lVar4 + 0x2c);
    if (iVar2 < 1) {
      if (DAT_04c487d4 != -1) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 1 & 1) != 0) && (*(long *)(DAT_05231900 + 0x100) != 0)) {
          FUN_015a2a64(*(long *)(DAT_05231900 + 0x100),lVar4,param_2,&DAT_04174e58,0,0,1);
        }
      }
      *(ushort *)(lVar5 + (ulong)uVar3 * 0x70 + 0x28) = *param_2;
      iVar2 = 1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
    *(int *)(lVar4 + 0x2c) = iVar2;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
  }
  return uVar3;
}

