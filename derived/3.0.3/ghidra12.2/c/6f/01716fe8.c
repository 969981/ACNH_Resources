
void FUN_01716fe8(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
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
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049bd748;
  local_38 = 0;
  puVar1 = puVar1 + 0x10;
  pcStack_60 = "mScale";
  puStack_50 = &DAT_040bb2a5;
  pcStack_40 = "Min=0.01f, Max=10.f";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_006fdfc0(param_1 + 6,&local_68,PTR_DAT_04bbe088,param_1);
  local_38 = 0;
  pcStack_60 = "mRotate";
  puStack_50 = &DAT_040ab867;
  pcStack_40 = "Min=0.f, Max=180.f";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_006fdfc0(param_1 + 0xd,&local_68,PTR_DAT_04bbe090,param_1);
  local_38 = 0;
  pcStack_60 = "mTrans";
  puStack_50 = &DAT_040bff0f;
  pcStack_40 = "Min=0.f, Max=90.f";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_006fdfc0(param_1 + 0x14,&local_68,PTR_DAT_04bbe098,param_1);
  param_1[0x1e] = 0;
  param_1[0x1c] = (long)"mEarSetType";
  param_1[0x1d] = 0;
  puVar1 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  plVar4 = param_1 + 0x1b;
  *plVar4 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar4);
  puVar2 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1f) >> 7 & 1) == 0) {
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) & 0xfeffffff;
  return;
}

