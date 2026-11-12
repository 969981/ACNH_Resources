
void FUN_006d0cb4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = (long)(param_1 + 0xe);
  param_1[0xc] = 100;
  *(undefined2 *)(param_1 + 0x74) = 0x101;
  *(undefined1 *)((long)param_1 + 0x3a2) = 1;
  lVar3 = nn::os::GetSystemTick();
  param_1[0x75] = lVar3;
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    pvVar5 = malloc(0x60);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar3 + 8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x60,8);
  }
  FUN_006d2694();
  param_1[9] = (long)pvVar5;
  FUN_03ebac90(param_1,6,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cSleep";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar6 = (undefined8 *)param_1[6];
  puVar6[4] = &LAB_006d0fc4;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cCheck";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar6 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_006d0fd0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cDeleteBestFriend";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar6 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_006d11d4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cCancelRequest";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[6] + lVar3);
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_006d12b0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cRejectRequest";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar6 = (undefined8 *)(param_1[6] + (ulong)(4 < *(uint *)(param_1 + 5)) * 0x100);
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_006d13a8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_38 = "State::cUpdateList";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,5,&local_40);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 5) < 6) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[6] + lVar3);
  *puVar6 = &PTR_LAB_048fa5b8;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_006d14a0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
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
    puVar6 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

