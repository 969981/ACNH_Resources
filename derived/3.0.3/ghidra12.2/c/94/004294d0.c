
void FUN_004294d0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  if ((undefined8 *)0x1 < param_2) {
    uVar1 = (uint)*param_2;
    if ((uVar1 >> 0x11 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = (uVar1 & 0x1ffff) - (uVar1 >> 1 & 0x5555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar2 = (ulong)param_2 &
              (long)(param_2[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] <<
                    0x2a) >> 0x3f;
    }
    *param_1 = uVar2;
  }
  return;
}

