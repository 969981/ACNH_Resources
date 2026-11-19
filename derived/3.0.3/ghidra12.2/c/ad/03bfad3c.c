
void FUN_03bfad3c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  lVar9 = param_1 + 0x30;
  FUN_03ebac90(lVar9,0x23,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cSleep";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0,&local_50);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  puVar8[4] = FUN_03bfb9b0;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cConnectNetworkReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,1,&local_50);
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)(1 < *(uint *)(param_1 + 0x58)) * 0x40)
  ;
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfbaa0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cConnectNetwork";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,2,&local_50);
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)(2 < *(uint *)(param_1 + 0x58)) * 0x80)
  ;
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfbd74;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLogInReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,3,&local_50);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x58) < 4) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfbea0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLogIn";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,4,&local_50);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x60) + (ulong)(4 < *(uint *)(param_1 + 0x58)) * 0x100);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfc24c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLocalInitReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,5,&local_50);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x58) < 6) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfc440;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLocalInit";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,6,&local_50);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x58) < 7) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfc72c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cAutoMatchReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,7,&local_50);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x58) < 8) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfc830;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cCreateMatchReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,8,&local_50);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x60) + (ulong)(8 < *(uint *)(param_1 + 0x58)) * 0x200);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfcb50;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cJoinMatchReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,9,&local_50);
  lVar4 = 0x240;
  if (*(uint *)(param_1 + 0x58) < 10) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfce80;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFindMatchReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,10,&local_50);
  lVar4 = 0x280;
  if (*(uint *)(param_1 + 0x58) < 0xb) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfd1b0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFindParticipantMatchReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0xb,&local_50);
  lVar4 = 0x2c0;
  if (*(uint *)(param_1 + 0x58) < 0xc) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfd420;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFindMatchDone";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0xc,&local_50);
  lVar4 = 0x300;
  if (*(uint *)(param_1 + 0x58) < 0xd) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfd648;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cMatching";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0xd,&local_50);
  lVar4 = 0x340;
  if (*(uint *)(param_1 + 0x58) < 0xe) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfd6f8;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cOpenParticipation";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0xe,&local_50);
  lVar4 = 0x380;
  if (*(uint *)(param_1 + 0x58) < 0xf) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfdb90;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cCloseParticipation";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0xf,&local_50);
  lVar4 = 0x3c0;
  if (*(uint *)(param_1 + 0x58) < 0x10) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfde40;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cAutoJointSession";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x10,&local_50);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x60) + (ulong)(0x10 < *(uint *)(param_1 + 0x58)) * 0x400);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfe120;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cDestroyJointSession";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x11,&local_50);
  lVar4 = 0x440;
  if (*(uint *)(param_1 + 0x58) < 0x12) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfe4c0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cOpenJointSession";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x12,&local_50);
  lVar4 = 0x480;
  if (*(uint *)(param_1 + 0x58) < 0x13) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfe770;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cCloseJointSession";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x13,&local_50);
  lVar4 = 0x4c0;
  if (*(uint *)(param_1 + 0x58) < 0x14) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfe9f0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cClosedJointSession";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x14,&local_50);
  lVar4 = 0x500;
  if (*(uint *)(param_1 + 0x58) < 0x15) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfec64;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cMerging";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x15,&local_50);
  lVar4 = 0x540;
  if (*(uint *)(param_1 + 0x58) < 0x16) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bfee6c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cDemerging";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x16,&local_50);
  lVar4 = 0x580;
  if (*(uint *)(param_1 + 0x58) < 0x17) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff0a0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFixing";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x17,&local_50);
  lVar4 = 0x5c0;
  if (*(uint *)(param_1 + 0x58) < 0x18) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff1b8;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFixed";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x18,&local_50);
  lVar4 = 0x600;
  if (*(uint *)(param_1 + 0x58) < 0x19) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff3a0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cCloneStop";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x19,&local_50);
  lVar4 = 0x640;
  if (*(uint *)(param_1 + 0x58) < 0x1a) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff6d4;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cDisconnect";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1a,&local_50);
  lVar4 = 0x680;
  if (*(uint *)(param_1 + 0x58) < 0x1b) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff6e0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLogOutOnly";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1b,&local_50);
  lVar4 = 0x6c0;
  if (*(uint *)(param_1 + 0x58) < 0x1c) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bff9a0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cLogOut";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1c,&local_50);
  lVar4 = 0x700;
  if (*(uint *)(param_1 + 0x58) < 0x1d) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03bffc10;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cError";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1d,&local_50);
  lVar4 = 0x740;
  if (*(uint *)(param_1 + 0x58) < 0x1e) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  puVar8[2] = &LAB_03bffe58;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_03bfff20;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cSilentError";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1e,&local_50);
  lVar4 = 0x780;
  if (*(uint *)(param_1 + 0x58) < 0x1f) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  puVar8[2] = &LAB_03bfffa4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_03c00080;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cEnsureNetworkAccount";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x1f,&local_50);
  lVar4 = 0x7c0;
  if (*(uint *)(param_1 + 0x58) < 0x20) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03c00138;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cHandleNifm";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x20,&local_50);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x60) + (ulong)(0x20 < *(uint *)(param_1 + 0x58)) * 0x800);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03c00318;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cDisconnectNetworkReady";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x21,&local_50);
  lVar4 = 0x840;
  if (*(uint *)(param_1 + 0x58) < 0x22) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar4);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03c00470;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_48 = "State::cFinalize";
  local_50 = puVar1;
  FUN_03ebaf40(lVar9,0x22,&local_50);
  lVar9 = 0x880;
  if (*(uint *)(param_1 + 0x58) < 0x23) {
    lVar9 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar9);
  *puVar8 = &PTR_LAB_04b7c3a0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = &LAB_03c00710;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  uVar2 = *(uint *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x58) <= uVar2) {
      uVar2 = 0;
    }
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + (long)(int)uVar2 * 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x28);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x28,8);
  }
  FUN_03c08f50();
  *(void **)(param_1 + 0x78) = pvVar5;
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x140);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar8 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x140,8);
  }
  FUN_03c078d0();
  *(void **)(param_1 + 0x80) = pvVar5;
  FUN_03c07c60(pvVar5);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    pvVar5 = malloc(0x60);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar8 = (undefined8 *)(lVar9 + 8);
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x60,8);
  }
  FUN_03c087b4();
  *(void **)(param_1 + 0x88) = pvVar5;
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    plVar7 = malloc(0xa0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa0,8);
    }
  }
  puVar1 = PTR_DAT_04bd46f0;
  plVar7[0x13] = 0;
  plVar7[0x11] = 0;
  *(undefined1 *)(plVar7 + 0x12) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  *(long **)(param_1 + 0x90) = plVar7;
  return;
}

