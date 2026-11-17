
undefined8 FUN_02ac52d0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_30;
  undefined8 local_28;
  
  iVar2 = FUN_02a6cb24(param_1 + 0x298);
  if (iVar2 == 4) {
    FUN_02b72930(&local_30,*(undefined4 *)(param_1 + 0x2a0));
    uVar3 = FUN_02b72d40(&local_30);
  }
  else if (iVar2 == 1) {
    local_30 = PTR_DAT_04bc4760 + 0x10;
    lVar4 = *(long *)PTR_DAT_04bb5008;
    uVar1 = (uint)*(ushort *)(param_1 + 0x2a8) - (uint)*(ushort *)(lVar4 + 0x5f0);
    if (uVar1 < *(uint *)(lVar4 + 0x5d0)) {
      local_28 = *(undefined8 *)(*(long *)(lVar4 + 0x5d8) + (long)(int)uVar1 * 8);
    }
    else {
      local_28 = 0;
    }
    uVar3 = FUN_02ad1a00(&local_30);
  }
  else if (iVar2 == 0) {
    local_30 = PTR_DAT_04bc4800 + 0x10;
    lVar4 = *(long *)PTR_DAT_04bb5008;
    uVar1 = (uint)*(ushort *)(param_1 + 0x2ac) - (uint)*(ushort *)(lVar4 + 0xdf0);
    if (uVar1 < *(uint *)(lVar4 + 0xdd0)) {
      local_28 = *(undefined8 *)(*(long *)(lVar4 + 0xdd8) + (long)(int)uVar1 * 8);
    }
    else {
      local_28 = 0;
    }
    uVar3 = FUN_02aee190(&local_30);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

