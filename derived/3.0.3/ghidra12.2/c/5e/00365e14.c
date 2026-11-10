
void FUN_00365e14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((DAT_04c62f10 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c62f10);
    if (iVar1 != 0) {
      DAT_04c62f20 = 0x401;
      DAT_04c62f23 = 0;
      DAT_04c62f22 = 5;
      DAT_04c62f27 = 0;
      DAT_04c62f28 = 0x1040300010401;
      DAT_04c62f30 = 0x5040100080001;
      __cxa_guard_release(&DAT_04c62f10);
    }
  }
  if ((DAT_04c62f18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c62f18);
    if (iVar1 != 0) {
      DAT_04c62f3b = 0;
      DAT_04c62f38 = 0x401;
      DAT_04c62f3a = 5;
      DAT_04c62f3f = 0;
      DAT_04c62f40 = 0x1040300010401;
      DAT_04c62f48 = 0x1010500080001;
      __cxa_guard_release(&DAT_04c62f18);
    }
  }
  *param_1 = &DAT_04c62f20;
  *param_2 = &DAT_04c62f38;
  return;
}

