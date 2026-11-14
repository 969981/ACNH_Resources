
void FUN_018837b4(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *__dest;
  char *__dest_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  puVar4 = PTR_DAT_04bbe968;
  puVar1 = PTR_FUN_04bbe8f8;
  __dest = "InsectActionFieldRestless";
  __dest_00 = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x95] = 0;
  param_1[0x93] = (long)puVar1;
  *param_1 = (long)(puVar4 + 0x10);
  if (__dest_00 != "InsectActionFieldRestless") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldRestless",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x96] = (long)&PTR_LAB_049cd760;
  param_1[0x97] = *param_2;
  param_1[0x98] = param_2[1];
  param_1[0x99] = param_2[2];
  lVar6 = param_2[3];
  *param_1 = (long)&PTR_LAB_049cd3d0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0;
  param_1[0x96] = (long)&PTR_LAB_049cd6d0;
  *(undefined2 *)(param_1 + 0x9b) = 0x100;
  *(undefined8 *)((long)param_1 + 0x4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x4f5) = 0;
  *(undefined8 *)((long)param_1 + 0x50d) = 0;
  *(undefined8 *)((long)param_1 + 0x525) = 0;
  param_1[0xa8] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xa9) = 0x7fffffff;
  puVar1 = PTR_DAT_04bcb470;
  param_1[0x9a] = lVar6;
  *(undefined4 *)((long)param_1 + 0x4e4) = 0;
  param_1[0xa6] = 0;
  *(undefined1 *)((long)param_1 + 0x54c) = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x9d] = (long)puVar1;
  param_1[0xa0] = (long)puVar1;
  param_1[0xa3] = (long)puVar1;
  param_1[0xa7] = (long)puVar1;
  if (__dest != "InsectActionFieldTigerBeetle") {
    iVar3 = 0x1c;
    if ((int)param_1[0xd] < 0x1d) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldTigerBeetle",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar2 = param_1 + 0x4f;
  FUN_03ebac90(plVar2,9,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2c0;
  puVar5[3] = 1;
  puVar5[4] = 0x2c8;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[6] = 0x2d0;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x2d8;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[4] = 0x2e0;
  puVar5[5] = 1;
  puVar5[6] = 0x2e8;
  puVar5[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,5,&local_50);
  lVar6 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar6);
  puVar5[2] = FUN_01883b8c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01883c88;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01883ee0;
  puVar5[7] = 0;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,6,&local_50);
  lVar6 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar6);
  puVar5[2] = &LAB_01883ee8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01884008;
  puVar5[5] = 0;
  puVar5[6] = &LAB_018845c4;
  puVar5[7] = 0;
  pcStack_48 = "State::cJumpEscape";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,7,&local_50);
  lVar6 = 0x1c0;
  if (*(uint *)(param_1 + 0x54) < 8) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar6);
  puVar5[2] = &LAB_018845d0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01884760;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01884a60;
  puVar5[7] = 0;
  pcStack_48 = "State::cConfuse";
  local_50 = puVar1;
  FUN_03ebaf40(plVar2,8,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(8 < *(uint *)(param_1 + 0x54)) * 0x200);
  *puVar5 = &PTR_LAB_049cd790;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_01884a6c;
  puVar5[3] = 0;
  puVar5[4] = &LAB_01884b20;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01884cd0;
  puVar5[7] = 0;
  *(undefined1 *)((long)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0xf;
  param_1[0xa8] = 0;
  return;
}

