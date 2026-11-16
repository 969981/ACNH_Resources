
void FUN_0266d0a0(undefined4 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  if (7 < (uint)local_48) {
    return;
  }
  lVar1 = lVar4 + 0x119228 + (local_48 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_48) {
    lVar1 = lVar4 + 0x119228;
  }
  lVar4 = *(long *)(lVar1 + 0x28);
  if (lVar4 == 0) {
    FUN_027f6200(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),param_1);
    return;
  }
  if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
    lVar4 = *(long *)(lVar1 + 0x28);
    uVar2 = uVar2 & 0xffffffff;
    if (lVar4 == 0) goto LAB_0266d1b8;
  }
  plVar3 = *(long **)(lVar4 + 0x20);
  if (plVar3 != (long *)0x0) {
    local_48 = *(ulong *)(lVar1 + 8);
    uStack_40 = *(undefined8 *)(lVar1 + 0x10);
    local_38 = 0x28a28;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_0266d1b8:
  FUN_027f6200(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),param_1);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

