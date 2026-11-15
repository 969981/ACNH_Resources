
uint FUN_023492a0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar5 = &DAT_054f08d0;
      if (iVar3 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar5 = &DAT_054f08d0;
    }
  }
  else {
    puVar5 = (uint *)(DAT_054f5738 + 0x200);
  }
  if (((*puVar5 >> 6 & 1) != 0) || (*(char *)(param_1 + 0x5f02) != '\0')) {
    return 0;
  }
  uVar2 = (uint)*(byte *)(DAT_05635578 + 0x231c);
  if (*(byte *)(DAT_05635578 + 0x231c) == 0) {
LAB_023493fc:
    uVar2 = (uint)((*(byte *)(*(long *)PTR_DAT_04bb27a8 + 0x4b04) & 1) == 0) & (uVar2 ^ 0xffffffff);
  }
  else {
    if (DAT_04c487d4 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        pbVar4 = (byte *)FUN_02335d54();
        if (((*pbVar4 < 8) && (uVar2 = FUN_02582d8c(pbVar4,1), uVar2 < 8)) &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) {
          uVar2 = (uint)(*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) !=
                        '\0');
        }
        else {
          uVar2 = 0;
        }
        goto LAB_023493fc;
      }
    }
    uVar2 = 0;
  }
  return uVar2 & (*(byte *)(param_1 + 0xc1f4) & 2) >> 1;
}

