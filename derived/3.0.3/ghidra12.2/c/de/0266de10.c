
undefined8 FUN_0266de10(int param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 local_3c;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_1 == -1) {
    return 0;
  }
  local_3c = 0;
  uVar3 = FUN_02b5e950(&local_3c,param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_38 = CONCAT44(local_38._4_4_,local_3c);
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
  }
  if (7 < (uint)local_38) {
    return 0;
  }
  lVar2 = lVar4 + 0x119228 + (local_38 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_38) {
    lVar2 = lVar4 + 0x119228;
  }
  puVar1 = (ulong *)(lVar2 + 0xf9d8);
  lVar4 = *(long *)(lVar2 + 0xf9f8);
  if (lVar4 == 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar2 + 0xf9e0) + *puVar1);
    *(undefined8 *)((long)puVar6 + 5) = 0;
    *puVar6 = 0;
    *(undefined1 *)((long)puVar6 + 0xd) = 0x1e;
    return 1;
  }
  if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
    lVar4 = *(long *)(lVar2 + 0xf9f8);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar4 == 0) goto LAB_0266df64;
  }
  plVar5 = *(long **)(lVar4 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_38 = *puVar1;
    local_30 = *(undefined8 *)(lVar2 + 0xf9e0);
    uStack_28 = 0xe;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_0266df64:
  puVar6 = (undefined8 *)(*(long *)(lVar2 + 0xf9e0) + *puVar1);
  *(undefined8 *)((long)puVar6 + 5) = 0;
  *puVar6 = 0;
  *(undefined1 *)((long)puVar6 + 0xd) = 0x1e;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0xf9f8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0xf9f8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return 1;
}

