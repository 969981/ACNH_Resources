
void FUN_01864d38(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  pcVar6 = (char *)param_1[0xc];
  __dest = "InsectActionFieldFly";
  *(undefined2 *)((long)param_1 + 0x496) = 0;
  if (pcVar6 != "InsectActionFieldFly") {
    iVar3 = 0x14;
    if ((int)param_1[0xd] < 0x15) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(pcVar6,"InsectActionFieldFly",(long)iVar3);
    pcVar6[iVar3] = '\0';
    __dest = (char *)param_1[0xc];
  }
  puVar2 = PTR_DAT_04bbe800;
  pcVar6 = "InsectActionFieldFlyPursue";
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (__dest != "InsectActionFieldFlyPursue") {
    iVar3 = 0x1a;
    if ((int)param_1[0xd] < 0x1b) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectActionFieldFlyPursue",(long)iVar3);
    __dest[iVar3] = '\0';
    pcVar6 = (char *)param_1[0xc];
  }
  param_1[0x95] = (long)&PTR_LAB_049cadf0;
  param_1[0x96] = *param_2;
  param_1[0x97] = param_2[1];
  param_1[0x98] = param_2[2];
  lVar5 = param_2[3];
  *param_1 = (long)&PTR_LAB_049caa58;
  param_1[0x95] = (long)&PTR_LAB_049cad60;
  puVar2 = PTR_DAT_04bcb470;
  param_1[0x9b] = -0x8000000000000000;
  param_1[0x9e] = -0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined1 *)((long)param_1 + 0x4fc) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x9f) = 0x7fffffff;
  param_1[0x99] = lVar5;
  param_1[0x9a] = (long)(puVar2 + 0x10);
  param_1[0x9d] = (long)(puVar2 + 0x10);
  if (pcVar6 != "InsectActionFieldMosquito") {
    iVar3 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar3 = (int)param_1[0xd] + -1;
    }
    memcpy(pcVar6,"InsectActionFieldMosquito",(long)iVar3);
    pcVar6[iVar3] = '\0';
  }
  plVar1 = param_1 + 0x4f;
  FUN_03ebac90(plVar1,7,5,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar4 = (undefined8 *)param_1[0x55];
  puVar4[2] = 0x2c8;
  puVar4[3] = 1;
  puVar4[4] = 0x2d0;
  puVar4[5] = 1;
  *puVar4 = &PTR_LAB_049cae20;
  puVar4[1] = param_1;
  puVar4[6] = 0x2d8;
  puVar4[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar4 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar4[2] = 0x2e0;
  puVar4[3] = 1;
  *puVar4 = &PTR_LAB_049cae20;
  puVar4[1] = param_1;
  puVar4[4] = 0x2e8;
  puVar4[5] = 1;
  puVar4[6] = 0x2f0;
  puVar4[7] = 1;
  pcStack_48 = "State::cToDes";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  puVar4[2] = &LAB_0186505c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_049cae20;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01865078;
  puVar4[5] = 0;
  puVar4[6] = &LAB_018654c8;
  puVar4[7] = 0;
  pcStack_48 = "State::cRotate";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,6,&local_50);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x55] + lVar5);
  *puVar4 = &PTR_LAB_049cae20;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_018654fc;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01865528;
  puVar4[5] = 0;
  puVar4[6] = &LAB_018659b4;
  puVar4[7] = 0;
  return;
}

