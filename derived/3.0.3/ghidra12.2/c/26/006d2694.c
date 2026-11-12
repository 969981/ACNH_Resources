
void FUN_006d2694(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 1;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 10) = 0x101;
  lVar3 = nn::os::GetSystemTick();
  param_1[0xb] = lVar3;
  FUN_03ebac90(param_1,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cSleep";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[4] = &LAB_006d28d4;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_048fa798;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCheck";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  *puVar4 = &PTR_LAB_048fa798;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_006d28d8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cBestFriend";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(4 < *(uint *)(param_1 + 5)) * 0x100);
  *puVar4 = &PTR_LAB_048fa798;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_006d2918;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cSentRequest";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  *puVar4 = &PTR_LAB_048fa798;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_006d2a14;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cReceivedRequest";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar3 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar3);
  *puVar4 = &PTR_LAB_048fa798;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_006d2b28;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar2 = *(uint *)(param_1 + 3);
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar2) {
      uVar2 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

