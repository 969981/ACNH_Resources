
void FUN_02387054(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cHide";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0,&local_40);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x2a8);
  puVar4[2] = FUN_0238f0e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238f290;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238f188;
  puVar4[5] = 0;
  pcStack_38 = "State::cHideSubWaitWarpIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,1,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(1 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x40);
  puVar4[2] = &LAB_0238f36c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238f4b0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238f3a8;
  puVar4[5] = 0;
  pcStack_38 = "State::cWaitNoController";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,2,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x80);
  puVar4[2] = &LAB_0238f588;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238f62c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238f5b4;
  puVar4[5] = 0;
  pcStack_38 = "State::cRemoteDummyWaitForbidOverwrite";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0238f6f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238f79c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238f724;
  puVar4[5] = 0;
  pcStack_38 = "State::cDevelopMode";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,4,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(4 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x100);
  puVar4[2] = &LAB_0238f868;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238f90c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238f894;
  puVar4[5] = 0;
  pcStack_38 = "State::cWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,5,&local_40);
  lVar2 = 0x140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0238f9d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238fab4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238fa18;
  puVar4[5] = 0;
  pcStack_38 = "State::cWaitAfterWarp";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,6,&local_40);
  lVar2 = 0x180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0238fc10;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238fce8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238fc4c;
  puVar4[5] = 0;
  pcStack_38 = "State::cSharePlayMainChangeReciveWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,7,&local_40);
  lVar2 = 0x1c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0238fdc4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0238fe9c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238fe00;
  puVar4[5] = 0;
  pcStack_38 = "State::cSharePlayMainChangeGet";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,8,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(8 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x200);
  puVar4[2] = &LAB_0238ff70;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390048;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0238ffac;
  puVar4[5] = 0;
  pcStack_38 = "State::cSharePlaySubOutdoorStartWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,9,&local_40);
  lVar2 = 0x240;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02390124;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390274;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023901d8;
  puVar4[5] = 0;
  pcStack_38 = "State::cSharePlaySubIndoorStartWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,10,&local_40);
  lVar2 = 0x280;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02390350;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023904a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390404;
  puVar4[5] = 0;
  pcStack_38 = "State::cSharePlaySubStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb,&local_40);
  lVar2 = 0x2c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239057c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390658;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023905bc;
  puVar4[5] = 0;
  pcStack_38 = "State::cMove";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc,&local_40);
  lVar2 = 0x300;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02390734;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239080c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390770;
  puVar4[5] = 0;
  pcStack_38 = "State::cTurn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd,&local_40);
  lVar2 = 0x340;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023908e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023909c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390928;
  puVar4[5] = 0;
  pcStack_38 = "State::cRemoteMove";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe,&local_40);
  lVar2 = 0x380;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02390a94;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390b6c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390ad0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoTalk";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf,&local_40);
  lVar2 = 0x3c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02390cb8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390d90;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390cf4;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoSitSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(0x10 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x400);
  puVar4[2] = &LAB_02390e6c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02390f5c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02390ec0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoBedSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11,&local_40);
  lVar2 = 0x440;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x12) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391034;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391130;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391094;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoSwimSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x12,&local_40);
  lVar2 = 0x480;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391210;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023912ec;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391250;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoDiveSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13,&local_40);
  lVar2 = 0x4c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x14) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023913c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391540;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391404;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoSWalkSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x14,&local_40);
  lVar2 = 0x500;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x15) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391618;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391720;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391684;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x15,&local_40);
  lVar2 = 0x540;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x16) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023917f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023918cc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391854;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoMove";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x16,&local_40);
  lVar2 = 0x580;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x17) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391998;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391a68;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023919cc;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoTurn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x17,&local_40);
  lVar2 = 0x5c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x18) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391bac;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391c78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391bdc;
  puVar4[5] = 0;
  pcStack_38 = "State::cSimpleMutter";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x18,&local_40);
  lVar2 = 0x600;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x19) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391d44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391e1c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391d80;
  puVar4[5] = 0;
  pcStack_38 = "State::cMenuWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x19,&local_40);
  lVar2 = 0x640;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02391ef8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02391fd4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02391f38;
  puVar4[5] = 0;
  pcStack_38 = "State::cEmotionEffectAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1a,&local_40);
  lVar2 = 0x680;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023920a0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239217c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023920e0;
  puVar4[5] = 0;
  pcStack_38 = "State::cGroundMakerReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1b,&local_40);
  lVar2 = 0x6c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02392258;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392334;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392298;
  puVar4[5] = 0;
  pcStack_38 = "State::cGroundMakerReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1c,&local_40);
  lVar2 = 0x700;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02392400;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023924d8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239243c;
  puVar4[5] = 0;
  pcStack_38 = "State::cGroundMakerAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1d,&local_40);
  lVar2 = 0x740;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023925a4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392680;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023925e4;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpValleyReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1e,&local_40);
  lVar2 = 0x780;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x1f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239275c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392834;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392798;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpValleyReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x1f,&local_40);
  lVar2 = 0x7c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x20) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02392958;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392a30;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392994;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpValley";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x20,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(0x20 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x800);
  puVar4[2] = &LAB_02392b54;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392c2c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392b90;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpValleyCancel";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x21,&local_40);
  lVar2 = 0x840;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x22) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02392d08;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392de4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392d48;
  puVar4[5] = 0;
  pcStack_38 = "State::cPickupWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x22,&local_40);
  lVar2 = 0x880;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x23) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02392eb0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02392f88;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02392eec;
  puVar4[5] = 0;
  pcStack_38 = "State::cPickup";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x23,&local_40);
  lVar2 = 0x8c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x24) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393054;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393130;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393094;
  puVar4[5] = 0;
  pcStack_38 = "State::cPickupGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x24,&local_40);
  lVar2 = 0x900;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x25) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239320c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023932e8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239324c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPickup";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x25,&local_40);
  lVar2 = 0x940;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x26) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023933c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023934a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393404;
  puVar4[5] = 0;
  pcStack_38 = "State::cOutfitChange";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x26,&local_40);
  lVar2 = 0x980;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x27) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239357c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393658;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023935bc;
  puVar4[5] = 0;
  pcStack_38 = "State::cEat";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x27,&local_40);
  lVar2 = 0x9c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x28) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393734;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393810;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393774;
  puVar4[5] = 0;
  pcStack_38 = "State::cEatGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x28,&local_40);
  lVar2 = 0xa00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x29) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023938ec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393994;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239391c;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolChange";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x29,&local_40);
  lVar2 = 0xa40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393a60;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393b3c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393aa0;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolPutaway";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2a,&local_40);
  lVar2 = 0xa80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393c18;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393cf4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393c58;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolPullout";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2b,&local_40);
  lVar2 = 0xac0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393dd0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02393eac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393e10;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolAirShot";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2c,&local_40);
  lVar2 = 0xb00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02393f88;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394064;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02393fc8;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolReflect";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2d,&local_40);
  lVar2 = 0xb40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394130;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239420c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394170;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolCancel";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2e,&local_40);
  lVar2 = 0xb80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x2f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023942e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023943c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394328;
  puVar4[5] = 0;
  pcStack_38 = "State::cSmartPhoneTalk";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x2f,&local_40);
  lVar2 = 0xbc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x30) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394490;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023945a4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023944d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x30,&local_40);
  lVar2 = 0xc00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x31) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394670;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394748;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023946ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x31,&local_40);
  lVar2 = 0xc40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x32) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394814;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023948f0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394854;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopDig";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x32,&local_40);
  lVar2 = 0xc80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x33) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023949bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394a98;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023949fc;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopDigGetPutaway";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x33,&local_40);
  lVar2 = 0xcc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x34) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394b74;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394c50;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394bb4;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopDigGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x34,&local_40);
  lVar2 = 0xd00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x35) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394d2c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394e08;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394d6c;
  puVar4[5] = 0;
  pcStack_38 = "State::cScoopBury";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x35,&local_40);
  lVar2 = 0xd40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x36) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02394ee4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02394fc0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02394f24;
  puVar4[5] = 0;
  pcStack_38 = "State::cRiverMakerReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x36,&local_40);
  lVar2 = 0xd80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x37) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239509c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395178;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023950dc;
  puVar4[5] = 0;
  pcStack_38 = "State::cRiverMakerReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x37,&local_40);
  lVar2 = 0xdc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x38) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395244;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395320;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395284;
  puVar4[5] = 0;
  pcStack_38 = "State::cRiverMakerDig";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x38,&local_40);
  lVar2 = 0xe00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x39) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023953ec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023954c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395428;
  puVar4[5] = 0;
  pcStack_38 = "State::cRiverMakerBury";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x39,&local_40);
  lVar2 = 0xe40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023955a0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239567c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023955e0;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageWalkIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3a,&local_40);
  lVar2 = 0xe80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395758;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395834;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395798;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageWalkInUseBgCheck";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3b,&local_40);
  lVar2 = 0xec0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395910;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023959e4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395948;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageWalkOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3c,&local_40);
  lVar2 = 0xf00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395ac0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395b98;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395afc;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageStairsInDown";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3d,&local_40);
  lVar2 = 0xf40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395c64;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395d40;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395ca4;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageStairsInDownGravity";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3e,&local_40);
  lVar2 = 0xf80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x3f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395e1c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02395eec;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02395e50;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageStairsInUp";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x3f,&local_40);
  lVar2 = 0xfc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x40) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02395fc8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023960a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396004;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageStairsInUpGravity";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x40,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(0x40 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x1000);
  puVar4[2] = &LAB_0239617c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239624c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023961b0;
  puVar4[5] = 0;
  pcStack_38 = "State::cStageStairsOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x41,&local_40);
  lVar2 = 0x1040;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x42) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396328;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396404;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396368;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubHostSceneChangeWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x42,&local_40);
  lVar2 = 0x1080;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x43) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023964e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396594;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239651c;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubHostWaitMainHostDoorOutEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x43,&local_40);
  lVar2 = 0x10c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x44) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396660;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396768;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239669c;
  puVar4[5] = 0;
  pcStack_38 = "State::cAxeReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x44,&local_40);
  lVar2 = 0x1100;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x45) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396834;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396910;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396874;
  puVar4[5] = 0;
  pcStack_38 = "State::cAxeReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x45,&local_40);
  lVar2 = 0x1140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x46) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023969e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396ac4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396a28;
  puVar4[5] = 0;
  pcStack_38 = "State::cAxeHitTree";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x46,&local_40);
  lVar2 = 0x1180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x47) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396b9c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396c78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396bdc;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrHold";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x47,&local_40);
  lVar2 = 0x11c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x48) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396d9c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02396e78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396ddc;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrHoldWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x48,&local_40);
  lVar2 = 0x1200;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x49) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02396f54;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02397030;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02396f94;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPullReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x49,&local_40);
  lVar2 = 0x1240;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023971b4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02397290;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023971f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPullDisable";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4a,&local_40);
  lVar2 = 0x1280;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239735c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023974ac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397410;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPullReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4b,&local_40);
  lVar2 = 0x12c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02397578;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023976c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397628;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPull";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4c,&local_40);
  lVar2 = 0x1300;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02397790;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239786c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023977d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPushReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4d,&local_40);
  lVar2 = 0x1340;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023979c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02397aa4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397a08;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPushDisable";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4e,&local_40);
  lVar2 = 0x1380;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x4f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02397b70;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02397cc0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397c24;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPushReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x4f,&local_40);
  lVar2 = 0x13c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x50) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02397d8c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02397ed8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397e3c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrPush";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x50,&local_40);
  lVar2 = 0x1400;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x51) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02397fa4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398080;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02397fe4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRotateReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x51,&local_40);
  lVar2 = 0x1440;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x52) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023981dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023982b8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239821c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRotateDisable";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x52,&local_40);
  lVar2 = 0x1480;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x53) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02398384;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398460;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023983c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRotateReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x53,&local_40);
  lVar2 = 0x14c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x54) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239852c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398608;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239856c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRotate";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x54,&local_40);
  lVar2 = 0x1500;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x55) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023986d4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023987b0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02398714;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrSwitchWallHang";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x55,&local_40);
  lVar2 = 0x1540;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x56) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239887c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398958;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023988bc;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRequestLockFrontForDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x56,&local_40);
  lVar2 = 0x1580;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x57) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02398a84;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398b50;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02398ab4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrDemoChangeSwitch";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x57,&local_40);
  lVar2 = 0x15c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x58) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02398c1c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398cf8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02398c5c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrDemoStartWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x58,&local_40);
  lVar2 = 0x1600;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x59) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02398dc4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02398ea0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02398e04;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrDemoWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x59,&local_40);
  lVar2 = 0x1640;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02398f6c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399048;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02398fac;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrRequestUnlockFrontForDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5a,&local_40);
  lVar2 = 0x1680;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02399114;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023991ec;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02399150;
  puVar4[5] = 0;
  pcStack_38 = "State::cShow";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5b,&local_40);
  lVar2 = 0x16c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023992fc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023993d8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239933c;
  puVar4[5] = 0;
  pcStack_38 = "State::cPutawayWaitWithUI";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5c,&local_40);
  lVar2 = 0x1700;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023994b4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399590;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023994f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cPutawayAfterVariousGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5d,&local_40);
  lVar2 = 0x1740;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239966c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399790;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023996f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cTreeSwingReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5e,&local_40);
  lVar2 = 0x1780;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x5f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239986c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399948;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023998ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cTreeSwing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x5f,&local_40);
  lVar2 = 0x17c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x60) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02399a20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399afc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02399a60;
  puVar4[5] = 0;
  pcStack_38 = "State::cInteriorMode";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x60,&local_40);
  lVar2 = 0x1800;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x61) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02399c3c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399d14;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02399c78;
  puVar4[5] = 0;
  pcStack_38 = "State::cInteriorModeVisibleOff";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x61,&local_40);
  lVar2 = 0x1840;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x62) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02399e40;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_02399f1c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_02399e80;
  puVar4[5] = 0;
  pcStack_38 = "State::cInteriorModeEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x62,&local_40);
  lVar2 = 0x1880;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 99) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_02399ff8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a0f0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a038;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairSitdownReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,99,&local_40);
  lVar2 = 0x18c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 100) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239a21c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a2f8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a25c;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairSitdownReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,100,&local_40);
  lVar2 = 0x1900;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x65) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239a3d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a4ac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a410;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairSitdownAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x65,&local_40);
  lVar2 = 0x1940;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x66) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239a584;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a660;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a5c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairSitdownWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x66,&local_40);
  lVar2 = 0x1980;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x67) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239a73c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a818;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a77c;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairSitdownTurn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x67,&local_40);
  lVar2 = 0x19c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x68) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239a90c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239a9e8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239a94c;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairStandupReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x68,&local_40);
  lVar2 = 0x1a00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x69) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ab44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239ac20;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239ab84;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairStandupReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x69,&local_40);
  lVar2 = 0x1a40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239acf8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239add4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239ad38;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairStandupAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6a,&local_40);
  lVar2 = 0x1a80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239af0c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239afe8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239af4c;
  puVar4[5] = 0;
  pcStack_38 = "State::cChairStandupFail";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6b,&local_40);
  lVar2 = 0x1ac0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b0c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239b1a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239b104;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedInReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6c,&local_40);
  lVar2 = 0x1b00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b300;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239b3dc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239b340;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedInReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6d,&local_40);
  lVar2 = 0x1b40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b4b4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239b590;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239b4f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedInAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6e,&local_40);
  lVar2 = 0x1b80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x6f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b668;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239b744;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239b6a8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x6f,&local_40);
  lVar2 = 0x1bc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x70) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b820;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239b8fc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239b860;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedRolloverReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x70,&local_40);
  lVar2 = 0x1c00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x71) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239b9dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239bab4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239ba18;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedRolloverReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x71,&local_40);
  lVar2 = 0x1c40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x72) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239bb98;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239bc74;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239bbd8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedRolloverAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x72,&local_40);
  lVar2 = 0x1c80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x73) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239bd58;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239be34;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239bd98;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedRolloverFail";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x73,&local_40);
  lVar2 = 0x1cc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x74) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239bf68;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c044;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239bfa8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedOutReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x74,&local_40);
  lVar2 = 0x1d00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x75) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239c12c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c208;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239c16c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedOutReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x75,&local_40);
  lVar2 = 0x1d40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x76) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239c2e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c3bc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239c320;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedOutAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x76,&local_40);
  lVar2 = 0x1d80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x77) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239c494;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c570;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239c4d4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFootBuryReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x77,&local_40);
  lVar2 = 0x1dc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x78) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239c6a8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c784;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239c6e8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFootBuryReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x78,&local_40);
  lVar2 = 0x1e00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x79) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239c850;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239c99c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239c900;
  puVar4[5] = 0;
  pcStack_38 = "State::cFootBury";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x79,&local_40);
  lVar2 = 0x1e40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ca68;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239cb44;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239caa8;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7a,&local_40);
  lVar2 = 0x1e80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239cce0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239cdbc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239cd20;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorKnock";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7b,&local_40);
  lVar2 = 0x1ec0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ce98;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239cf74;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239ced8;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorOutWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7c,&local_40);
  lVar2 = 0x1f00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239d040;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239d118;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d07c;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorOutWaitOffDraw";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7d,&local_40);
  lVar2 = 8000;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239d1f4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239d340;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d2a4;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7e,&local_40);
  lVar2 = 0x1f80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x7f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239d41c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239d4f4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d458;
  puVar4[5] = 0;
  pcStack_38 = "State::cUmbrellaRolling";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x7f,&local_40);
  lVar2 = 0x1fc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x80) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239d5d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239d6a8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d60c;
  puVar4[5] = 0;
  pcStack_38 = "State::cChangeStickOpenRingMenu";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x80,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(0x80 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x2000);
  puVar4[2] = &LAB_0239d780;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239d858;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d7bc;
  puVar4[5] = 0;
  pcStack_38 = "State::cChangeStickChant";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x81,&local_40);
  lVar2 = 0x2040;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x82) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239d924;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239da00;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239d964;
  puVar4[5] = 0;
  pcStack_38 = "State::cChangeStickReflect";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x82,&local_40);
  lVar2 = 0x2080;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x83) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239dae0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239dbbc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239db20;
  puVar4[5] = 0;
  pcStack_38 = "State::cChangeStickNoCoordinateMessage";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x83,&local_40);
  lVar2 = 0x20c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x84) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239dc98;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239dd74;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239dcd8;
  puVar4[5] = 0;
  pcStack_38 = "State::cCliffMakerReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x84,&local_40);
  lVar2 = 0x2100;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x85) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239de40;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239df1c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239de80;
  puVar4[5] = 0;
  pcStack_38 = "State::cCliffMakerReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x85,&local_40);
  puVar3 = &DAT_00002140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x86) {
    puVar3 = (undefined1 *)0x0;
  }
  puVar4 = (undefined8 *)(puVar3 + *(long *)(*(long *)(param_1 + 0x70) + 0x2a8));
  puVar4[2] = &LAB_0239dfe8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e0c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e028;
  puVar4[5] = 0;
  pcStack_38 = "State::cCliffMakerActionCreate";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x86,&local_40);
  lVar2 = 0x2180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x87) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239e190;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e26c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e1d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cCliffMakerActionDelete";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x87,&local_40);
  lVar2 = 0x21c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x88) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239e348;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e424;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e388;
  puVar4[5] = 0;
  pcStack_38 = "State::cWatering";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x88,&local_40);
  lVar2 = 0x2200;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x89) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239e500;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e5dc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e540;
  puVar4[5] = 0;
  pcStack_38 = "State::cChestOperate";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x89,&local_40);
  lVar2 = 0x2240;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239e6a8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e784;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e6e8;
  puVar4[5] = 0;
  pcStack_38 = "State::cLadderReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8a,&local_40);
  lVar2 = 0x2280;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239e860;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239e93c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239e8a0;
  puVar4[5] = 0;
  pcStack_38 = "State::cLadderReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8b,&local_40);
  lVar2 = 0x22c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ea18;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239eb84;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239eae8;
  puVar4[5] = 0;
  pcStack_38 = "State::cLadderAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8c,&local_40);
  lVar2 = 0x2300;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ec60;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239ed3c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239eca0;
  puVar4[5] = 0;
  pcStack_38 = "State::cOnetimeAnimToWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8d,&local_40);
  lVar2 = 0x2340;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239ee18;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239eef4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239ee58;
  puVar4[5] = 0;
  pcStack_38 = "State::cCurtainOperate";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8e,&local_40);
  lVar2 = 0x2380;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x8f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f018;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f0f4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f058;
  puVar4[5] = 0;
  pcStack_38 = "State::cDelivery";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x8f,&local_40);
  lVar2 = 0x23c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x90) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f20c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f2e8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f24c;
  puVar4[5] = 0;
  pcStack_38 = "State::cNetWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x90,&local_40);
  lVar2 = 0x2400;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x91) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f3b4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f490;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f3f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cNetSwing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x91,&local_40);
  lVar2 = 0x2440;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x92) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f568;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f644;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f5a8;
  puVar4[5] = 0;
  pcStack_38 = "State::cNetGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x92,&local_40);
  lVar2 = 0x2480;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x93) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f720;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f7fc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f760;
  puVar4[5] = 0;
  pcStack_38 = "State::cNetRelease";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x93,&local_40);
  lVar2 = 0x24c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x94) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239f8d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239f9b4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239f918;
  puVar4[5] = 0;
  pcStack_38 = "State::cPartyPopperPull";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x94,&local_40);
  lVar2 = 0x2500;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x95) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239faa8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239fb84;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239fae8;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodCasting";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x95,&local_40);
  lVar2 = 0x2540;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x96) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239fcb4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239fd90;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239fcf4;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodCastingFail";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x96,&local_40);
  lVar2 = 0x2580;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x97) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_0239fea4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_0239ff80;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0239fee4;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodWaitHit";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x97,&local_40);
  lVar2 = 0x25c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x98) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0058;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0134;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a0098;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodFall";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x98,&local_40);
  lVar2 = 0x2600;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x99) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0288;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0364;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a02c8;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodHit";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x99,&local_40);
  lVar2 = 0x2640;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a04b8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0594;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a04f8;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodReturnFloat";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9a,&local_40);
  lVar2 = 0x2680;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a066c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0748;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a06ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodFight";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9b,&local_40);
  lVar2 = 0x26c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0828;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0904;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a0868;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodCatch";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9c,&local_40);
  lVar2 = 0x2700;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0a64;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0b40;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a0aa4;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9d,&local_40);
  lVar2 = 0x2740;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0cb8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0d94;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a0cf8;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodReleaseFish";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9e,&local_40);
  lVar2 = 0x2780;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x9f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a0e70;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a0f4c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a0eb0;
  puVar4[5] = 0;
  pcStack_38 = "State::cRodReleaseTrash";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x9f,&local_40);
  lVar2 = 0x27c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1040;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a111c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1080;
  puVar4[5] = 0;
  pcStack_38 = "State::cSlingshotWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa0,&local_40);
  lVar2 = 0x2800;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a11f4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a12d0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1234;
  puVar4[5] = 0;
  pcStack_38 = "State::cSlingshotShooting";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa1,&local_40);
  lVar2 = 0x2840;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a13b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a148c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a13f0;
  puVar4[5] = 0;
  pcStack_38 = "State::cSlingshotDropWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa2,&local_40);
  lVar2 = 0x2880;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1568;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a1640;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a15a4;
  puVar4[5] = 0;
  pcStack_38 = "State::cSlingshotShocked";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa3,&local_40);
  lVar2 = 0x28c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1720;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a17ec;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1750;
  puVar4[5] = 0;
  pcStack_38 = "State::cFenceMakerReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa4,&local_40);
  lVar2 = 0x2900;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a18f4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a19d0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1934;
  puVar4[5] = 0;
  pcStack_38 = "State::cFenceMakerReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa5,&local_40);
  lVar2 = 0x2940;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1aa8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a1b84;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1ae8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFenceMakerAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa6,&local_40);
  lVar2 = 0x2980;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1c5c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a1d38;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1c9c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFenceMakerActionNG";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa7,&local_40);
  lVar2 = 0x29c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1e14;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a1ef0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a1e54;
  puVar4[5] = 0;
  pcStack_38 = "State::cFencePickup";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa8,&local_40);
  lVar2 = 0x2a00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xa9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a1fc8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a20a4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2008;
  puVar4[5] = 0;
  pcStack_38 = "State::cSnowBallRolling";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xa9,&local_40);
  lVar2 = 0x2a40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xaa) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2180;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a225c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a21c0;
  puVar4[5] = 0;
  pcStack_38 = "State::cSnowBallKick";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xaa,&local_40);
  lVar2 = 0x2a80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xab) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2344;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a2420;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2384;
  puVar4[5] = 0;
  pcStack_38 = "State::cPitfallReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xab,&local_40);
  lVar2 = 0x2ac0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xac) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a24f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a25c4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2528;
  puVar4[5] = 0;
  pcStack_38 = "State::cPitfallFall";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xac,&local_40);
  lVar2 = 0x2b00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xad) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2690;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a276c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a26d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cPitfallStruggle";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xad,&local_40);
  lVar2 = 0x2b40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xae) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2894;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a2970;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a28d4;
  puVar4[5] = 0;
  pcStack_38 = "State::cPitfallOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xae,&local_40);
  lVar2 = 0x2b80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xaf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2a3c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a2b74;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2ad8;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlayMusic";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xaf,&local_40);
  lVar2 = 0x2bc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2c90;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a2d6c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2cd0;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlayMusicKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb0,&local_40);
  lVar2 = 0x2c00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a2e94;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a2f70;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a2ed4;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlayMusicKeepOffTimer";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb1,&local_40);
  lVar2 = 0x2c40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a3098;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3174;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a30d8;
  puVar4[5] = 0;
  pcStack_38 = "State::cPinataWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb2,&local_40);
  lVar2 = 0x2c80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a329c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3480;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a32dc;
  puVar4[5] = 0;
  pcStack_38 = "State::cPinataSwing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb3,&local_40);
  lVar2 = 0x2cc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a3558;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3634;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a3598;
  puVar4[5] = 0;
  pcStack_38 = "State::cLongStickJumpReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb4,&local_40);
  lVar2 = 0x2d00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a370c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a37e8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a374c;
  puVar4[5] = 0;
  pcStack_38 = "State::cLongStickJumpReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb5,&local_40);
  lVar2 = 0x2d40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a38c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a39a0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a3904;
  puVar4[5] = 0;
  pcStack_38 = "State::cLongStickJump";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb6,&local_40);
  lVar2 = 0x2d80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a3ad0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3bac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a3b10;
  puVar4[5] = 0;
  pcStack_38 = "State::cLongStickJumpCancel";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb7,&local_40);
  lVar2 = 0x2dc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a3c88;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3d64;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a3cc8;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoThroughSlitReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb8,&local_40);
  lVar2 = 0x2e00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xb9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a3e30;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a3f0c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a3e70;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoThroughSlitReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xb9,&local_40);
  lVar2 = 0x2e40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xba) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a403c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4118;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a407c;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoThroughSlit";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xba,&local_40);
  lVar2 = 0x2e80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xbb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a4248;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4324;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a4288;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoThroughSlitCancel";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xbb,&local_40);
  lVar2 = 0x2ec0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xbc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a4400;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4524;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a443c;
  puVar4[5] = 0;
  pcStack_38 = "State::cToolBreakDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xbc,&local_40);
  lVar2 = 0x2f00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xbd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a45f0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a46cc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a4630;
  puVar4[5] = 0;
  pcStack_38 = "State::cBeeStingDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xbd,&local_40);
  lVar2 = 0x2f40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xbe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a47a8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4884;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a47e8;
  puVar4[5] = 0;
  pcStack_38 = "State::cHealBeeStingDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xbe,&local_40);
  lVar2 = 0x2f80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xbf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a49a8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4a84;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a49e8;
  puVar4[5] = 0;
  pcStack_38 = "State::cHealBeeStingDemoWaitSync";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xbf,&local_40);
  lVar2 = 0x2fc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a4b8c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4c64;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a4bc8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFaintDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc0,&local_40);
  lVar2 = 0x3000;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a4d3c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4e14;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a4d78;
  puVar4[5] = 0;
  pcStack_38 = "State::cFaintStandupDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc1,&local_40);
  lVar2 = 0x3040;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a4eec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a4fc8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a4f2c;
  puVar4[5] = 0;
  pcStack_38 = "State::cGroundbaitDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc2,&local_40);
  lVar2 = 0x3080;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a50dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a51b8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a511c;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorDecorationPickupReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc3,&local_40);
  lVar2 = 0x30c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5284;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a5350;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a52b4;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorDecorationPickupReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc4,&local_40);
  lVar2 = 0x3100;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5428;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a54f4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a5458;
  puVar4[5] = 0;
  pcStack_38 = "State::cDoorDecorationPickupAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc5,&local_40);
  lVar2 = 0x3140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a55cc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a56a8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a560c;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpSitdownReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc6,&local_40);
  lVar2 = 0x3180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 199) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a57d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a58ac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a5810;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpSitdownReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,199,&local_40);
  lVar2 = 0x31c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 200) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5984;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a5a60;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a59c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpSitdownAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,200,&local_40);
  lVar2 = 0x3200;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xc9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5b38;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a5c14;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a5b78;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpSitdownWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xc9,&local_40);
  lVar2 = 0x3240;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xca) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5d3c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a5e18;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a5d7c;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpSitdownTurn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xca,&local_40);
  lVar2 = 0x3280;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xcb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a5ef0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a5fcc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a5f30;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpStandupReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xcb,&local_40);
  lVar2 = 0x32c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xcc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6128;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6204;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6168;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpStandupReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xcc,&local_40);
  lVar2 = 0x3300;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xcd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a62dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a63b8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a631c;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpStandupAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xcd,&local_40);
  lVar2 = 0x3340;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xce) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6490;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a656c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a64d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cStumpStandupFail";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xce,&local_40);
  lVar2 = 0x3380;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xcf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6648;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6724;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6688;
  puVar4[5] = 0;
  pcStack_38 = "State::cDIYLearningDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xcf,&local_40);
  lVar2 = 0x33c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6800;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a68a8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6830;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrWorkbenchThinking";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd0,&local_40);
  lVar2 = 0x3400;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6974;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6a50;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a69b4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrWorkbenchMaking";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd1,&local_40);
  lVar2 = 0x3440;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6b28;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6c04;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6b68;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrWorkbenchGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd2,&local_40);
  lVar2 = 0x3480;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6ce0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6dbc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6d20;
  puVar4[5] = 0;
  pcStack_38 = "State::cShootingStarMakeAWish";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd3,&local_40);
  lVar2 = 0x34c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a6eb0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a6f8c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a6ef0;
  puVar4[5] = 0;
  pcStack_38 = "State::cMosquitoStingDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd4,&local_40);
  lVar2 = 0x3500;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7064;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a7140;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a70a4;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrMailboxStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd5,&local_40);
  lVar2 = 0x3540;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7218;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a7394;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7258;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrMailboxKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd6,&local_40);
  lVar2 = 0x3580;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a746c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a75e8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a74ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrMailboxEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd7,&local_40);
  lVar2 = 0x35c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a76c0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a783c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7700;
  puVar4[5] = 0;
  pcStack_38 = "State::cPaperFanAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd8,&local_40);
  lVar2 = 0x3600;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xd9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7914;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a79f0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7954;
  puVar4[5] = 0;
  pcStack_38 = "State::cPaperFanDown";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xd9,&local_40);
  lVar2 = 0x3640;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xda) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7acc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a7ba4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7b08;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xda,&local_40);
  lVar2 = 0x3680;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xdb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7c7c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a7d58;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7cbc;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xdb,&local_40);
  lVar2 = 0x36c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xdc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7e24;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a7f00;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a7e64;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xdc,&local_40);
  lVar2 = 0x3700;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xdd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a7fcc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a80a8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a800c;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightNewYearStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xdd,&local_40);
  lVar2 = 0x3740;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xde) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8184;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8260;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a81c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightNewYearKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xde,&local_40);
  lVar2 = 0x3780;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xdf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8338;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8414;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8378;
  puVar4[5] = 0;
  pcStack_38 = "State::cStickLightNewYearEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xdf,&local_40);
  lVar2 = 0x37c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a84ec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a85c8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a852c;
  puVar4[5] = 0;
  pcStack_38 = "State::cShowcaseOpen";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe0,&local_40);
  lVar2 = 0x3800;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a86a0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8778;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a86dc;
  puVar4[5] = 0;
  pcStack_38 = "State::cShowcaseOpenKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe1,&local_40);
  lVar2 = 0x3840;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8850;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a89cc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8890;
  puVar4[5] = 0;
  pcStack_38 = "State::cShowcaseClose";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe2,&local_40);
  lVar2 = 0x3880;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8aa4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8b80;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8ae4;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoInFittingRoom";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe3,&local_40);
  lVar2 = 0x38c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8c44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8d20;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8c84;
  puVar4[5] = 0;
  pcStack_38 = "State::cInFittingRoom";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe4,&local_40);
  lVar2 = 0x3900;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8dfc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a8eb4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8e3c;
  puVar4[5] = 0;
  pcStack_38 = "State::cGoOutFittingRoom";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe5,&local_40);
  lVar2 = 0x3940;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a8f90;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a906c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a8fd0;
  puVar4[5] = 0;
  pcStack_38 = "State::cShowSomeoneIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe6,&local_40);
  lVar2 = 0x3980;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9148;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a92d0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9234;
  puVar4[5] = 0;
  pcStack_38 = "State::cTotakekeLiveWaitStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe7,&local_40);
  lVar2 = 0x39c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a939c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9474;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a93d8;
  puVar4[5] = 0;
  pcStack_38 = "State::cTotakekeLiveGetRhythm";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe8,&local_40);
  lVar2 = 0x3a00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xe9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a954c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9628;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a958c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFacePaintChange";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xe9,&local_40);
  lVar2 = 0x3a40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xea) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9700;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a97dc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9740;
  puVar4[5] = 0;
  pcStack_38 = "State::cPassOverAndWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xea,&local_40);
  lVar2 = 0x3a80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xeb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a98b4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9990;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a98f4;
  puVar4[5] = 0;
  pcStack_38 = "State::cHalfAsleepTurnFront";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xeb,&local_40);
  lVar2 = 0x3ac0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xec) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9a5c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9b30;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9a94;
  puVar4[5] = 0;
  pcStack_38 = "State::cHalfAsleepNotice";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xec,&local_40);
  lVar2 = 0x3b00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xed) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9c08;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9ce4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9c48;
  puVar4[5] = 0;
  pcStack_38 = "State::cHalfAsleepHairstyling";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xed,&local_40);
  lVar2 = 0x3b40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xee) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9dbc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023a9e98;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9dfc;
  puVar4[5] = 0;
  pcStack_38 = "State::cLanding";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xee,&local_40);
  lVar2 = 0x3b80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xef) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023a9f90;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa06c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023a9fd0;
  puVar4[5] = 0;
  pcStack_38 = "State::cFireworksKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xef,&local_40);
  lVar2 = 0x3bc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf0) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aa144;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa220;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aa184;
  puVar4[5] = 0;
  pcStack_38 = "State::cFireworksSwing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf0,&local_40);
  lVar2 = 0x3c00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf1) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aa2fc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa3d4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aa338;
  puVar4[5] = 0;
  pcStack_38 = "State::cPinwheelBlowing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf1,&local_40);
  lVar2 = 0x3c40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf2) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aa4b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa58c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aa4f0;
  puVar4[5] = 0;
  pcStack_38 = "State::cAppear";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf2,&local_40);
  lVar2 = 0x3c80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf3) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aa664;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa740;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aa6a4;
  puVar4[5] = 0;
  pcStack_38 = "State::cDisappear";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf3,&local_40);
  lVar2 = 0x3cc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aa818;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aa8f4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aa858;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpInWater";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf4,&local_40);
  lVar2 = 0x3d00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf5) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aaa2c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aab08;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aaa6c;
  puVar4[5] = 0;
  pcStack_38 = "State::cEnterInWater";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf5,&local_40);
  lVar2 = 0x3d40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aabf0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aaccc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aac30;
  puVar4[5] = 0;
  pcStack_38 = "State::cSwimWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf6,&local_40);
  lVar2 = 0x3d80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aada0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aae7c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aade0;
  puVar4[5] = 0;
  pcStack_38 = "State::cSwim";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf7,&local_40);
  lVar2 = 0x3dc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aafdc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ab0b8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ab01c;
  puVar4[5] = 0;
  pcStack_38 = "State::cSwimReleaseFish";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf8,&local_40);
  lVar2 = 0x3e00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xf9) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ab194;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ab26c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ab1d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xf9,&local_40);
  lVar2 = 0x3e40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xfa) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ab360;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ab43c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ab3a0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xfa,&local_40);
  lVar2 = 16000;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xfb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ab554;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ab630;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ab594;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveMove";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xfb,&local_40);
  lVar2 = 0x3ec0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xfc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ab790;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ab86c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ab7d0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xfc,&local_40);
  lVar2 = 0x3f00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xfd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ab9cc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023abaa4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aba08;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveRequestGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xfd,&local_40);
  lVar2 = 0x3f40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xfe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023abb80;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023abc4c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023abbb0;
  puVar4[5] = 0;
  pcStack_38 = "State::cDiveOutGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xfe,&local_40);
  lVar2 = 0x3f80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0xff) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023abd44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023abe14;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023abd78;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpOutWaterReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0xff,&local_40);
  lVar2 = 0x3fc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x100) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023abee8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023abfc0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023abf24;
  puVar4[5] = 0;
  pcStack_38 = "State::cJumpOutWater";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x100,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) +
           (ulong)(0x100 < *(uint *)(*(long *)(param_1 + 0x70) + 0x2a0)) * 0x4000);
  puVar4[2] = &LAB_023ac0e4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ac1bc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ac120;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlacedFireworksReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x101,&local_40);
  lVar2 = 0x4040;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x102) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ac298;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ac3e4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ac348;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlacedFireworksReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x102,&local_40);
  lVar2 = 0x4080;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x103) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ac4b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ac5fc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ac560;
  puVar4[5] = 0;
  pcStack_38 = "State::cPlacedFireworksAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x103,&local_40);
  lVar2 = 0x40c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x104) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ac6c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ac814;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ac778;
  puVar4[5] = 0;
  pcStack_38 = "State::cTumble";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x104,&local_40);
  lVar2 = 0x4100;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x105) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ac93c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aca18;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ac97c;
  puVar4[5] = 0;
  pcStack_38 = "State::cBubbleBlowing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x105,&local_40);
  lVar2 = 0x4140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x106) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023acaf4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023acbd0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023acb34;
  puVar4[5] = 0;
  pcStack_38 = "State::cPennantStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x106,&local_40);
  lVar2 = 0x4180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x107) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023acd00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023acddc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023acd40;
  puVar4[5] = 0;
  pcStack_38 = "State::cPennantKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x107,&local_40);
  lVar2 = 0x41c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x108) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aceb4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023acf90;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023acef4;
  puVar4[5] = 0;
  pcStack_38 = "State::cPennantEnd";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x108,&local_40);
  lVar2 = 0x4200;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x109) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad068;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad144;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad0a8;
  puVar4[5] = 0;
  pcStack_38 = "State::cBalloonShake";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x109,&local_40);
  lVar2 = 0x4240;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad21c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad2f8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad25c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFacePanelWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10a,&local_40);
  lVar2 = 0x4280;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad3d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad4ac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad410;
  puVar4[5] = 0;
  pcStack_38 = "State::cFacePanelAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10b,&local_40);
  lVar2 = 0x42c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad578;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad654;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad5b8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFacePanelActionKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10c,&local_40);
  lVar2 = 0x4300;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad720;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad7fc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad760;
  puVar4[5] = 0;
  pcStack_38 = "State::cTweeterBlowing";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10d,&local_40);
  lVar2 = 0x4340;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ad8d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ad9b4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ad918;
  puVar4[5] = 0;
  pcStack_38 = "State::cHalloweenTricked";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10e,&local_40);
  lVar2 = 0x4380;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x10f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ada8c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023adb68;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023adacc;
  puVar4[5] = 0;
  pcStack_38 = "State::cUseTowel";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x10f,&local_40);
  lVar2 = 0x43c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x110) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023adc34;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023add10;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023adc74;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixLadderReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x110,&local_40);
  lVar2 = 0x4400;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x111) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023addec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023adec8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ade2c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixLadderReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x111,&local_40);
  lVar2 = 0x4440;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x112) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023adfa4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae110;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae074;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixLadderAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x112,&local_40);
  lVar2 = 0x4480;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x113) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ae1ec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae2c8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae22c;
  puVar4[5] = 0;
  pcStack_38 = "State::cFtrBedWaitMessy";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x113,&local_40);
  lVar2 = 0x44c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x114) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ae3a4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae480;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae3e4;
  puVar4[5] = 0;
  pcStack_38 = "State::cSWalkWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x114,&local_40);
  lVar2 = 0x4500;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x115) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ae55c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae63c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae5a0;
  puVar4[5] = 0;
  pcStack_38 = "State::cToSWalkReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x115,&local_40);
  lVar2 = 0x4540;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x116) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ae708;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae7e4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae748;
  puVar4[5] = 0;
  pcStack_38 = "State::cToSWalkReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x116,&local_40);
  lVar2 = 0x4580;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x117) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023ae8b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023ae98c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023ae8f0;
  puVar4[5] = 0;
  pcStack_38 = "State::cToSWalkAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x117,&local_40);
  lVar2 = 0x45c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x118) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aea58;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aeb34;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aea98;
  puVar4[5] = 0;
  pcStack_38 = "State::cSWalkReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x118,&local_40);
  lVar2 = 0x4600;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x119) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aecc4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aeda0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aed04;
  puVar4[5] = 0;
  pcStack_38 = "State::cSWalkReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x119,&local_40);
  lVar2 = 0x4640;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023aee6c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aef48;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023aeeac;
  puVar4[5] = 0;
  pcStack_38 = "State::cSWalkAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11a,&local_40);
  lVar2 = 0x4680;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af014;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023af0f0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af054;
  puVar4[5] = 0;
  pcStack_38 = "State::cExitSWalkReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11b,&local_40);
  lVar2 = 0x46c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af280;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023af35c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af2c0;
  puVar4[5] = 0;
  pcStack_38 = "State::cExitSWalkReadyWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11c,&local_40);
  lVar2 = 0x4700;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af428;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023af504;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af468;
  puVar4[5] = 0;
  pcStack_38 = "State::cExitSWalkAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11d,&local_40);
  lVar2 = 0x4740;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af5d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023af6ac;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af610;
  puVar4[5] = 0;
  pcStack_38 = "State::cRadioGymnasticsWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11e,&local_40);
  lVar2 = 0x4780;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x11f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af788;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023af864;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af7c8;
  puVar4[5] = 0;
  pcStack_38 = "State::cRadioGymnasticsAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x11f,&local_40);
  lVar2 = 0x47c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x120) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023af93c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023afa18;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023af97c;
  puVar4[5] = 0;
  pcStack_38 = "State::cRadioGymnasticsFail";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x120,&local_40);
  lVar2 = 0x4800;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x121) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023afb4c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023afc28;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023afb8c;
  puVar4[5] = 0;
  pcStack_38 = "State::cSparklingCiderCheers";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x121,&local_40);
  lVar2 = 0x4840;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x122) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023afd00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023afddc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023afd40;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubToolOnetimeAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x122,&local_40);
  lVar2 = 0x4880;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x123) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023afeb4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023aff90;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023afef4;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubToolKeepStartAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x123,&local_40);
  lVar2 = 0x48c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x124) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b006c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0148;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b00ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubToolKeepAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x124,&local_40);
  lVar2 = 0x4900;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x125) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b0220;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b02fc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0260;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubToolKeepEndAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x125,&local_40);
  lVar2 = 0x4940;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x126) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b03d4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b04b0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0414;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x126,&local_40);
  lVar2 = 0x4980;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x127) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b0588;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0660;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b05c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeActionJumpIn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x127,&local_40);
  lVar2 = 0x49c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x128) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b072c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0808;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b076c;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeSearch";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x128,&local_40);
  lVar2 = 0x4a00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x129) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b08e4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b09c0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0924;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeEndSearch";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x129,&local_40);
  lVar2 = 0x4a40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x12a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b0aec;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0c3c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0ba0;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeWaitJumpOutSameScene";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x12a,&local_40);
  lVar2 = 0x4a80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 299) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b0d18;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0df4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0d58;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeWaitJumpOutChangeScene";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,299,&local_40);
  lVar2 = 0x4ac0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 300) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b0f20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b0ffc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b0f60;
  puVar4[5] = 0;
  pcStack_38 = "State::cWarpPipeActionJumpOut";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,300,&local_40);
  lVar2 = 0x4b00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x12d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b1128;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1204;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1168;
  puVar4[5] = 0;
  pcStack_38 = "State::cFesAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x12d,&local_40);
  lVar2 = 0x4b40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x12e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b12e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b13c0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1320;
  puVar4[5] = 0;
  pcStack_38 = "State::cLookDown";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x12e,&local_40);
  lVar2 = 0x4b80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x12f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b14e8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1694;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1528;
  puVar4[5] = 0;
  pcStack_38 = "State::cCooking";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x12f,&local_40);
  lVar2 = 0x4bc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x130) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b176c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1848;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b17ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cCookingGetDemo";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x130,&local_40);
  lVar2 = 0x4c00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x131) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b1924;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1a00;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1964;
  puVar4[5] = 0;
  pcStack_38 = "State::cLoopAnim";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x131,&local_40);
  lVar2 = 0x4c40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x132) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b1af4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1bd0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1b34;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeTakeout";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x132,&local_40);
  lVar2 = 0x4c80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x133) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b1c9c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1d78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1cdc;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeEatInDrink";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x133,&local_40);
  lVar2 = 0x4cc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x134) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b1e54;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b1f78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b1edc;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeEatInPose";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x134,&local_40);
  lVar2 = 0x4d00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x135) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2058;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b217c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b20e0;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeEatInPutDown";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x135,&local_40);
  lVar2 = 0x4d40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x136) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2258;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b2348;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b22ac;
  puVar4[5] = 0;
  pcStack_38 = "State::cClapReady";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x136,&local_40);
  lVar2 = 0x4d80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x137) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2424;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b2500;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b2464;
  puVar4[5] = 0;
  pcStack_38 = "State::cClapAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x137,&local_40);
  lVar2 = 0x4dc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x138) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b25d8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b27c0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b2618;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeAmiiboPhonePickUp";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x138,&local_40);
  lVar2 = 0x4e00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x139) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2984;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b2a60;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b29c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeAmiiboPhoneTalk";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x139,&local_40);
  lVar2 = 0x4e40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13a) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2b2c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b2c78;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b2bdc;
  puVar4[5] = 0;
  pcStack_38 = "State::cCafeAmiiboPhonePutDown";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13a,&local_40);
  lVar2 = 0x4e80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13b) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2d44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b2e90;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b2df4;
  puVar4[5] = 0;
  pcStack_38 = "State::cSubToolBookAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13b,&local_40);
  lVar2 = 0x4ec0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13c) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b2f64;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3040;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b2fa4;
  puVar4[5] = 0;
  pcStack_38 = "State::cEntryFixDirWalkAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13c,&local_40);
  lVar2 = 0x4f00;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13d) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3118;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b31f4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b3158;
  puVar4[5] = 0;
  pcStack_38 = "State::cEntryFixDirWalkFailure";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13d,&local_40);
  lVar2 = 0x4f40;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13e) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b32c0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b339c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b3300;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixDirWalkWait";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13e,&local_40);
  lVar2 = 0x4f80;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x13f) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3468;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3544;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b34a8;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixDirWalkAction";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x13f,&local_40);
  lVar2 = 0x4fc0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x140) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3610;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b36ec;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b3650;
  puVar4[5] = 0;
  pcStack_38 = "State::cFixDirWalkFailure";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x140,&local_40);
  lVar2 = 0x5000;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x141) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b37b8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3894;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b37f8;
  puVar4[5] = 0;
  pcStack_38 = "State::cSpeakerMegaphoneStart";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x141,&local_40);
  lVar2 = 0x5040;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x142) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3960;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3b2c;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b39a0;
  puVar4[5] = 0;
  pcStack_38 = "State::cSpeakerMegaphoneKeep";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x142,&local_40);
  lVar2 = 0x5080;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x143) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3bf8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3cd4;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b3c38;
  puVar4[5] = 0;
  pcStack_38 = "State::cSpeakerMegaphoneSpeak";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x143,&local_40);
  lVar2 = 0x50c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x144) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3df0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b3ecc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b3e30;
  puVar4[5] = 0;
  pcStack_38 = "State::cSpeakerMegaphoneFinish";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x144,&local_40);
  lVar2 = 0x5100;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x145) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b3fa8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b40b8;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b401c;
  puVar4[5] = 0;
  pcStack_38 = "State::cHotelMannequinRentalOn";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x145,&local_40);
  lVar2 = 0x5140;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x146) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b4184;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b4260;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b41c4;
  puVar4[5] = 0;
  pcStack_38 = "State::cHotelMannequinRentalOff";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x146,&local_40);
  lVar2 = 0x5180;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x147) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b4348;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b4424;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b4388;
  puVar4[5] = 0;
  pcStack_38 = "State::cDemoWeatherChange";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x147,&local_40);
  lVar2 = 0x51c0;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x148) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  puVar4[2] = &LAB_023b4500;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[6] = &LAB_023b45dc;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b4540;
  puVar4[5] = 0;
  pcStack_38 = "State::cTransceiverUse";
  local_40 = puVar1;
  FUN_03ebaf40(*(long *)(param_1 + 0x70) + 0x278,0x148,&local_40);
  lVar2 = 0x5200;
  if (*(uint *)(*(long *)(param_1 + 0x70) + 0x2a0) < 0x149) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x2a8) + lVar2);
  *puVar4 = &PTR_LAB_04a80828;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_023b4748;
  puVar4[3] = 0;
  puVar4[6] = &LAB_023b4824;
  puVar4[7] = 0;
  puVar4[4] = &LAB_023b4788;
  puVar4[5] = 0;
  return;
}

