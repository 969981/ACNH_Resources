
undefined8 FUN_016cabec(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  if (param_1 == (undefined2 *)0x0) {
    return 0;
  }
  uVar1 = param_2 - 8;
  if ((int)param_2 < 8) {
    uVar1 = param_2;
  }
  if ((7 < uVar1) || (DAT_05574040 == 0)) {
    return 0;
  }
  plVar5 = *(long **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    plVar5 = (long *)*plVar5;
  }
  else {
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    plVar5 = (long *)plVar5[0x26];
    if (plVar5 == (long *)0x0) {
      return 0;
    }
  }
  lVar3 = (**(code **)(*plVar5 + 0x38))();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
    if (DAT_05574040 == 0) {
      return 0;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    puVar7 = &LAB_002057b0 + lVar3 + (ulong)uVar1 * 0xc40;
    if (7 < (int)param_2) {
      puVar7 = (undefined1 *)(lVar3 + (ulong)uVar1 * 0xc40 + 0x20b9e8);
    }
  }
  else {
    iVar2 = FUN_0252d29c();
    if (DAT_05574040 == 0) {
      return 0;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    puVar7 = (undefined1 *)(lVar3 + (long)iVar2 * 0xcb0 + 0x211c58);
  }
  if ((*(long **)(puVar7 + 0x6b8) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(puVar7 + 0x6b8), puVar6 == (undefined8 *)0x0)) {
    *param_1 = *(undefined2 *)(*(long *)(puVar7 + 0x6a0) + *(long *)(puVar7 + 0x698));
LAB_016cade0:
    plVar5 = *(long **)(puVar7 + 0x6b8);
LAB_016cade4:
    if (plVar5 == (long *)0x0) goto LAB_016cae34;
  }
  else {
    uVar4 = (**(code **)*puVar6)();
    *param_1 = *(undefined2 *)(*(long *)(puVar7 + 0x6a0) + *(long *)(puVar7 + 0x698));
    plVar5 = *(long **)(puVar7 + 0x6b8);
    if ((uVar4 & 1) == 0) goto LAB_016cade4;
    if (plVar5 == (long *)0x0) goto LAB_016cae34;
    if ((undefined8 *)plVar5[1] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar5[1])();
      goto LAB_016cade0;
    }
  }
  if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
    uVar4 = (*(code *)**(undefined8 **)*plVar5)();
    *(int *)(param_1 + 2) =
         (int)*(char *)(*(long *)(puVar7 + 0x6a0) + *(long *)(puVar7 + 0x698) + 2);
    if ((uVar4 & 1) == 0) {
      return 1;
    }
    if (*(long *)(puVar7 + 0x6b8) == 0) {
      return 1;
    }
    puVar6 = *(undefined8 **)(*(long *)(puVar7 + 0x6b8) + 8);
    if (puVar6 == (undefined8 *)0x0) {
      return 1;
    }
    (**(code **)*puVar6)();
    return 1;
  }
LAB_016cae34:
  *(int *)(param_1 + 2) = (int)*(char *)(*(long *)(puVar7 + 0x6a0) + *(long *)(puVar7 + 0x698) + 2);
  return 1;
}

