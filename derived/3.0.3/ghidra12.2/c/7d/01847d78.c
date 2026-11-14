
void FUN_01847d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049c8ae8;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar9 = param_2[3];
  *param_1 = &PTR_LAB_049c87d0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0x93] = &PTR_LAB_049c8ab8;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4e5) = 0;
  *(undefined8 *)((long)param_1 + 0x4fd) = 0;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x4d4) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x97] = uVar9;
  param_1[0x9b] = puVar1 + 0x10;
  param_1[0x9e] = puVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0x51e) = 0;
  if (__dest != "InsectActionFieldFlower") {
    iVar3 = 0x17;
    if (*(int *)(param_1 + 0xd) < 0x18) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldFlower",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,9,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar8 = (undefined8 *)param_1[0x55];
  puVar8[2] = 0x2a8;
  puVar8[3] = 1;
  puVar8[4] = 0x2b0;
  puVar8[5] = 1;
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar8[6] = 0x2b8;
  puVar8[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar8 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar8[2] = 0x2c0;
  puVar8[3] = 1;
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar8[4] = 0x2c8;
  puVar8[5] = 1;
  puVar8[6] = 0x2d0;
  puVar8[7] = 1;
  pcStack_48 = "State::cDropWater";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,2,&local_50);
  puVar5 = PTR_LAB_04bbe580;
  puVar8 = (undefined8 *)(param_1[0x55] + (ulong)(2 < *(uint *)(param_1 + 0x54)) * 0x80);
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar7 = PTR_LAB_04bbe590;
  puVar6 = PTR_LAB_04bbe588;
  puVar8[2] = puVar5;
  puVar8[3] = 0;
  puVar8[4] = puVar6;
  puVar8[5] = 0;
  puVar8[6] = puVar7;
  puVar8[7] = 0;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar8[2] = FUN_01848110;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar8[4] = FUN_018484a0;
  puVar8[5] = 0;
  puVar8[6] = &LAB_01848f8c;
  puVar8[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar8[2] = &LAB_01848f98;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01849204;
  puVar8[5] = 0;
  puVar8[6] = &LAB_01849534;
  puVar8[7] = 0;
  pcStack_48 = "State::cThreaten";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar8[2] = &LAB_01849540;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_049c8b18;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_018496ac;
  puVar8[5] = 0;
  puVar8[6] = &LAB_01849bf4;
  puVar8[7] = 0;
  pcStack_48 = "State::cReturn";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,8,&local_50);
  puVar2 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar2 = &PTR_LAB_049c8b18;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01849c00;
  puVar2[3] = 0;
  puVar2[6] = &LAB_01849d60;
  puVar2[7] = 0;
  puVar2[4] = &LAB_01849cd0;
  puVar2[5] = 0;
  return;
}

