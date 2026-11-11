
void FUN_0039cca0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_2c [3];
  
  if ((ulong)*(ushort *)(param_1 + 0x2e) != 0xffff) {
    local_2c[0] = 0x7f800000;
    uVar1 = FUN_0039dcf4(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(param_1 + 0x2e) * 0x30,
                         local_2c);
    *param_2 = uVar1;
  }
  return;
}

