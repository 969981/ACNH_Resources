
undefined4 FUN_01f17410(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  ushort local_4;
  undefined1 local_2;
  
  local_25 = 0;
  local_30 = 8;
  local_2c[0] = 0;
  puStack_38 = local_2c;
  local_40 = PTR_DAT_04bb3768 + 0x10;
  uVar2 = FUN_021d62e0(&local_40,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
  if ((uVar2 & 1) == 0) {
    local_4 = (ushort)DAT_053e6f44;
  }
  else {
    local_2 = 8;
    local_4 = 0x23;
    FUN_020fd3a0(&local_4,&local_40);
  }
  if ((local_4 & 0xff) < 0x23) {
    uVar1 = (uint)(byte)(local_4 >> 8);
    uVar2 = (ulong)local_4 & 0xff;
    if (uVar1 <= (byte)PTR_DAT_04bc27f0[uVar2]) {
      uVar3 = 0;
      if ((*(uint *)(PTR_DAT_04bc2a20 + uVar2 * 4) & 1 << (ulong)(uVar1 & 0x1f)) != 0) {
        uVar3 = (undefined4)uVar2;
      }
      return uVar3;
    }
  }
  return 0;
}

