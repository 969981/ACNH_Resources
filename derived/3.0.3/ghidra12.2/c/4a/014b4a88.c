
void FUN_014b4a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      FUN_014b5820(param_1,param_2,param_3);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 & 1) != 0)) {
      uVar2 = FUN_0180da90();
      FUN_014b5ce0(param_1,uVar2,param_2,param_3);
      return;
    }
  }
  return;
}

