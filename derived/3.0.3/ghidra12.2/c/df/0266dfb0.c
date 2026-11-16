
void FUN_0266dfb0(undefined4 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = CONCAT44(local_38._4_4_,param_1);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  if (7 < (uint)local_38) {
    return;
  }
  lVar2 = lVar3 + 0x119228 + (local_38 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_38) {
    lVar2 = lVar3 + 0x119228;
  }
  lVar3 = *(long *)(lVar2 + 0xf9f8);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      lVar3 = *(long *)(lVar2 + 0xf9f8);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar3 == 0) goto LAB_0266e0ac;
    }
    plVar5 = *(long **)(lVar3 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_38 = *(ulong *)(lVar2 + 0xf9d8);
      local_30 = *(undefined8 *)(lVar2 + 0xf9e0);
      uStack_28 = 0xe;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
    }
  }
LAB_0266e0ac:
  puVar1 = (undefined1 *)(*(long *)(lVar2 + 0xf9e0) + *(ulong *)(lVar2 + 0xf9d8));
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  puVar1[0xd] = 0x1e;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0xf9f8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0xf9f8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

