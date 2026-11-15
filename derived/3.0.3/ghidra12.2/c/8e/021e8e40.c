
void FUN_021e8e40(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  ulong local_18;
  
  if (DAT_05574040 == 0) {
LAB_021e8ed4:
    local_18 = 0x8a5;
    FUN_0277d4ac(&local_18);
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) goto LAB_021e8ed4;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar3 == 0)) goto LAB_021e8ed4;
    if ((*(long **)(lVar3 + 0x1c24e8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x1c24e8), puVar5 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar5)();
      uVar1 = uVar1 ^ 1;
    }
    local_18 = (ulong)*(ushort *)(*(long *)(lVar3 + 0x1c24d0) + *(long *)(lVar3 + 0x1c24c8) + 0x900)
    ;
    FUN_0277d4ac(&local_18);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1c24e8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1c24e8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  iVar2 = FUN_0277d6c4(&local_18);
  if (iVar2 == 0x8a6) {
    uVar4 = 0x1df7;
  }
  else {
    iVar2 = FUN_0277d6c4(&local_18);
    uVar4 = 0x1f61;
    if (iVar2 != 0x8ef) {
      uVar4 = 0x1f62;
    }
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac(param_1);
  return;
}

