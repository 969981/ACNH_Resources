
void FUN_02cb1134(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *local_30;
  byte local_28;
  undefined4 local_24;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar1 = FUN_02cb0ed0(param_1,param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) != 0) {
    local_28 = *param_2;
    local_24 = 0xffffffff;
    if (7 < local_28) {
      local_28 = 0xff;
    }
    local_30 = PTR_DAT_04bc31f0 + 0x10;
    local_8 = 1;
    local_4 = 1;
    FUN_02586300(&local_30,&local_8);
  }
  return;
}

