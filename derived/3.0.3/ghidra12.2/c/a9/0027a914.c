
void FUN_0027a914(long param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  
  if ((param_2 & 0xff) < (uint)*(ushort *)(*(long *)PTR_DAT_04bcd350 + 0x98)) {
    uVar1 = 1;
    if ((param_3 & 1) != 0) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + (ulong)(param_2 & 0xff) + 0xf0) = uVar1;
  }
  return;
}

