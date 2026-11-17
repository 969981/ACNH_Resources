
void FUN_02cb10b8(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  undefined **local_30;
  byte local_28;
  undefined4 local_24;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar1 = FUN_02cb0c90(param_1,param_1,param_2);
  if ((uVar1 & 1) != 0) {
    local_28 = *param_2;
    local_24 = 0xffffffff;
    if (7 < local_28) {
      local_28 = 0xff;
    }
    local_30 = &PTR_FUN_04a851e0;
    local_8 = 2;
    local_4 = 1;
    FUN_02586300(&local_30,&local_8);
  }
  return;
}

