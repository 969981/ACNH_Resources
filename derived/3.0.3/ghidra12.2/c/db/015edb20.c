
void FUN_015edb20(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined *local_40;
  undefined *local_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SpotLightParam";
  local_38 = &DAT_040ca0fe;
  local_78 = puVar1;
  local_40 = puVar1;
  FUN_015727c0(param_1,&local_78,&local_40,0);
  pcStack_70 = "mDir";
  puStack_60 = &DAT_040bff16;
  puStack_50 = &DAT_0407ebb1;
  local_48 = 0;
  local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  *param_1 = (long)(PTR_DAT_04bbd5f8 + 0x10);
  local_40 = (undefined *)0xbf80000000000000;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 0xb5,&local_78,&local_40,param_1);
  param_1[0xbe] = 0;
  param_1[0xbd] = (long)&DAT_040e8f48;
  param_1[0xbf] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  param_1[0xbc] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbc);
  uVar4 = 0x43480000;
  if ((*(uint *)(param_1 + 0xc0) & 0x800) != 0) {
    uVar4 = 0x405f66f3;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0xbc] + 0xf0))(param_1 + 0xbc);
  *puVar3 = uVar4;
  uVar2 = *(uint *)(param_1 + 0xc0);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xc1] = 0;
    uVar4 = 0x43480000;
    if ((uVar2 & 0x800) != 0) {
      uVar4 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0xc1) = uVar4;
  }
  param_1[0xc4] = 0;
  *(uint *)(param_1 + 0xc0) = uVar2 & 0xfeffffff;
  param_1[0xc3] = (long)"mFovy";
  *(undefined4 *)(param_1 + 0xc6) = 0x800;
  param_1[0xc5] = 0;
  param_1[0xc2] = (long)(puVar1 + 0x10);
  param_1[199] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc2);
  uVar4 = 0x42340000;
  if ((*(uint *)(param_1 + 0xc6) & 0x800) != 0) {
    uVar4 = 0x3f490fdb;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0xc2] + 0xf0))(param_1 + 0xc2);
  *puVar3 = uVar4;
  uVar2 = *(uint *)(param_1 + 0xc6);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[199] = 0;
    uVar4 = 0x42340000;
    if ((uVar2 & 0x800) != 0) {
      uVar4 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 199) = uVar4;
  }
  *(uint *)(param_1 + 0xc6) = uVar2 & 0xfeffffff;
  return;
}

