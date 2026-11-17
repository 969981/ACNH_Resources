
void FUN_02e3da20(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar1 = param_1 + 1;
  uVar5 = (**(code **)(*param_1 + 0x58))();
  FUN_03ebac90(plVar1,uVar5,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,0,&local_50);
  puVar6 = (undefined8 *)param_1[7];
  puVar6[4] = &LAB_02e3dd5c;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cUpdateFriendList";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,1,&local_50);
  puVar6 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar6[2] = &LAB_02e3dd60;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02e3ddc0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cUpdateBestFriendList";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,2,&local_50);
  puVar6 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar6[2] = &LAB_02e3de14;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02e3debc;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cRetryUpdateBestFriendList";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[7] + lVar3);
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_02e3df40;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cRetrieveNotificationEvent";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,4,&local_50);
  puVar6 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar6[2] = &LAB_02e3df90;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02e3e01c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cParentalCheck";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,5,&local_50);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 6) < 6) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[7] + lVar3);
  puVar6[2] = &LAB_02e3e064;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02e3e06c;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cTryLogIn";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,6,&local_50);
  lVar3 = 0x180;
  if (*(uint *)(param_1 + 6) < 7) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[7] + lVar3);
  puVar6[2] = &LAB_02e3e170;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02e3e1d4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  pcStack_48 = "State::cLogIn";
  local_50 = puVar2;
  FUN_03ebaf40(plVar1,7,&local_50);
  lVar3 = 0x1c0;
  if (*(uint *)(param_1 + 6) < 8) {
    lVar3 = 0;
  }
  puVar6 = (undefined8 *)(param_1[7] + lVar3);
  puVar6[2] = &LAB_02e3e210;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ad4cb0;
  puVar6[1] = param_1;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = &LAB_02e3e334;
  puVar6[5] = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  *(int *)(param_1 + 3) = (int)param_1[2];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 2) = uVar4;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar4) {
      uVar4 = 0;
    }
    puVar6 = *(undefined8 **)(param_1[7] + (long)(int)uVar4 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
    }
  }
  return;
}

