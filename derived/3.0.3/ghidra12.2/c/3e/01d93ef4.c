
void FUN_01d93ef4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bd4738;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = param_1 + 5;
  param_1[3] = 5;
  param_1[0xe] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar5 = param_1 + 0xb;
  *plVar5 = (long)(puVar1 + 0x10);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  puVar1 = PTR_DAT_04bc3880 + 0x10;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[0x17] = puVar1;
  param_1[0x1b] = puVar1;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x24);
  *(undefined4 *)((long)param_1 + 299) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FUN_03ebac90(plVar5,0x13,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "State::cNormal";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0,&local_70);
  puVar4 = (undefined8 *)param_1[0x11];
  puVar4[2] = &LAB_01d9464c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94650;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cPrepareBuf";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,1,&local_70);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(1 < *(uint *)(param_1 + 0x10)) * 0x40);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d94654;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d9475c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cWaitDownload";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,2,&local_70);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(2 < *(uint *)(param_1 + 0x10)) * 0x80);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d947fc;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94800;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cGoDemoCancel";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,3,&local_70);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x10) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d94804;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94824;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01d94978;
  puVar4[7] = 0;
  pcStack_68 = "State::cCancelBuf";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,4,&local_70);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(4 < *(uint *)(param_1 + 0x10)) * 0x100);
  puVar4[2] = &LAB_01d94998;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94a98;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cLoadOnly";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,5,&local_70);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0x10) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d94b28;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94c18;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cSwitchBuf";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,6,&local_70);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0x10) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d94654;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d9475c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cGoDemoIn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,7,&local_70);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 0x10) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d94804;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94824;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01d94978;
  puVar4[7] = 0;
  pcStack_68 = "State::cSetup";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,8,&local_70);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(8 < *(uint *)(param_1 + 0x10)) * 0x200);
  puVar4[2] = &LAB_01d94c54;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94efc;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cWaitIn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,9,&local_70);
  lVar2 = 0x240;
  if (*(uint *)(param_1 + 0x10) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d947fc;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94800;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cIn";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,10,&local_70);
  lVar2 = 0x280;
  if (*(uint *)(param_1 + 0x10) < 0xb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d94f4c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94f50;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cDream";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0xb,&local_70);
  lVar2 = 0x2c0;
  if (*(uint *)(param_1 + 0x10) < 0xc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d950b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d950b8;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01d950bc;
  puVar4[7] = 0;
  pcStack_68 = "State::cGoDemoOut";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0xc,&local_70);
  lVar2 = 0x300;
  if (*(uint *)(param_1 + 0x10) < 0xd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d94804;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94824;
  puVar4[5] = 0;
  puVar4[6] = &LAB_01d94978;
  puVar4[7] = 0;
  pcStack_68 = "State::cBackup";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0xd,&local_70);
  lVar2 = 0x340;
  if (*(uint *)(param_1 + 0x10) < 0xe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d950c0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d95170;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cResumeBuf";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0xe,&local_70);
  lVar2 = 0x380;
  if (*(uint *)(param_1 + 0x10) < 0xf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d94998;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d94a98;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cLoad";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0xf,&local_70);
  lVar2 = 0x3c0;
  if (*(uint *)(param_1 + 0x10) < 0x10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d951bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d9521c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cRestore";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0x10,&local_70);
  puVar4 = (undefined8 *)(param_1[0x11] + (ulong)(0x10 < *(uint *)(param_1 + 0x10)) * 0x400);
  puVar4[2] = &LAB_01d9525c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01d95380;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cWaitOut";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0x11,&local_70);
  lVar2 = 0x440;
  if (*(uint *)(param_1 + 0x10) < 0x12) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_01d947fc;
  puVar4[3] = 0;
  puVar4[4] = &LAB_01d94800;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_68 = "State::cOut";
  local_70 = puVar1;
  FUN_03ebaf40(plVar5,0x12,&local_70);
  lVar2 = 0x480;
  if (*(uint *)(param_1 + 0x10) < 0x13) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(param_1[0x11] + lVar2);
  puVar4[2] = &LAB_01d957e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ade0;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01d957ec;
  puVar4[5] = 0;
  uVar3 = *(uint *)(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_1 + 100);
  *(uint *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x79) = 1;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(param_1[0x11] + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  local_70 = (undefined *)0x1bdc;
  FUN_0277d4ac(&local_70);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = (undefined4)local_70;
  *(undefined4 *)((long)param_1 + 0x124) = local_70._4_4_;
  return;
}

