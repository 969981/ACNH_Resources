
void FUN_02fe4884(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
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
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar1 + 0x10);
  *param_1 = &PTR_LAB_04aeeb60;
  FUN_03ebac90(plVar5,5,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[7];
  puVar4[2] = &LAB_02fe4b20;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02fe4b24;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04aeebf0;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02fe4b3c;
  puVar4[7] = 0;
  pcStack_48 = "State::cTrig";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar4[4] = &LAB_02fe4b44;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04aeebf0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_02fe4b40;
  puVar4[3] = 0;
  puVar4[6] = &LAB_02fe4b54;
  puVar4[7] = 0;
  pcStack_48 = "State::cPreRepeat";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar4[4] = &LAB_02fe4b60;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04aeebf0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_02fe4b58;
  puVar4[3] = 0;
  puVar4[6] = &LAB_02fe4bcc;
  puVar4[7] = 0;
  pcStack_48 = "State::cRepeatTrig";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_02fe4bd0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04aeebf0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02fe4bd4;
  puVar4[5] = 0;
  puVar4[6] = &LAB_02fe4be4;
  puVar4[7] = 0;
  pcStack_48 = "State::cRepeatInterval";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar4[2] = &LAB_02fe4be8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04aeebf0;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02fe4c5c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02fe4bf0;
  puVar4[5] = 0;
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
    puVar4 = *(undefined8 **)(param_1[7] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

