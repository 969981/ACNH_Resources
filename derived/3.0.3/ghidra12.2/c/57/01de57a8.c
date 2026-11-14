
void FUN_01de57a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x58);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar6 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x58,8);
  }
  puVar2 = PTR_DAT_04bc3880;
  puVar1 = param_1 + 2;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[10] = 0xffffffff;
  puVar5[2] = puVar2 + 0x10;
  puVar5[6] = puVar2 + 0x10;
  *param_1 = puVar5;
  FUN_03ebac90(puVar1,0xb,0,param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,0,&local_50);
  puVar5 = (undefined8 *)param_1[8];
  puVar5[2] = &LAB_01de5c50;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de5c58;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cHostPreProc";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,1,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(1 < *(uint *)(param_1 + 7)) * 0x40);
  puVar5[2] = &LAB_01de5dcc;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de5de4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cHostStartSave";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,2,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(2 < *(uint *)(param_1 + 7)) * 0x80);
  puVar5[2] = &LAB_01de5e2c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de5fb0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cHostSyncCommit";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,3,&local_50);
  lVar6 = 0xc0;
  if (*(uint *)(param_1 + 7) < 4) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de60a0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de61c4;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cHostSyncRollback";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,4,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(4 < *(uint *)(param_1 + 7)) * 0x100);
  puVar5[2] = &LAB_01de61c8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de61cc;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cHostCommitAndWait";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,5,&local_50);
  lVar6 = 0x140;
  if (*(uint *)(param_1 + 7) < 6) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de61d0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de6250;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cVisitStartSave";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,6,&local_50);
  lVar6 = 0x180;
  if (*(uint *)(param_1 + 7) < 7) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de6420;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de6530;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cVisitWaitCommit";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,7,&local_50);
  lVar6 = 0x1c0;
  if (*(uint *)(param_1 + 7) < 8) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de65d4;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de6670;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cVisitCommit";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,8,&local_50);
  puVar5 = (undefined8 *)(param_1[8] + (ulong)(8 < *(uint *)(param_1 + 7)) * 0x200);
  puVar5[2] = &LAB_01de6820;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de6880;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cVisitFinalizeWait";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,9,&local_50);
  lVar6 = 0x240;
  if (*(uint *)(param_1 + 7) < 10) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de6960;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_01de696c;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  pcStack_48 = "State::cRollback";
  local_50 = puVar2;
  FUN_03ebaf40(puVar1,10,&local_50);
  lVar6 = 0x280;
  if (*(uint *)(param_1 + 7) < 0xb) {
    lVar6 = 0;
  }
  puVar5 = (undefined8 *)(param_1[8] + lVar6);
  puVar5[2] = &LAB_01de6a90;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a5bc70;
  puVar5[1] = param_1;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = &LAB_01de6b0c;
  puVar5[5] = 0;
  *(undefined1 *)((long)param_1 + 0x31) = 1;
  uVar3 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + 0x1c);
  *(uint *)(param_1 + 3) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 7) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[8] + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

