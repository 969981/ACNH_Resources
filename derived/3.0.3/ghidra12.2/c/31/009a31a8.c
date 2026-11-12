
void FUN_009a31a8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  puVar6 = PTR_DAT_04bb21f8;
  local_6d = 0;
  puVar1 = (undefined8 *)(param_1 + 0x1608a0);
  local_170 = 0x100;
  plVar2 = (long *)(param_1 + 0x75d20);
  uVar8 = *puVar1;
  plVar3 = (long *)(param_1 + 0x3b238);
  local_16c[0] = 0;
  puVar4 = PTR_DAT_04bb21f8 + 0x10;
  local_180 = puVar4;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*(long *)(param_1 + 0x750) + 0xf0))(param_1 + 0x750,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x750,&local_180,uVar8);
  }
  local_6d = 0;
  uVar8 = *puVar1;
  plVar5 = (long *)(param_1 + 0xb0808);
  local_170 = 0x100;
  local_16c[0] = 0;
  local_180 = puVar4;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(plVar3,&local_180,uVar8);
  }
  local_6d = 0;
  uVar8 = *puVar1;
  plVar3 = (long *)(param_1 + 0xeb2f0);
  puVar4 = puVar6 + 0x10;
  local_170 = 0x100;
  local_16c[0] = 0;
  local_180 = puVar4;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*plVar2 + 0xf0))(plVar2,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(plVar2,&local_180,uVar8);
  }
  local_6d = 0;
  uVar8 = *puVar1;
  plVar2 = (long *)(param_1 + 0x125dd8);
  local_170 = 0x100;
  local_16c[0] = 0;
  local_180 = puVar4;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(plVar5,&local_180,uVar8);
  }
  local_6d = 0;
  uVar8 = *puVar1;
  puVar6 = puVar6 + 0x10;
  local_170 = 0x100;
  local_16c[0] = 0;
  local_180 = puVar6;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(plVar3,&local_180,uVar8);
  }
  local_6d = 0;
  uVar8 = *puVar1;
  local_170 = 0x100;
  local_16c[0] = 0;
  local_180 = puVar6;
  puStack_178 = local_16c;
  uVar7 = (**(code **)(*plVar2 + 0xf0))(plVar2,&local_180,1);
  if ((uVar7 & 1) != 0) {
    FUN_03c27e60(plVar2,&local_180,uVar8);
  }
  return;
}

