
undefined8 FUN_007e8c2c(short *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_22 [2];
  
  if ((*param_1 != DAT_04cb6038) && (*(long *)(param_1 + 8) != 0 || *(long *)(param_1 + 4) != 0)) {
    FUN_007ef010(auStack_22,param_1);
    lVar1 = FUN_0264f270(auStack_22);
    if (lVar1 != 0) {
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
        return *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 8);
      }
      uVar3 = (**(code **)*puVar2)();
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 8);
      if ((uVar3 & 1) == 0) {
        return uVar4;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return uVar4;
      }
      puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar2 == (undefined8 *)0x0) {
        return uVar4;
      }
      (**(code **)*puVar2)();
      return uVar4;
    }
  }
  return 0;
}

