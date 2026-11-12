
void FUN_0094bc08(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  short sVar2;
  undefined1 local_24 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    local_8 = 7;
  }
  else {
    local_4 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    local_8 = 7;
    if ((*puVar1 & 2) != 0) {
      local_8 = 5;
    }
  }
  if (param_3 == (undefined4 *)0x0) {
    local_24[0] = 0;
    FUN_00962700(*(undefined8 *)(param_1 + 0x68),param_2,&local_8,1,local_24);
  }
  else {
    *param_3 = local_8;
    local_24[0] = 0;
    FUN_00962700(*(undefined8 *)(param_1 + 0x68),param_2,&local_8,1,local_24);
    *param_3 = local_8;
  }
  return;
}

