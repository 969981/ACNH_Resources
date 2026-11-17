
void FUN_02cb0c14(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  undefined *local_30;
  byte local_28;
  undefined4 local_24;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar1 = FUN_02cb0c90(param_1,param_1,param_2);
  if ((uVar1 & 1) != 0) {
    local_28 = *param_2;
    local_24 = 0xffffffff;
    local_4 = 0;
    if (7 < local_28) {
      local_28 = 0xff;
    }
    local_30 = PTR_DAT_04bc31f0 + 0x10;
    local_8 = 2;
    FUN_02586300(&local_30,&local_8);
  }
  return;
}

