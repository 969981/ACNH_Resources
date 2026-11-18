
ushort FUN_03737f10(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 local_4;
  undefined1 local_2;
  
  local_4 = 0x23;
  local_2 = 8;
  FUN_020fd3a0(&local_4);
  uVar3 = (ulong)(byte)local_4;
  if ((((uVar3 < 0x23) && (local_4._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
      (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(local_4._1_1_ & 0x1f) & 1) != 0)) &&
     (uVar2 = FUN_021d7d60(&local_4), uVar2 != 0xffffffff)) {
    uVar1 = *(ushort *)(param_1 + 0x17210) >> (ulong)(uVar2 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

