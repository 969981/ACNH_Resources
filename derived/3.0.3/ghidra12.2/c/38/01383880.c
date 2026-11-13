
undefined8 FUN_01383880(int param_1)

{
  int iVar1;
  
  if (((DAT_051a5e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051a5e88), iVar1 != 0)) {
    DAT_051a5e48 = 8;
    DAT_051a5e44 = 2;
    DAT_051a5e50 = 0xe;
    DAT_051a5e4c = 8;
    DAT_051a5e58 = 0x14;
    DAT_051a5e54 = 0xe;
    DAT_051a5e60 = 0x1a;
    DAT_051a5e5c = 0x14;
    DAT_051a5e68 = 0x20;
    DAT_051a5e64 = 0x1a;
    DAT_051a5e70 = 0x26;
    DAT_051a5e6c = 0x20;
    DAT_051a5e78 = 0x2c;
    DAT_051a5e74 = 0x26;
    DAT_051a5e80 = 0x32;
    DAT_051a5e7c = 0x2c;
    __cxa_guard_release(&DAT_051a5e88);
  }
  return *(undefined8 *)(&DAT_051a5e44 + (long)param_1 * 2);
}

