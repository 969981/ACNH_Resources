
undefined2 * FUN_021e88e0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  
  if ((param_1 == 0) || (lVar1 = FUN_0265c2a0(*(undefined4 *)(param_1 + 0x508)), lVar1 == 0)) {
    puVar4 = &DAT_05586008;
  }
  else if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
    puVar4 = (undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x13188);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    puVar4 = (undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x13188);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return puVar4;
}

