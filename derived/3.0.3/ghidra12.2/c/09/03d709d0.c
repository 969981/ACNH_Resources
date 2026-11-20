
void FUN_03d709d0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined *local_a0;
  undefined8 *puStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined1 local_84;
  undefined1 local_6d;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar3 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar3;
  lVar3 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_68 = PTR_DAT_04bb2020;
  local_38 = 0;
  local_6d = 0;
  local_84 = 0;
  *param_1 = (long)(PTR_DAT_04bc55e8 + 0x10);
  local_68 = local_68 + 0x10;
  puStack_50 = &DAT_0405f5b8;
  pcStack_60 = "mTagName";
  puStack_40 = &DAT_0407ebb1;
  puStack_98 = &local_8c;
  local_90 = 0x20;
  local_8c = 0x676154796d6d7544;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  local_58 = local_68;
  local_48 = local_68;
  FUN_008f0e20(param_1 + 6,&local_68,&local_a0,param_1);
  param_1[0x14] = (long)"mAnimOpeOption";
  param_1[0x15] = 0;
  puVar1 = PTR_DAT_04bc5588;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  plVar4 = param_1 + 0x13;
  *plVar4 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar4);
  puVar2 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x17) >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfeffffff;
  param_1[0x13] = (long)&DAT_04b91238;
  return;
}

