
void FUN_014b3ef0(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      FUN_014b4dd0(param_1,0x32,0xffffffff,10,10);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 & 1) != 0)) {
      iVar2 = FUN_0180da90();
      FUN_014b4dd0(param_1,iVar2 + 0x33,iVar2,3,3);
    }
  }
  return;
}

