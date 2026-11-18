
void FUN_03737e5c(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined2 local_24;
  undefined1 local_22;
  
  local_24 = 0x23;
  local_22 = 8;
  FUN_020fd3a0(&local_24);
  uVar2 = (ulong)(byte)local_24;
  if ((((uVar2 < 0x23) && (local_24._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar2])) &&
      (((uint)(&DAT_053e6eb8)[uVar2] >> (ulong)(local_24._1_1_ & 0x1f) & 1) != 0)) &&
     (uVar1 = FUN_021d7d60(&local_24), uVar1 != 0xffffffff)) {
    *(ushort *)(param_1 + 0x17210) =
         *(ushort *)(param_1 + 0x17210) | (ushort)(1 << (ulong)(uVar1 & 0x1f));
    FUN_037289d0(param_1,param_2,0);
  }
  return;
}

