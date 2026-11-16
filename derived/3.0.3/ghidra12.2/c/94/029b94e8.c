
int FUN_029b94e8(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (0x4a < uVar1) {
    if (4 < param_1 - 0x4dU) {
      uVar1 = param_1 - 0x10c;
      if (0x68 < uVar1) {
        uVar1 = 0xffffffff;
        if (param_1 - 0x52U < 0xb9) {
          uVar1 = (param_1 - 2U) + ((param_1 - 2U & 0xffff) / 5) * -5 & 0xffff;
        }
        return uVar1 + 1;
      }
      uVar1 = (uVar1 & 0xff) + ((uVar1 & 0xff) / 0x15) * -0x15;
      if (uVar1 == 0x14) {
        return 0;
      }
      return uVar1 % 5 + 1;
    }
    uVar1 = param_1 - 2;
  }
  return (uVar1 + ((uVar1 & 0xff) / 5) * -5 & 0xff) + 1;
}

