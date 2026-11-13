
void FUN_014b470c(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined *local_30;
  undefined8 uStack_28;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) == 0) || ((*puVar1 >> 1 & 1) == 0)) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((puVar1[1] & 1) != 0) &&
         (local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000), (*puVar1 & 1) != 0)) {
        uVar2 = FUN_0180da90();
        local_30 = PTR_DAT_04bb2010 + 0x10;
        uStack_28 = 0xffffffffffffffff;
        FUN_014b5ce0(param_1,uVar2,param_2,&local_30);
      }
    }
    else {
      local_30 = PTR_DAT_04bb2010 + 0x10;
      uStack_28 = 0xffffffffffffffff;
      FUN_014b5820(param_1,param_2,&local_30);
    }
  }
  return;
}

