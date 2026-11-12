
void FUN_0085d078(long *param_1,long *param_2,long *param_3)

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
  *param_1 = (long)(PTR_DAT_04bb5588 + 0x10);
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  pcStack_70 = "mCreatePos";
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085ea20(param_1 + 6,&local_78,param_1);
  local_48 = 8;
  local_24 = 0;
  pcStack_70 = "mTransRatio";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e260(param_1 + 0x59,&local_78,&local_24,param_1);
  local_48 = 8;
  pcStack_70 = "mDirection";
  puStack_60 = &DAT_0407ebb1;
  local_24 = CONCAT31(local_24._1_3_,1);
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e480(param_1 + 0x87,&local_78,&local_24,param_1);
  param_1[0xda] = 0;
  param_1[0xd9] = (long)"mRunDistance";
  param_1[0xdb] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xdc) = 8;
  param_1[0xdd] = 0;
  param_1[0xd8] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xdc) >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    *(undefined4 *)(param_1 + 0xdd) = 0;
  }
  param_1[0xe0] = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xfeffffff;
  param_1[0xdf] = (long)"mNumGenMinDay";
  param_1[0xe1] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0xe2) = 8;
  puVar1 = puVar2 + 0x10;
  param_1[0xe3] = 0;
  param_1[0xde] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xde);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xde] + 0xf0))(param_1 + 0xde);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xe2) >> 7 & 1) == 0) {
    param_1[0xe3] = 0;
    *(undefined4 *)(param_1 + 0xe3) = 0;
  }
  param_1[0xe6] = 0;
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfeffffff;
  param_1[0xe5] = (long)"mNumGenMaxDay";
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 8;
  param_1[0xe4] = (long)puVar1;
  param_1[0xe9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe4);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xe4] + 0xf0))(param_1 + 0xe4);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xe8) >> 7 & 1) == 0) {
    param_1[0xe9] = 0;
    *(undefined4 *)(param_1 + 0xe9) = 0;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0xec] = 0;
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfeffffff;
  param_1[0xeb] = (long)"mNumGenMinAfternoon";
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 8;
  param_1[0xea] = (long)puVar2;
  param_1[0xef] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xea);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xea] + 0xf0))(param_1 + 0xea);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xee) >> 7 & 1) == 0) {
    param_1[0xef] = 0;
    *(undefined4 *)(param_1 + 0xef) = 0;
  }
  param_1[0xf2] = 0;
  *(uint *)(param_1 + 0xee) = *(uint *)(param_1 + 0xee) & 0xfeffffff;
  param_1[0xf1] = (long)"mNumGenMaxAfternoon";
  *(undefined4 *)(param_1 + 0xf4) = 8;
  param_1[0xf3] = 0;
  param_1[0xf0] = (long)puVar2;
  param_1[0xf5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf0);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xf0] + 0xf0))(param_1 + 0xf0);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xf4) >> 7 & 1) == 0) {
    param_1[0xf5] = 0;
    *(undefined4 *)(param_1 + 0xf5) = 0;
  }
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfeffffff;
  return;
}

