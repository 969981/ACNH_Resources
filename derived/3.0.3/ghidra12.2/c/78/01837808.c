
void FUN_01837808(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *__dest;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049c74a8;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar6 = param_2[3];
  *param_1 = &PTR_LAB_049c7190;
  param_1[0x93] = &PTR_LAB_049c7478;
  *(undefined4 *)(param_1 + 0x9d) = 0x1e;
  *(undefined4 *)(param_1 + 0xa0) = 300;
  puVar1 = PTR_DAT_04bcb470;
  __dest = (char *)param_1[0xc];
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = 0;
  *(undefined1 *)((long)param_1 + 0x504) = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0x97] = uVar6;
  param_1[0x9b] = puVar1 + 0x10;
  param_1[0x9e] = puVar1 + 0x10;
  if (__dest != "InsectActionFieldCicada") {
    iVar3 = 0x17;
    if (*(int *)(param_1 + 0xd) < 0x18) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldCicada",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  lVar7 = *(long *)PTR_DAT_04bb30a0;
  if (lVar7 == 0) {
LAB_01837938:
    uVar6 = 5;
  }
  else {
    uVar4 = FUN_00a86724(lVar7);
    if ((uVar4 & 0xfffffffe) != 4) {
      uVar4 = FUN_00a86724(lVar7);
      if ((uVar4 & 0xfffffffe) != 6) goto LAB_01837938;
    }
    uVar6 = 6;
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,7,uVar6,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2a8;
  puVar5[3] = 1;
  puVar5[4] = 0x2b0;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049c74d8;
  puVar5[1] = param_1;
  puVar5[6] = 0x2b8;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x2c0;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049c74d8;
  puVar5[1] = param_1;
  puVar5[4] = 0x2c8;
  puVar5[5] = 1;
  puVar5[6] = 0x2d0;
  puVar5[7] = 1;
  pcStack_48 = "State::cBuzz";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar7 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar7 = 0;
  }
  puVar5 = (undefined8 *)(param_1[0x55] + lVar7);
  puVar5[2] = &LAB_01837ad0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_049c74d8;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01837c90;
  puVar5[5] = 0;
  puVar5[6] = &LAB_01837e84;
  puVar5[7] = 0;
  pcStack_48 = "State::cStop";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,6,&local_50);
  lVar7 = 0x180;
  if (*(uint *)(param_1 + 0x54) < 7) {
    lVar7 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar7);
  *puVar2 = &PTR_LAB_049c74d8;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_01837e90;
  puVar2[3] = 0;
  puVar2[4] = &LAB_01838040;
  puVar2[5] = 0;
  puVar2[6] = &LAB_018381b4;
  puVar2[7] = 0;
  return;
}

