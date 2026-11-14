
void FUN_018363c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_01812e50(param_1,param_2[4]);
  param_1[0x93] = &PTR_LAB_049c7138;
  param_1[0x94] = *param_2;
  param_1[0x95] = param_2[1];
  param_1[0x96] = param_2[2];
  uVar6 = param_2[3];
  __dest = (char *)param_1[0xc];
  *param_1 = &PTR_LAB_049c6e20;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x93] = &PTR_LAB_049c7108;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  param_1[0x97] = uVar6;
  if (__dest != "InsectActionFieldCastOffSkin") {
    iVar3 = 0x1c;
    if (*(int *)(param_1 + 0xd) < 0x1d) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"InsectActionFieldCastOffSkin",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = param_1 + 0x4f;
  FUN_03ebac90(puVar2,6,5,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cEscape";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,0,&local_50);
  puVar5 = (undefined8 *)param_1[0x55];
  puVar5[2] = 0x2a8;
  puVar5[3] = 1;
  puVar5[4] = 0x2b0;
  puVar5[5] = 1;
  *puVar5 = &PTR_LAB_049c7168;
  puVar5[1] = param_1;
  puVar5[6] = 0x2b8;
  puVar5[7] = 1;
  pcStack_48 = "State::cRelease";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,1,&local_50);
  puVar5 = (undefined8 *)(param_1[0x55] + (ulong)(1 < *(uint *)(param_1 + 0x54)) * 0x40);
  puVar5[2] = 0x2c0;
  puVar5[3] = 1;
  *puVar5 = &PTR_LAB_049c7168;
  puVar5[1] = param_1;
  puVar5[4] = 0x2c8;
  puVar5[5] = 1;
  puVar5[6] = 0x2d0;
  puVar5[7] = 1;
  pcStack_48 = "State::cWait";
  local_50 = puVar1;
  FUN_03ebaf40(puVar2,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x54) < 6) {
    lVar4 = 0;
  }
  puVar2 = (undefined8 *)(param_1[0x55] + lVar4);
  *puVar2 = &PTR_LAB_049c7168;
  puVar2[1] = param_1;
  puVar2[2] = &LAB_018365b8;
  puVar2[3] = 0;
  puVar2[4] = &LAB_018365c8;
  puVar2[5] = 0;
  puVar2[6] = &LAB_01836668;
  puVar2[7] = 0;
  return;
}

