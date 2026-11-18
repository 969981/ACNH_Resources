
void FUN_03483710(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  uVar5 = *(uint *)(param_3 + 0x280);
  iVar4 = -1;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_3 + 0x268))) {
    lVar2 = param_3 + 600;
    uVar1 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    iVar4 = -1;
    if ((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(param_3 + 0x26c), lVar2 != 0)) {
      iVar4 = *(int *)(lVar2 + 0x270);
    }
  }
  if (iVar4 == 0x75) {
    puVar3 = *(undefined8 **)(param_4 + 0x2f0);
    plVar6 = (long *)*puVar3;
    if (plVar6 != (long *)0x0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x158))(param_1,plVar6[1]);
      puVar3 = *(undefined8 **)(param_4 + 0x2f0);
    }
    plVar6 = (long *)puVar3[1 < *(uint *)(param_4 + 0x2e8)];
    if (plVar6 == (long *)0x0) {
      return;
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    param_1 = param_2;
  }
  else {
    plVar6 = *(long **)(*(long *)(param_4 + 0x2f0) + (ulong)(1 < *(uint *)(param_4 + 0x2e8)) * 8);
    if (plVar6 == (long *)0x0) {
      return;
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  }
  (**(code **)(plVar6[3] + 0x158))(param_1,plVar6[1]);
  return;
}

