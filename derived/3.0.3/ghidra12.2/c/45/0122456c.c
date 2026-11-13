
void FUN_0122456c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_55 = 0;
  plVar3 = (long *)(param_1 + 8);
  local_158 = 0x100;
  local_154[0] = 0;
  plVar2 = (long *)(param_1 + 0x82a0);
  local_168 = &PTR_LAB_048f9a70;
  puStack_160 = local_154;
  uVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_168,1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar3 + 0x108))(plVar3,&local_168);
  }
  local_55 = 0;
  plVar3 = (long *)(param_1 + 0x7d20);
  local_158 = 0x100;
  local_154[0] = 0;
  local_168 = &PTR_LAB_048f9a70;
  puStack_160 = local_154;
  uVar1 = (**(code **)(*(long *)(param_1 + 0x7d20) + 0xf0))(plVar3,&local_168,1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar3 + 0x108))(plVar3,&local_168);
  }
  local_55 = 0;
  local_158 = 0x100;
  local_154[0] = 0;
  local_168 = &PTR_LAB_048f9a70;
  puStack_160 = local_154;
  uVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2,&local_168,1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar2 + 0x108))(plVar2,&local_168);
  }
  plVar2 = (long *)(param_1 + 0x8390);
  local_55 = 0;
  local_158 = 0x100;
  local_154[0] = 0;
  local_168 = &PTR_LAB_048f9a70;
  puStack_160 = local_154;
  uVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2,&local_168,1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*plVar2 + 0x108))(plVar2,&local_168);
  }
  return;
}

