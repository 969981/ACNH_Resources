
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0122b490(byte *param_1,ushort param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  DAT_0514e3c0._0_1_ = *param_1;
  bVar1 = (param_3 & 1) == 0;
  register0x00004048 = 0x700;
  if (bVar1) {
    register0x00004040 = 0x500;
  }
  local_18 = 0;
  local_12 = 0;
  uVar2 = 0x300;
  if (bVar1) {
    uVar2 = 0x100;
  }
  if ((param_4 & 1) == 0) {
    unique0x10000051 = uVar2;
  }
  unique0x00075000 = unique0x0003b300 | param_2 & 0xff;
  if (7 < (byte)DAT_0514e3c0) {
    DAT_0514e3c0._0_1_ = 0xff;
  }
  local_14 = 0xff00;
  if (-1 < DAT_0514e398) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0514e398,&local_18,&DAT_0514e3c0,3,0);
  }
  return;
}

