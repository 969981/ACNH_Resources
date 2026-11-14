
void FUN_01908400(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar7;
  plVar8 = param_1 + 5;
  *plVar8 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = (long)(param_1 + 0x58);
  param_1[8] = (long)&PTR_LAB_049d7a78;
  *param_1 = (long)&PTR_FUN_049d7718;
  param_1[9] = (long)"mRangeType";
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar7 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar6 = lVar7;
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (lVar7 != 0);
    plVar8 = (long *)(lVar6 + 0x10);
  }
  *plVar8 = (long)(param_1 + 8);
  param_1[0xb] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[8] + 0xf0))();
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0xc) >> 7 & 1) == 0) {
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  puVar1 = PTR_DAT_04bb2020;
  plVar8 = param_1 + 0xe;
  local_58 = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfeffffff;
  puVar1 = puVar1 + 0x10;
  pcStack_80 = "mPointParamsBuffer";
  puStack_70 = &DAT_040da403;
  pcStack_60 = "";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_019105e4(plVar8,&local_88,param_1);
  local_58 = 0;
  pcStack_80 = "mCircleRangeParamsBuffer";
  puStack_70 = &DAT_04087343;
  pcStack_60 = "";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_01910968(param_1 + 0x1f,&local_88,param_1);
  local_58 = 0;
  pcStack_80 = "mCylinderRangeParamsBuffer";
  puStack_70 = &DAT_0406cf69;
  pcStack_60 = "";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_01910e8c(param_1 + 0x30,&local_88,param_1);
  param_1[0x43] = 0;
  param_1[0x42] = (long)"mIsUseRandomPoint";
  param_1[0x44] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  plVar2 = param_1 + 0x41;
  *(undefined4 *)(param_1 + 0x45) = 8;
  param_1[0x46] = 0;
  param_1[0x41] = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar2);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x41] + 0xf0))(plVar2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x45) >> 7 & 1) == 0) {
    param_1[0x46] = 0;
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  local_58 = 0;
  *(uint *)(param_1 + 0x45) = *(uint *)(param_1 + 0x45) & 0xfeffffff;
  pcStack_80 = "mRandomPointParamsBuffer";
  puStack_70 = &DAT_04062578;
  pcStack_60 = "IsExpand=false";
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_019105e4(param_1 + 0x47,&local_88,param_1);
  param_1[0x58] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_01910740(plVar8,1);
  param_1[0x59] = (long)(param_1 + 0x1f);
  param_1[0x5a] = (long)(param_1 + 0x30);
  lVar7 = (**(code **)(param_1[0x41] + 0xf0))(plVar2);
  param_1[0x5f] = lVar7;
  param_1[0x58] = (long)plVar8;
  param_1[0x60] = (long)(param_1 + 0x47);
  return;
}

