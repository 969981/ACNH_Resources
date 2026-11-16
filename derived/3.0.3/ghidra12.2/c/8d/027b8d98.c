
void FUN_027b8d98(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = (long)param_1;
  param_1[0xb] = (long)FUN_027b9054;
  param_1[8] = 0;
  param_1[9] = (long)&PTR_LAB_04a912f0;
  FUN_038e1bac(param_1 + 0xe,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x17] = (long)FUN_027b9140;
  param_1[0x18] = 0;
  param_1[0x15] = (long)&PTR_LAB_04a91340;
  param_1[0x16] = (long)param_1;
  FUN_03ebac90(param_1,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[2] = &LAB_027b916c;
  puVar4[3] = 0;
  puVar4[4] = &LAB_027b9170;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91390;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_027b9174;
  puVar4[7] = 0;
  pcStack_38 = "State::cProcessSwitchStart";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar4[4] = &LAB_027b917c;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91390;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_027b9178;
  puVar4[3] = 0;
  puVar4[6] = &LAB_027b9224;
  puVar4[7] = 0;
  pcStack_38 = "State::cExtend";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar4[4] = &LAB_027b92e4;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04a91390;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_027b9228;
  puVar4[3] = 0;
  puVar4[6] = &LAB_027b92f8;
  puVar4[7] = 0;
  pcStack_38 = "State::cWaitProcessSwitchEnd";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_027b92fc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a91390;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_027b9300;
  puVar4[5] = 0;
  puVar4[6] = &LAB_027b9314;
  puVar4[7] = 0;
  pcStack_38 = "State::cDone";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(4 < *(uint *)(param_1 + 5)) * 0x100);
  puVar4[2] = &LAB_027b9318;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a91390;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_027b9320;
  puVar4[7] = 0;
  puVar4[4] = &LAB_027b931c;
  puVar4[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar3 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[6] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

