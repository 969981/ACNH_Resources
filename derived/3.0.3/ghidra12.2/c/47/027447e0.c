
void FUN_027447e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (DAT_05574040 != 0) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = lVar1 + 0x70;
      }
      goto LAB_02744854;
    }
    if (puVar4 != (undefined8 *)0x0) {
      lVar2 = 0;
      if ((long *)puVar4[0x26] != (long *)0x0) {
        lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      }
      goto LAB_02744854;
    }
  }
  lVar2 = 0;
LAB_02744854:
  if ((*(long **)(lVar2 + 0x205228) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar2 + 0x205228), puVar4 == (undefined8 *)0x0)) {
    FUN_027448f0(param_1,*(long *)(lVar2 + 0x205210) + *(long *)(lVar2 + 0x205208),param_2);
    return;
  }
  uVar3 = (**(code **)*puVar4)();
  FUN_027448f0(param_1,*(long *)(lVar2 + 0x205210) + *(long *)(lVar2 + 0x205208),param_2);
  if ((((uVar3 & 1) == 0) || (*(long *)(lVar2 + 0x205228) == 0)) ||
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x205228) + 8), puVar4 == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027448b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)();
  return;
}

