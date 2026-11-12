
void FUN_007e2f30(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_02b4bd40(DAT_04cb3388,0xffffffff);
  if ((((DAT_05574040 != 0) && (*(long *)(DAT_05574040 + 0x4c0) != 0)) &&
      (plVar2 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar2 != (long *)0x0)) &&
     (lVar3 = (**(code **)(*plVar2 + 0x38))(), lVar3 != 0)) {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      FUN_0080c3d0(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_1);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      FUN_0080c3d0(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_1);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  FUN_007e30b0();
  uVar1 = DAT_04cb3388;
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
        goto LAB_007e304c;
      }
    }
    else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 != 0)) {
LAB_007e304c:
      if (uVar1 < 8) {
        lVar6 = lVar3 + 0x119228 + (ulong)uVar1 * 0xfa08;
        if (7 < uVar1) {
          lVar6 = lVar3 + 0x119228;
        }
        goto LAB_007e305c;
      }
    }
  }
  lVar6 = 0;
LAB_007e305c:
  FUN_007e34d0(param_1,lVar6);
  FUN_007e3360(param_1);
  FUN_007e1f20(param_1);
  return;
}

