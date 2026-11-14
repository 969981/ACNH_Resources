
ulong FUN_016d2514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar4 = FUN_016c91a4();
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar3 = FUN_027788b0(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_2);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (-1 < (int)uVar3) {
      lVar1 = lVar4 + 0x70 + (ulong)uVar3 * 0x428;
      if (0x13 < uVar3) {
        lVar1 = lVar4 + 0x70;
      }
      if ((*(long **)(lVar1 + 0x418) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x418), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar6 = FUN_0273b1b0(*(long *)(lVar1 + 0x400) + *(long *)(lVar1 + 0x3f8),param_3);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x418) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x418) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      return uVar6 & 0xffffffff;
    }
  }
  uVar6 = FUN_0273aef0(param_3);
  return uVar6;
}

