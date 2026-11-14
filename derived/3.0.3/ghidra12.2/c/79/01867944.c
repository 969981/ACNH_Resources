
void FUN_01867944(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *__dest;
  char *__dest_00;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  puVar2 = PTR_DAT_04bbe7f8;
  __dest = "InsectActionFieldFly";
  __dest_00 = (char *)param_1[0xc];
  *(undefined2 *)((long)param_1 + 0x496) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (__dest_00 != "InsectActionFieldFly") {
    iVar3 = 0x14;
    if ((int)param_1[0xd] < 0x15) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"InsectActionFieldFly",(long)iVar3);
    __dest_00[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  param_1[0x93] = (long)&PTR_LAB_049cb168;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  lVar5 = param_2[3];
  *param_1 = (long)&PTR_LAB_049cae48;
  param_1[0x99] = -0x8000000000000000;
  param_1[0x93] = (long)&PTR_LAB_049cb138;
  puVar2 = PTR_DAT_04bcb470;
  *(undefined4 *)(param_1 + 0x9a) = 0x7fffffff;
  param_1[0x98] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bb2010;
  *(undefined1 *)((long)param_1 + 0x4d4) = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x97] = lVar5;
  param_1[0x9c] = (long)(puVar2 + 0x10);
  if (__dest != "InsectActionFieldMoth") {
    iVar3 = 0x15;
    if ((int)param_1[0xd] < 0x16) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldMoth",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  plVar1 = param_1 + 0x4f;
  FUN_03ebac90(plVar1,6,5,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2b0;
  puVar4[3] = 1;
  puVar4[4] = 0x2b8;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049cb198;
  puVar4[1] = param_1;
  puVar4[6] = 0x2c0;
  puVar4[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[2] = 0x2c8;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_049cb198;
  puVar4[1] = param_1;
  puVar4[4] = 0x2d0;
  puVar4[5] = 1;
  puVar4[6] = 0x2d8;
  puVar4[7] = 1;
  pcStack_48 = "State::cToDes";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  *puVar4 = &PTR_LAB_049cb198;
  puVar4[1] = param_1;
  puVar4[2] = FUN_01867bbc;
  puVar4[3] = 0;
  puVar4[4] = FUN_01867c78;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01868140;
  puVar4[7] = 0;
  return;
}

