
void FUN_026cd93c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_50;
  char *pcStack_48;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar6 = param_1 + 1;
  *plVar6 = (long)(puVar1 + 0x10);
  *param_1 = &PTR_LAB_04a89200;
  param_1[0xb] = param_1;
  param_1[0xc] = FUN_026cdc18;
  param_1[9] = 0;
  param_1[10] = &PTR_LAB_04a89240;
  param_1[0x12] = FUN_026cdc54;
  param_1[0x13] = 0;
  param_1[0x10] = &PTR_LAB_04a89290;
  param_1[0x11] = param_1;
  uVar4 = nn::os::GetSystemTick();
  param_1[0x15] = uVar4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_03ebac90(plVar6,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,0,&local_50);
  puVar5 = (undefined8 *)param_1[7];
  puVar5[2] = &LAB_026cdd18;
  puVar5[3] = 0;
  puVar5[4] = &LAB_026cdd1c;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a892e0;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_026cdd20;
  puVar5[7] = 0;
  pcStack_48 = "State::cProcess";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,1,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar5[4] = &LAB_026cddf8;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a892e0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_026cdd24;
  puVar5[3] = 0;
  puVar5[6] = &LAB_026cde1c;
  puVar5[7] = 0;
  pcStack_48 = "State::cAppletStart";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,2,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar5[4] = &LAB_026cde24;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_04a892e0;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_026cde20;
  puVar5[3] = 0;
  puVar5[6] = &LAB_026cded4;
  puVar5[7] = 0;
  pcStack_48 = "State::cApplet";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar5 = (undefined8 *)(param_1[7] + lVar2);
  puVar5[2] = &LAB_026cded8;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a892e0;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_026cdedc;
  puVar5[5] = 0;
  puVar5[6] = &LAB_026cdf5c;
  puVar5[7] = 0;
  pcStack_48 = "State::cFinish";
  local_50 = puVar1;
  FUN_03ebaf40(plVar6,4,&local_50);
  puVar5 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar5[2] = &LAB_026cdf60;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_04a892e0;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_026cdf70;
  puVar5[7] = 0;
  puVar5[4] = &LAB_026cdf6c;
  puVar5[5] = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar3) {
      uVar3 = 0;
    }
    puVar5 = *(undefined8 **)(param_1[7] + (long)(int)uVar3 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

