
void FUN_02b4c000(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = CONCAT44(local_58._4_4_,param_1);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar6 == 0) {
      return;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return;
    }
    lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar6 == 0) {
      return;
    }
  }
  uVar8 = local_58;
  uVar4 = (uint)local_58;
  if (7 < (uint)local_58) {
    return;
  }
  local_58 = CONCAT44(local_58._4_4_,param_2);
  lVar2 = lVar6 + 0x119228 + (uVar8 & 0xffffffff) * 0xfa08;
  if (7 < uVar4) {
    lVar2 = lVar6 + 0x119228;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar6 == 0) {
      return;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return;
    }
    lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar6 == 0) {
      return;
    }
  }
  if (7 < (uint)local_58) {
    return;
  }
  lVar3 = lVar6 + 0x119228 + (local_58 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_58) {
    lVar3 = lVar6 + 0x119228;
  }
  if ((*(long *)(lVar3 + 0x28) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x10), puVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar9)();
    uVar4 = uVar4 ^ 1;
  }
  if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar9)();
    uVar5 = uVar5 ^ 1;
  }
  if ((*(long *)(lVar3 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *(ulong *)(lVar3 + 8);
    uStack_50 = *(undefined8 *)(lVar3 + 0x10);
    local_48 = 0x28a28;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  memcpy((void *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8)),
         (void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)),0x28a28);
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if ((*(long *)(lVar3 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *(ulong *)(lVar3 + 8);
    uStack_50 = *(undefined8 *)(lVar3 + 0x10);
    local_48 = 0x28a28;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  FUN_027f6200(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_2);
  lVar6 = *(long *)(lVar2 + 0x28);
  if (lVar6 == 0) {
    pvVar1 = (void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    memset(pvVar1,0,0x28a28);
    FUN_027f3760(pvVar1);
    goto LAB_02b4c2d4;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar8 = 0;
LAB_02b4c26c:
    plVar7 = *(long **)(lVar6 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_58 = *(ulong *)(lVar2 + 8);
      uStack_50 = *(undefined8 *)(lVar2 + 0x10);
      local_48 = 0x28a28;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
  else {
    uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0x28);
    uVar8 = uVar8 & 0xffffffff;
    if (lVar6 != 0) goto LAB_02b4c26c;
  }
  pvVar1 = (void *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
  memset(pvVar1,0,0x28a28);
  FUN_027f3760(pvVar1);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_02b4c2d4:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

