
void FUN_0185a7d4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *__dest;
  char *__dest_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  puVar2 = PTR_DAT_04bbe968;
  __dest = "InsectActionFieldRestless";
  __dest_00 = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x95] = 0;
  param_1[0x93] = (long)FUN_0185aa8c;
  *param_1 = (long)(puVar2 + 0x10);
  if (__dest_00 != "InsectActionFieldRestless") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldRestless",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x96] = (long)&PTR_LAB_049c9f70;
  param_1[0x97] = *param_2;
  param_1[0x98] = param_2[1];
  param_1[0x99] = param_2[2];
  lVar6 = param_2[3];
  *param_1 = (long)&PTR_LAB_049c9c40;
  param_1[0x9d] = -0x8000000000000000;
  param_1[0xa0] = -0x8000000000000000;
  param_1[0x96] = (long)&PTR_LAB_049c9f40;
  puVar2 = PTR_DAT_04bcb470;
  *(undefined4 *)(param_1 + 0x9e) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa1) = 0x7fffffff;
  puVar4 = PTR_DAT_04bbc1a0;
  param_1[0x9c] = (long)(puVar2 + 0x10);
  param_1[0x9f] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb2010;
  param_1[0xa3] = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined2 *)((long)param_1 + 0x4dc) = 0;
  *(undefined1 *)((long)param_1 + 0x4f4) = 0;
  *(undefined1 *)((long)param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0x9a] = lVar6;
  param_1[0xa4] = (long)(puVar2 + 0x10);
  param_1[0xa6] = (long)(puVar2 + 0x10);
  if (__dest != "InsectActionFieldLigia") {
    iVar3 = 0x16;
    if ((int)param_1[0xd] < 0x17) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldLigia",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar1 = param_1 + 0x4f;
  FUN_03ebac90(plVar1,6,5,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2c0;
  puVar5[3] = 1;
  puVar5[4] = 0x2c8;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049c9fa0;
  puVar5[1] = param_1;
  puVar5[6] = 0x2d0;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x2d8;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049c9fa0;
  puVar5[1] = param_1;
  puVar5[4] = 0x2e0;
  puVar5[5] = 1;
  puVar5[6] = 0x2e8;
  puVar5[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,5,&local_50);
  lVar6 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar6);
  *puVar5 = &PTR_LAB_049c9fa0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_0185adc0;
  puVar5[3] = 0;
  puVar5[4] = &LAB_0185ae50;
  puVar5[5] = 0;
  puVar5[6] = &LAB_0185b07c;
  puVar5[7] = 0;
  return;
}

