
void FUN_03071060(undefined8 *param_1)

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
  *param_1 = &PTR_LAB_04af87e0;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  plVar5 = param_1 + 1;
  *plVar5 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0xc1) = 9;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  memset((void *)((long)param_1 + 0xc2),0,0x802);
  param_1[0x120] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  *(undefined1 *)(param_1 + 0x123) = 2;
  *(undefined8 *)((long)param_1 + 0x90c) = 0;
  *(undefined4 *)((long)param_1 + 0x914) = 0;
  *(undefined8 *)((long)param_1 + 0x904) = 0;
  *(undefined8 *)((long)param_1 + 0x91c) = 0;
  *(undefined8 *)((long)param_1 + 0x924) = 0;
  *(undefined8 *)((long)param_1 + 0x92c) = 0;
  *(undefined8 *)((long)param_1 + 0x931) = 0;
  *(undefined1 *)((long)param_1 + 0x939) = 0xee;
  *(undefined2 *)((long)param_1 + 0x93a) = 0;
  memset(param_1 + 0x128,0,0x270);
  *(undefined1 *)(param_1 + 0x178) = 2;
  *(undefined8 *)((long)param_1 + 0xbac) = 0;
  *(undefined8 *)((long)param_1 + 0xbb4) = 0;
  *(undefined4 *)((long)param_1 + 0xbbc) = 0;
  *(undefined8 *)((long)param_1 + 0xbc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbcc) = 0;
  *(undefined8 *)((long)param_1 + 0xbd4) = 0;
  *(undefined4 *)((long)param_1 + 0xbdc) = 0;
  *(undefined1 *)((long)param_1 + 0xbe1) = 0xee;
  *(undefined2 *)((long)param_1 + 0xbe2) = 0;
  memset(param_1 + 0x17d,0,0x830);
  *(undefined1 *)(param_1 + 0x17c) = 1;
  FUN_03ebac90(plVar5,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_50);
  puVar4 = (undefined8 *)param_1[7];
  puVar4[4] = &LAB_03071350;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04af8800;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDownloadHeader";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar4[2] = &LAB_03071354;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04af8800;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0307135c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDownloadBody";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_50);
  puVar4 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar4[2] = &LAB_03071494;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04af8800;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03071498;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDownloadTest";
  local_50 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[7] + lVar2);
  puVar4[2] = &LAB_0307159c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04af8800;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_030715a0;
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

