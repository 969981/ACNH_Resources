
void FUN_017181a0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar5;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[9] = 0;
  *param_1 = (long)&PTR_FUN_049bdbb8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"mScale";
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  uVar7 = 0x3f800000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar7 = 0x3c8efa35;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar7 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar7;
  }
  puVar1 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 10) = uVar2 & 0xfeffffff;
  local_48 = 0;
  puVar1 = puVar1 + 0x10;
  pcStack_70 = "mRotate";
  puStack_60 = &DAT_040ab867;
  pcStack_50 = "Min=0.f, Max=180.f";
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 0xc,&local_78,PTR_DAT_04bbe0a0,param_1);
  local_48 = 0;
  pcStack_70 = "mTrans";
  puStack_60 = &DAT_040bff0f;
  pcStack_50 = "Min=0.f, Max=90.f";
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 0x13,&local_78,PTR_DAT_04bbe0a8,param_1);
  return;
}

