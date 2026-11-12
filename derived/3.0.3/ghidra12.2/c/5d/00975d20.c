
uint FUN_00975d20(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *local_48;
  undefined *puStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_48 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = *(undefined4 *)(param_1 + 8);
  uStack_34 = *(undefined4 *)(param_1 + 0xc);
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
    uVar1 = 0;
    if (lVar2 != 0) {
      local_30 = puStack_40;
      local_28 = local_38;
      uStack_24 = uStack_34;
      uVar3 = FUN_00971f80(lVar2,&local_48,0);
      uVar1 = 0;
      if ((uVar3 & 1) != 0) {
        uVar1 = FUN_00975dc0(param_1);
      }
    }
  }
  return uVar1 & 1;
}

