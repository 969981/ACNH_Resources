
void FUN_034a8050(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_2,0x10,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInit";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0,&local_50);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar4[4] = &LAB_034a8628;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cInitPhotoMgr";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(1 < *(uint *)(param_2 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_034a89b0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034a8d38;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(2 < *(uint *)(param_2 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_034a8e50;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034a9078;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cAppear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,3,&local_50);
  lVar2 = 0xc0;
  if (*(uint *)(param_2 + 0x28) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034a9080;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034aa818;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlay";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,4,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(4 < *(uint *)(param_2 + 0x28)) * 0x100);
  puVar4[2] = &LAB_034aaa30;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034aab0c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cSwap";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_2 + 0x28) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ab634;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ab7d0;
  puVar4[5] = 0;
  puVar4[6] = &LAB_034ac020;
  puVar4[7] = 0;
  pcStack_48 = "State::cInfo";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_2 + 0x28) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ac0d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ac4ec;
  puVar4[5] = 0;
  puVar4[6] = &LAB_034ad300;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitPageDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_2 + 0x28) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ad31c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ad348;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cColorChange";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,8,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(8 < *(uint *)(param_2 + 0x28)) * 0x200);
  puVar4[4] = &LAB_034ad678;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[2] = &LAB_034ad3a4;
  puVar4[3] = 0;
  puVar4[6] = &LAB_034ad6c8;
  puVar4[7] = 0;
  pcStack_48 = "State::cDialog";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,9,&local_50);
  lVar2 = 0x240;
  if (*(uint *)(param_2 + 0x28) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ad9c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034adb90;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCommandSelect";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,10,&local_50);
  lVar2 = 0x280;
  if (*(uint *)(param_2 + 0x28) < 0xb) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034adf9c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ae080;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitDownload";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xb,&local_50);
  lVar2 = 0x2c0;
  if (*(uint *)(param_2 + 0x28) < 0xc) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ae5bc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ae5c8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPromotionPerformance";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xc,&local_50);
  lVar2 = 0x300;
  if (*(uint *)(param_2 + 0x28) < 0xd) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034ae88c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034ae938;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitSnsShareDialog";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xd,&local_50);
  lVar2 = 0x340;
  if (*(uint *)(param_2 + 0x28) < 0xe) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034aebe0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034aed10;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitConfig";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xe,&local_50);
  lVar2 = 0x380;
  if (*(uint *)(param_2 + 0x28) < 0xf) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034aef84;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034af0c4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0xf,&local_50);
  lVar2 = 0x3c0;
  if (*(uint *)(param_2 + 0x28) < 0x10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_034af290;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2f048;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_034af44c;
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

