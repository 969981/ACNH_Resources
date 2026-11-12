
void FUN_0085d3e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined4 local_24;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_48 = 8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bb55a0 + 0x10);
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  pcStack_70 = "mCreatePos";
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085f9e4(param_1 + 6,&local_78,param_1);
  local_48 = 8;
  local_24 = 0;
  pcStack_70 = "mTransRatio";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e260(param_1 + 0x39,&local_78,&local_24,param_1);
  local_48 = 8;
  pcStack_70 = "mDirection";
  puStack_60 = &DAT_0407ebb1;
  local_24 = CONCAT31(local_24._1_3_,1);
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e480(param_1 + 0x67,&local_78,&local_24,param_1);
  param_1[0xba] = 0;
  param_1[0xb9] = (long)"mRunDistance";
  param_1[0xbb] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xbc) = 8;
  param_1[0xbd] = 0;
  param_1[0xb8] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb8);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xb8] + 0xf0))(param_1 + 0xb8);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xbc) >> 7 & 1) == 0) {
    param_1[0xbd] = 0;
    *(undefined4 *)(param_1 + 0xbd) = 0;
  }
  param_1[0xc0] = 0;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfeffffff;
  param_1[0xbf] = (long)"mNumGenMinDay";
  param_1[0xc1] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0xc2) = 8;
  puVar1 = puVar2 + 0x10;
  param_1[0xc3] = 0;
  param_1[0xbe] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbe);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xbe] + 0xf0))(param_1 + 0xbe);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xc2) >> 7 & 1) == 0) {
    param_1[0xc3] = 0;
    *(undefined4 *)(param_1 + 0xc3) = 0;
  }
  param_1[0xc6] = 0;
  *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) & 0xfeffffff;
  param_1[0xc5] = (long)"mNumGenMaxDay";
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 8;
  param_1[0xc4] = (long)puVar1;
  param_1[0xc9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc4);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xc4] + 0xf0))(param_1 + 0xc4);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 200) >> 7 & 1) == 0) {
    param_1[0xc9] = 0;
    *(undefined4 *)(param_1 + 0xc9) = 0;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0xcc] = 0;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfeffffff;
  param_1[0xcb] = (long)"mNumGenMinAfternoon";
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 8;
  param_1[0xca] = (long)puVar2;
  param_1[0xcf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xca);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xca] + 0xf0))(param_1 + 0xca);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xce) >> 7 & 1) == 0) {
    param_1[0xcf] = 0;
    *(undefined4 *)(param_1 + 0xcf) = 0;
  }
  param_1[0xd2] = 0;
  *(uint *)(param_1 + 0xce) = *(uint *)(param_1 + 0xce) & 0xfeffffff;
  param_1[0xd1] = (long)"mNumGenMaxAfternoon";
  *(undefined4 *)(param_1 + 0xd4) = 8;
  param_1[0xd3] = 0;
  param_1[0xd0] = (long)puVar2;
  param_1[0xd5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd0);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xd0] + 0xf0))(param_1 + 0xd0);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xd4) >> 7 & 1) == 0) {
    param_1[0xd5] = 0;
    *(undefined4 *)(param_1 + 0xd5) = 0;
  }
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfeffffff;
  return;
}

