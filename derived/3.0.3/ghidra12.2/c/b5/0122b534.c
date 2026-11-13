
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0122b534(byte *param_1)

{
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  DAT_0514e3c0._0_1_ = *param_1;
  local_18 = 0;
  local_12 = 0;
  ram0x0514e3c1 = 0x80e;
  if (7 < (byte)DAT_0514e3c0) {
    DAT_0514e3c0._0_1_ = 0xff;
  }
  local_14 = 0xff00;
  if (-1 < DAT_0514e398) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0514e398,&local_18,&DAT_0514e3c0,3,0);
  }
  return;
}

