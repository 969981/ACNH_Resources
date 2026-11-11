
undefined8 FUN_004285f0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  while ((uVar1 >> 0x17 & 1) == 0) {
    param_1 = (undefined8 *)param_1[1];
    uVar1 = (uint)*param_1;
  }
  uVar1 = (uVar1 & 0x7fffff) - (uVar1 >> 1 & 0x155555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return *(undefined8 *)
          (param_1[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] +
           (long)param_2 * 8 + 8);
}

