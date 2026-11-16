
void FUN_028191c0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 2) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar3 + 0xe7140) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar3 + 0xe7140), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  if (*param_1 < 8) {
    plVar7 = (long *)(*(long *)(lVar3 + 0xe7128) + *(long *)(lVar3 + 0xe7120) +
                     (ulong)*param_1 * 0x48);
    bVar1 = *plVar7 != 0 || plVar7[1] != 0;
  }
  else {
    bVar1 = false;
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0xe7140) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0xe7140) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (!bVar1) {
    return;
  }
  FUN_0266de10(*param_1);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  lVar6 = *(long *)(lVar3 + 0xe7140);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar3 + 0xe7140);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar6 == 0) goto LAB_0281938c;
    }
    plVar7 = *(long **)(lVar6 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_58 = *(long *)(lVar3 + 0xe7120);
      local_50 = *(undefined8 *)(lVar3 + 0xe7128);
      uStack_48 = 0x240;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_0281938c:
  if (((*param_1 < 8) && (*(long *)(param_1 + 2) != 0 || *(long *)(param_1 + 4) != 0)) &&
     (plVar7 = (long *)(*(long *)(lVar3 + 0xe7128) + *(long *)(lVar3 + 0xe7120) +
                       (ulong)*param_1 * 0x48), *plVar7 != 0 || plVar7[1] != 0)) {
    lVar6 = *(long *)(param_1 + 4);
    *plVar7 = *(long *)(param_1 + 2);
    plVar7[1] = lVar6;
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0xe7140) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0xe7140) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

