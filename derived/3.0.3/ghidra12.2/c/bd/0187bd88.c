
void FUN_0187bd88(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049ccca0;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar5 = param_2[3];
  *param_1 = &PTR_LAB_049cc988;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  param_1[0x93] = &PTR_LAB_049ccc70;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  param_1[0x9b] = 0x8000000000000000;
  param_1[0x97] = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = 0x7fffffff;
  param_1[0x9a] = puVar1 + 0x10;
  if (__dest != "InsectActionFieldStump") {
    iVar3 = 0x16;
    if (*(int *)(param_1 + 0xd) < 0x17) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldStump",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,7,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar6 = (undefined8 *)param_1[0x55];
  puVar6[2] = 0x2a8;
  puVar6[3] = 1;
  puVar6[4] = 0x2b0;
  puVar6[5] = 1;
  *puVar6 = &PTR_LAB_049cccd0;
  puVar6[1] = param_1;
  puVar6[6] = 0x2b8;
  puVar6[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar6 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar6[2] = 0x2c0;
  puVar6[3] = 1;
  *puVar6 = &PTR_LAB_049cccd0;
  puVar6[1] = param_1;
  puVar6[4] = 0x2c8;
  puVar6[5] = 1;
  puVar6[6] = 0x2d0;
  puVar6[7] = 1;
  pcStack_48 = "State::cMove";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar6 = (undefined8 *)(param_1[0x55] + lVar4);
  puVar6[2] = FUN_0187bffc;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_049cccd0;
  puVar6[1] = param_1;
  puVar6[4] = FUN_0187c2a4;
  puVar6[5] = 0;
  puVar6[6] = &LAB_0187c53c;
  puVar6[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049cccd0;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_0187c540;
  puVar2[3] = 0;
  puVar2[4] = &LAB_0187c658;
  puVar2[5] = 0;
  puVar2[6] = &LAB_0187c89c;
  puVar2[7] = 0;
  return;
}

