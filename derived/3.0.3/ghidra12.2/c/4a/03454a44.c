
void FUN_03454a44(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_03ebac90(param_1,9,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar4[2] = FUN_03456b90;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03456c74;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPutFtr";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_03456c78;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03456c80;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPutFtrForInterior";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_03456ea0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03456eb0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPutUnitIcon";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,3,&local_40);
  lVar2 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
  puVar4[2] = &LAB_03457054;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03457060;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPutUnitIconForInterior";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,4,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar4[2] = &LAB_03457250;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_03457260;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cCreateRemakeUI";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,5,&local_40);
  lVar2 = 0x140;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
  puVar4[2] = &LAB_03457408;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0345740c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPrePutFtrRemake";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,6,&local_40);
  lVar2 = 0x180;
  if (*(uint *)(param_1 + 0x28) < 7) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
  puVar4[2] = &LAB_03457534;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0345753c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cPrePutFtrRemakeForInterior";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,7,&local_40);
  lVar2 = 0x1c0;
  if (*(uint *)(param_1 + 0x28) < 8) {
    lVar2 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
  puVar4[2] = &LAB_03457994;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_0345799c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_38 = "State::cSystemDialog";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,8,&local_40);
  puVar4 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(8 < *(uint *)(param_1 + 0x28)) * 0x200);
  puVar4[2] = &LAB_03457db0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b2afa8;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_03457e8c;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  return;
}

