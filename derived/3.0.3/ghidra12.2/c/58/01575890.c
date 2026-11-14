
void FUN_01575890(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 local_74;
  undefined4 local_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  FUN_015727c0(param_1,param_2,param_2 + 0x10,param_3);
  local_68 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049ab880;
  local_38 = 0;
  local_6c = 0;
  local_68 = local_68 + 0x10;
  puStack_60 = &DAT_040deac3;
  puStack_50 = &DAT_040bff16;
  puStack_40 = &DAT_0407ebb1;
  local_74 = 0xbf80000000000000;
  local_58 = local_68;
  local_48 = local_68;
  FUN_006fdfc0(param_1 + 0xb5,&local_68,&local_74,param_1);
  param_1[0xbe] = 0;
  param_1[0xbd] = (long)&DAT_040e8f48;
  param_1[0xbf] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  param_1[0xbc] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbc);
  uVar4 = 0x43480000;
  if ((*(uint *)(param_1 + 0xc0) & 0x800) != 0) {
    uVar4 = 0x405f66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0xbc] + 0xf0))(param_1 + 0xbc);
  *puVar3 = uVar4;
  uVar1 = *(uint *)(param_1 + 0xc0);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0xc1] = 0;
    uVar4 = 0x43480000;
    if ((uVar1 & 0x800) != 0) {
      uVar4 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0xc1) = uVar4;
  }
  param_1[0xc4] = 0;
  *(uint *)(param_1 + 0xc0) = uVar1 & 0xfeffffff;
  param_1[0xc3] = (long)"mFovy";
  *(undefined4 *)(param_1 + 0xc6) = 0x800;
  param_1[0xc5] = 0;
  param_1[0xc2] = (long)(puVar2 + 0x10);
  param_1[199] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc2);
  uVar4 = 0x42340000;
  if ((*(uint *)(param_1 + 0xc6) & 0x800) != 0) {
    uVar4 = 0x3f490fdb;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0xc2] + 0xf0))(param_1 + 0xc2);
  *puVar3 = uVar4;
  uVar1 = *(uint *)(param_1 + 0xc6);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[199] = 0;
    uVar4 = 0x42340000;
    if ((uVar1 & 0x800) != 0) {
      uVar4 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 199) = uVar4;
  }
  *(uint *)(param_1 + 0xc6) = uVar1 & 0xfeffffff;
  return;
}

