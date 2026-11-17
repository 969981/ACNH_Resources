
/* WARNING: Removing unreachable block (ram,0x02f20028) */

undefined8 FUN_02f1fe9c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(*(long *)(param_1 + 0x210) + 0x6e0) != 0) && (DAT_05574040 != 0)) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar2 != 0) {
        lVar2 = lVar2 + 0x70;
        goto LAB_02f1ff10;
      }
    }
    else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
            (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0)) {
LAB_02f1ff10:
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
                    /* WARNING: Could not recover jumptable at 0x02f2001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK_02f20020 + (ulong)DAT_04181369 * 4))();
      return uVar3;
    }
  }
  return 0;
}

