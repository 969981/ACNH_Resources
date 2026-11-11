
void FUN_0039cc5c(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((ulong)*(ushort *)(param_1 + 0x2e) != 0xffff) {
    uVar1 = FUN_0039dcf4(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(param_1 + 0x2e) * 0x30,
                         param_3);
    *param_2 = uVar1;
  }
  return;
}

