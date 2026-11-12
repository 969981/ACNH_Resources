
void FUN_0085dee4(long *param_1,long *param_2,long *param_3)

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
  *param_1 = (long)(PTR_DAT_04bb55b8 + 0x10);
  puStack_60 = &DAT_0407ebb1;
  pcStack_70 = "mCreatePos";
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_008407c4(param_1 + 6,&local_78,PTR_DAT_04bb2150,param_1);
  local_48 = 8;
  local_24 = 0;
  pcStack_70 = "mTransRatio";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e260(param_1 + 0x29,&local_78,&local_24,param_1);
  local_48 = 8;
  pcStack_70 = "mDirection";
  puStack_60 = &DAT_0407ebb1;
  local_24 = CONCAT31(local_24._1_3_,1);
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_0085e480(param_1 + 0x57,&local_78,&local_24,param_1);
  param_1[0xaa] = 0;
  param_1[0xa9] = (long)"mRunDistance";
  param_1[0xab] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0xac) = 8;
  param_1[0xad] = 0;
  param_1[0xa8] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa8);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xa8] + 0xf0))(param_1 + 0xa8);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xac) >> 7 & 1) == 0) {
    param_1[0xad] = 0;
    *(undefined4 *)(param_1 + 0xad) = 0;
  }
  param_1[0xb0] = 0;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfeffffff;
  param_1[0xaf] = (long)"mNumGenMinDay";
  param_1[0xb1] = 0;
  puVar2 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0xb2) = 8;
  puVar1 = puVar2 + 0x10;
  param_1[0xb3] = 0;
  param_1[0xae] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xae);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xae] + 0xf0))(param_1 + 0xae);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xb2) >> 7 & 1) == 0) {
    param_1[0xb3] = 0;
    *(undefined4 *)(param_1 + 0xb3) = 0;
  }
  param_1[0xb6] = 0;
  *(uint *)(param_1 + 0xb2) = *(uint *)(param_1 + 0xb2) & 0xfeffffff;
  param_1[0xb5] = (long)"mNumGenMaxDay";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 8;
  param_1[0xb4] = (long)puVar1;
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xb8) >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    *(undefined4 *)(param_1 + 0xb9) = 0;
  }
  puVar2 = puVar2 + 0x10;
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfeffffff;
  param_1[0xbb] = (long)"mNumGenMinAfternoon";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 8;
  param_1[0xba] = (long)puVar2;
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xbe) >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    *(undefined4 *)(param_1 + 0xbf) = 0;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = *(uint *)(param_1 + 0xbe) & 0xfeffffff;
  param_1[0xc1] = (long)"mNumGenMaxAfternoon";
  *(undefined4 *)(param_1 + 0xc4) = 8;
  param_1[0xc3] = 0;
  param_1[0xc0] = (long)puVar2;
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  puVar3 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0xc4) >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    *(undefined4 *)(param_1 + 0xc5) = 0;
  }
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfeffffff;
  return;
}

