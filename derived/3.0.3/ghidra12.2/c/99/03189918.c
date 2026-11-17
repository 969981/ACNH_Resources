
void FUN_03189918(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_03ebac90(param_2,0x14,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cInit";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0,&local_60);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar4[4] = &LAB_03189ffc;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cIdle";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,1,&local_60);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(1 < *(uint *)(param_2 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_0318a260;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318a7e0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cAppear";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,2,&local_60);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(2 < *(uint *)(param_2 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_0318a850;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318a8dc;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cPlay";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,3,&local_60);
  lVar2 = 0xc0;
  if (*(uint *)(param_2 + 0x28) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318aa80;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318b3f0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cDisappear";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,4,&local_60);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(4 < *(uint *)(param_2 + 0x28)) * 0x100);
  puVar4[2] = &LAB_0318bf20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318c468;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cCommandSelect";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,5,&local_60);
  lVar2 = 0x140;
  if (*(uint *)(param_2 + 0x28) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0318c4c4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0318c590;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cCommandSelect2nd";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,6,&local_60);
  lVar2 = 0x180;
  if (*(uint *)(param_2 + 0x28) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0318c4c4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0318c590;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cProcCommand";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,7,&local_60);
  lVar2 = 0x1c0;
  if (*(uint *)(param_2 + 0x28) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318c5c4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318c5f8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cDrag";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,8,&local_60);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(8 < *(uint *)(param_2 + 0x28)) * 0x200);
  puVar4[2] = &LAB_0318c870;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318ca40;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cEndDrag";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,9,&local_60);
  lVar2 = 0x240;
  if (*(uint *)(param_2 + 0x28) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318e2f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318e3b0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cLookPlayerInfo";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,10,&local_60);
  lVar2 = 0x280;
  if (*(uint *)(param_2 + 0x28) < 0xb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318e510;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318eca0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cPutItemForInterior";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0xb,&local_60);
  lVar2 = 0x2c0;
  if (*(uint *)(param_2 + 0x28) < 0xc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318f4bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318f534;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cErrorWindow";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0xc,&local_60);
  lVar2 = 0x300;
  if (*(uint *)(param_2 + 0x28) < 0xd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318f5b8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318f698;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cCommonDialog";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0xd,&local_60);
  lVar2 = 0x340;
  if (*(uint *)(param_2 + 0x28) < 0xe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318f6e4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318f9d4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cWaitPlayerAction";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0xe,&local_60);
  lVar2 = 0x380;
  if (*(uint *)(param_2 + 0x28) < 0xf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318fb44;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318fb60;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cChangeEditLayer";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0xf,&local_60);
  lVar2 = 0x3c0;
  if (*(uint *)(param_2 + 0x28) < 0x10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0318fbb4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0318fda8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cChangeWallRight";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0x10,&local_60);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(0x10 < *(uint *)(param_2 + 0x28)) * 0x400);
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0318fbb4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0318fda8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cChangeWallLeft";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0x11,&local_60);
  lVar2 = 0x440;
  if (*(uint *)(param_2 + 0x28) < 0x12) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_0318fbb4;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0318fda8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cSellToPurchaseBox";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0x12,&local_60);
  lVar2 = 0x480;
  if (*(uint *)(param_2 + 0x28) < 0x13) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0318fe00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0318ffb0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_58 = "State::cInsectCheckWin";
  local_60 = puVar1;
  FUN_03ebaf40(param_2,0x13,&local_60);
  lVar2 = 0x4c0;
  if (*(uint *)(param_2 + 0x28) < 0x14) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0319001c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b071f0;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_031901cc;
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

