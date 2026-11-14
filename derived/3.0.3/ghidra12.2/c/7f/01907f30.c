
void FUN_01907f30(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  
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
  param_1[7] = (long)(param_1 + 0x9c);
  param_1[8] = (long)&PTR_LAB_049d78a0;
  *param_1 = (long)&PTR_FUN_049d7590;
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
  local_68 = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfeffffff;
  puVar1 = puVar1 + 0x10;
  pcStack_90 = "mPointParamsBuffer";
  puStack_80 = &DAT_040da403;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_019105e4(plVar8,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mCircleRangeParamsBuffer";
  puStack_80 = &DAT_04087343;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01910968(param_1 + 0x1f,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mCylinderRangeParamsBuffer";
  puStack_80 = &DAT_0406cf69;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01910e8c(param_1 + 0x30,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mRectangleRangeParamsBuffer";
  puStack_80 = &DAT_040fefd2;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01911534(param_1 + 0x41,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mAABBRangeParamsBuffer";
  puStack_80 = &DAT_0409bfc0;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01911c70(param_1 + 0x52,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mTreeParamsBuffer";
  puStack_80 = &DAT_040feff1;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_019123f0(param_1 + 99,&local_98,param_1);
  local_68 = 0;
  pcStack_90 = "mPalmParamsBuffer";
  puStack_80 = &DAT_040f9c63;
  pcStack_70 = "";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_01913908(param_1 + 0x74,&local_98,param_1);
  param_1[0x87] = 0;
  param_1[0x86] = (long)"mIsUseRandomPoint";
  param_1[0x88] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  plVar2 = param_1 + 0x85;
  *(undefined4 *)(param_1 + 0x89) = 8;
  param_1[0x8a] = 0;
  param_1[0x85] = (long)(puVar3 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar2);
  puVar5 = (undefined1 *)(**(code **)(param_1[0x85] + 0xf0))(plVar2);
  *puVar5 = 0;
  if ((*(uint *)(param_1 + 0x89) >> 7 & 1) == 0) {
    param_1[0x8a] = 0;
    *(undefined1 *)(param_1 + 0x8a) = 0;
  }
  local_68 = 0;
  *(uint *)(param_1 + 0x89) = *(uint *)(param_1 + 0x89) & 0xfeffffff;
  pcStack_90 = "mRandomPointParamsBuffer";
  puStack_80 = &DAT_04062578;
  pcStack_70 = "IsExpand=false";
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_019105e4(param_1 + 0x8b,&local_98,param_1);
  param_1[0x9c] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  FUN_01910740(plVar8,1);
  param_1[0x9f] = (long)(param_1 + 0x41);
  param_1[0xa0] = (long)(param_1 + 0x52);
  param_1[0xa1] = (long)(param_1 + 99);
  param_1[0xa2] = (long)(param_1 + 0x74);
  param_1[0x9d] = (long)(param_1 + 0x1f);
  param_1[0x9e] = (long)(param_1 + 0x30);
  lVar7 = (**(code **)(param_1[0x85] + 0xf0))(plVar2);
  param_1[0xa3] = lVar7;
  param_1[0x9c] = (long)plVar8;
  param_1[0xa4] = (long)(param_1 + 0x8b);
  return;
}

