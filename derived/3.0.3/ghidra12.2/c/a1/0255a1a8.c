
undefined4 FUN_0255a1a8(uint param_1)

{
  int iVar1;
  undefined4 local_18;
  
  if (((DAT_054f0be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054f0be0), iVar1 != 0)) {
    DAT_054f0b70 = 5;
    DAT_054f0b78 = 0x3a0000003b;
    DAT_054f0b80 = 0x3d0000003f;
    DAT_054f0b88 = 0x3e00000040;
    DAT_054f0b90 = 0x30000007c;
    DAT_054f0b98 = 0x900000043;
    DAT_054f0ba0 = 0x660000000a;
    DAT_054f0ba8 = 0x6f000000c9;
    DAT_054f0bb0 = 0xea000000c1;
    DAT_054f0bb8 = 0xf600000114;
    DAT_054f0bc0 = 0x6f000000fa;
    DAT_054f0bc8 = 0x1900000113;
    DAT_054f0bd0 = 0x11e0000012b;
    DAT_054f0bd8 = 1;
    __cxa_guard_release(&DAT_054f0be0);
  }
  local_18 = 5;
  if (param_1 < 0x1b) {
    local_18 = *(undefined4 *)((long)&DAT_054f0b70 + (long)(int)param_1 * 4);
  }
  return local_18;
}

