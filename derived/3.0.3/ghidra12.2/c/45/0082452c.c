
void FUN_0082452c(undefined8 *param_1)

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
  *(undefined4 *)(param_1 + 10) = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar1 + 0x10);
  *param_1 = &PTR_LAB_04917b98;
  FUN_03ebac90(plVar5,7,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[7];
  puVar4[2] = &LAB_00826e20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_00826e24;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCheck";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar4[2] = &LAB_00826e28;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_00826e2c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitApplet";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar4[2] = &LAB_00827058;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_0082705c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCallError";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_008270fc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_008271b8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitError";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(4 < *(uint *)(param_1 + 6)) * 0x100);
  puVar4[2] = &LAB_008272f4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_008272f8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cExit";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 6) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_008273e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[4] = &LAB_00827404;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cQuit";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 6) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_008274e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04917bb8;
  puVar4[1] = plVar5;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_008274ec;
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
  param_1[0x16] = 0;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x14] = param_1 + 0x15;
  param_1[0x13] = param_1 + 0x14;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = param_1 + 0x13;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x10] = param_1 + 0x11;
  puVar4 = param_1 + 0xf;
  *puVar4 = param_1 + 0x10;
  param_1[0xd] = puVar4;
  param_1[0xe] = puVar4;
  if (param_1 + 0x17 != (undefined8 *)0x0) {
    param_1[0xc] = param_1 + 0x17;
    *(undefined4 *)((long)param_1 + 0x5c) = 8;
  }
  param_1[0x23] = param_1 + 0x24;
  param_1[0x24] = param_1 + 0x25;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x26] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1 + 0x23;
  param_1[0x22] = param_1 + 0x23;
  if (param_1 + 0x27 != (undefined8 *)0x0) {
    param_1[0x20] = param_1 + 0x27;
    *(undefined4 *)((long)param_1 + 0xfc) = 4;
  }
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0xff;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}

