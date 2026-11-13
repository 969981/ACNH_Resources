
void FUN_014aa360(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 local_84;
  undefined4 local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)(puVar2 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_48 = 0;
  local_84 = 0;
  local_7c = 0;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bbcde0 + 0x10);
  pcStack_70 = "mOffset";
  puStack_60 = &DAT_040d98d2;
  pcStack_50 = "Min = 0.f, Max = 30.f";
  local_68 = local_78;
  local_58 = local_78;
  FUN_006fdfc0(param_1 + 6,&local_78,&local_84,param_1);
  param_1[0x10] = 0;
  param_1[0xe] = (long)"mPower";
  param_1[0xf] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  plVar5 = param_1 + 0xd;
  *plVar5 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  uVar6 = 0x40400000;
  if ((*(uint *)(param_1 + 0x11) & 0x800) != 0) {
    uVar6 = 0x3d567750;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar3 = uVar6;
  uVar1 = *(uint *)(param_1 + 0x11);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x12] = 0;
    uVar6 = 0x40400000;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar6;
  }
  *(uint *)(param_1 + 0x11) = uVar1 & 0xfeffffff;
  return;
}

