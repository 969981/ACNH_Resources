
void FUN_02f7f170(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_2,0x16,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInit";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0,&local_50);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar4[4] = &LAB_02f7f930;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(1 < *(uint *)(param_2 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_02f7fc40;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f7fe70;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileWaitAutoSave";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(2 < *(uint *)(param_2 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_02f7fe74;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f800e8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileWaitSaveIcon";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_2 + 0x28) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f801c0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f80280;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileSave";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,4,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(4 < *(uint *)(param_2 + 0x28)) * 0x100);
  puVar4[2] = &LAB_02f802dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f8031c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileLoad";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_2 + 0x28) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f80424;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f80514;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileRequestDelete";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_2 + 0x28) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02f80560;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cLoadProfileWaitDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_2 + 0x28) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02f806c0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cAppear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,8,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(8 < *(uint *)(param_2 + 0x28)) * 0x200);
  puVar4[2] = &LAB_02f8071c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f809d4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cBootDialog";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,9,&local_50);
  lVar2 = 0x240;
  if (*(uint *)(param_2 + 0x28) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f80b28;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f80c1c;
  puVar4[5] = 0;
  puVar4[6] = &LAB_02f80d40;
  puVar4[7] = 0;
  pcStack_48 = "State::cBootDialogIllegal";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,10,&local_50);
  lVar2 = 0x280;
  if (*(uint *)(param_2 + 0x28) < 0xb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f80e18;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f80f0c;
  puVar4[5] = 0;
  puVar4[6] = &LAB_02f80f68;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlay";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xb,&local_50);
  lVar2 = 0x2c0;
  if (*(uint *)(param_2 + 0x28) < 0xc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f81040;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f813a0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayCommandSelect";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xc,&local_50);
  lVar2 = 0x300;
  if (*(uint *)(param_2 + 0x28) < 0xd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f813d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f814b4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayPhotoEdit";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xd,&local_50);
  lVar2 = 0x340;
  if (*(uint *)(param_2 + 0x28) < 0xe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f817a4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f81818;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayTitle";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xe,&local_50);
  lVar2 = 0x380;
  if (*(uint *)(param_2 + 0x28) < 0xf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f81884;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f81a84;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayTitleWaitDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xf,&local_50);
  lVar2 = 0x3c0;
  if (*(uint *)(param_2 + 0x28) < 0x10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_02f81b70;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayComment";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x10,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(0x10 < *(uint *)(param_2 + 0x28)) * 0x400);
  puVar4[2] = &LAB_02f81f00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f822d0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayReturn";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x11,&local_50);
  lVar2 = 0x440;
  if (*(uint *)(param_2 + 0x28) < 0x12) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f829b8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f82a6c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIllegalReportWaitScroll";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x12,&local_50);
  lVar2 = 0x480;
  if (*(uint *)(param_2 + 0x28) < 0x13) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f82b80;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f82ca8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIllegalReportWaitCapture";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x13,&local_50);
  lVar2 = 0x4c0;
  if (*(uint *)(param_2 + 0x28) < 0x14) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f82d24;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f82d40;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIllegalReport";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x14,&local_50);
  lVar2 = 0x500;
  if (*(uint *)(param_2 + 0x28) < 0x15) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f82d8c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_02f82ef8;
  puVar4[5] = 0;
  puVar4[6] = &LAB_02f82fa4;
  puVar4[7] = 0;
  pcStack_48 = "State::cDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0x15,&local_50);
  lVar2 = 0x540;
  if (*(uint *)(param_2 + 0x28) < 0x16) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_02f830a0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04ae7200;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02f83240;
  puVar4[5] = 0;
  *(undefined1 *)(param_2 + 0x21) = 1;
  uVar3 = *(uint *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(uint *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_2 + 0x28) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x30) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

