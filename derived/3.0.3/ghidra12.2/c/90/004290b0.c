
undefined2 FUN_004290b0(long *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)*param_1;
  if ((uVar1 >> 0x11 & 1) == 0) {
    return 0;
  }
  uVar1 = (uVar1 & 0x1ffff) - (uVar1 >> 1 & 0x5555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return *(undefined2 *)
          (*param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12);
}

