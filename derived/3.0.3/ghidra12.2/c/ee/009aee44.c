
void FUN_009aee44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 8;
  FUN_03ebac90(lVar1,7,0,0,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::Wait";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar5[2] = &LAB_009af154;
  puVar5[3] = 0;
  puVar5[4] = &LAB_009af158;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_009af15c;
  puVar5[7] = 0;
  pcStack_48 = "State::RecordWait";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar5[4] = &LAB_009af164;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_009af160;
  puVar5[3] = 0;
  puVar5[6] = &LAB_009af184;
  puVar5[7] = 0;
  pcStack_48 = "State::Record";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar5[4] = &LAB_009af1a0;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_009af188;
  puVar5[3] = 0;
  puVar5[6] = &LAB_009b02dc;
  puVar5[7] = 0;
  pcStack_48 = "State::RecordEnd";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,3,&local_50);
  lVar3 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  puVar5[2] = &LAB_009b02e0;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_009b0b10;
  puVar5[5] = 0;
  puVar5[6] = &LAB_009b0b1c;
  puVar5[7] = 0;
  pcStack_48 = "State::Read";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,4,&local_50);
  puVar5 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(4 < *(uint *)(param_1 + 0x30)) * 0x100);
  puVar5[4] = &LAB_009b0b4c;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[2] = &LAB_009b0b20;
  puVar5[3] = 0;
  puVar5[6] = &LAB_009b0b58;
  puVar5[7] = 0;
  pcStack_48 = "State::Play";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,5,&local_50);
  lVar3 = 0x140;
  if (*(uint *)(param_1 + 0x30) < 6) {
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar3);
  puVar5[2] = &LAB_009b0b5c;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[4] = &LAB_009b0b70;
  puVar5[5] = 0;
  puVar5[6] = &LAB_009b0bb8;
  puVar5[7] = 0;
  pcStack_48 = "State::Suspend";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,6,&local_50);
  lVar1 = 0x180;
  if (*(uint *)(param_1 + 0x30) < 7) {
    lVar1 = 0;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar1);
  puVar5[2] = &LAB_009b0bbc;
  puVar5[3] = 0;
  *puVar5 = &PTR_LAB_0492c740;
  puVar5[1] = param_1;
  puVar5[6] = &LAB_009b0bc4;
  puVar5[7] = 0;
  puVar5[4] = &LAB_009b0bc0;
  puVar5[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar4) {
      uVar4 = 0;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar4 * 0x40);
    if (puVar5 != (undefined8 *)0x0) {
      (*(code *)*puVar5)();
    }
  }
  return;
}

