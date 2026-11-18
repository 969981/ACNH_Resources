
void FUN_03497dc8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_2,10,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cInit";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,0,&local_50);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar4[4] = &LAB_03498180;
  puVar4[5] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
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
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_03498184;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (ulong)(2 < *(uint *)(param_2 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_03498320;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03498698;
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
  puVar4[2] = &LAB_034986a0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_034992c0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayBtnList";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,4,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(4 < *(uint *)(param_2 + 0x28)) * 0x100);
  puVar4[2] = &LAB_034994e0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03499520;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPlayMap";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,5,&local_50);
  lVar2 = 0x140;
  if (*(uint *)(param_2 + 0x28) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_03499a00;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03499a70;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cWaitSetupBtnList";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,6,&local_50);
  lVar2 = 0x180;
  if (*(uint *)(param_2 + 0x28) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = &LAB_0349a060;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cRevisitTutorialDialog";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,7,&local_50);
  lVar2 = 0x1c0;
  if (*(uint *)(param_2 + 0x28) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0349a0a4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0349a0c0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cUnlockDialog";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,8,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_2 + 0x30) + (ulong)(8 < *(uint *)(param_2 + 0x28)) * 0x200);
  puVar4[2] = &LAB_0349a2e4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0349a2f4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDisappear";
  local_50 = puVar1;
  FUN_03ebaf40(param_2,9,&local_50);
  lVar2 = 0x240;
  if (*(uint *)(param_2 + 0x28) < 10) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar2);
  puVar4[2] = &LAB_0349a360;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2e328;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_0349a508;
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

