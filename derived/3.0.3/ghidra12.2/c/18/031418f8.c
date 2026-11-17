
void FUN_031418f8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bd4738;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0xff;
  puVar1 = PTR_DAT_04bc5ae8 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x115] = (long)param_1;
  param_1[0x118] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0xc] = (long)puVar1;
  param_1[0x119] = (long)puVar1;
  param_1[0x11d] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  param_1[0x11] = (long)param_1 + 0x9c;
  param_1[0x12] = 0x10;
  param_1[0x114] = (long)&PTR_LAB_04b04358;
  FUN_03ebac90(param_1,9,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = (undefined8 *)param_1[6];
  puVar4[2] = &LAB_03141d00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03141d0c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCreateSeq";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar4[2] = &LAB_03141d10;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03141e78;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCreateWait";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar4[2] = &LAB_03141fb0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03142220;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPlay";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 5) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_03142418;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_031426b8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(4 < *(uint *)(param_1 + 5)) * 0x100);
  puVar4[2] = &LAB_031426bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03142840;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cDeleteSeq";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,5,&local_40);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 5) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_03142984;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03142988;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cDialog";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,6,&local_40);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 5) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_03142a00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03142a08;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCapture";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,7,&local_40);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 5) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[6] + lVar2);
  puVar4[2] = &LAB_03142aac;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03142db8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cWaitPictureDisp";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,8,&local_40);
  puVar4 = (undefined8 *)(param_1[6] + (ulong)(8 < *(uint *)(param_1 + 5)) * 0x200);
  puVar4[2] = &LAB_031433fc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b04380;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_03143400;
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

