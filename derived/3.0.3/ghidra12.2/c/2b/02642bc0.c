
/* WARNING: Removing unreachable block (ram,0x02642cc8) */
/* WARNING: Removing unreachable block (ram,0x02642c2c) */
/* WARNING: Removing unreachable block (ram,0x02642c84) */

undefined1  [16] FUN_02642bc0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int local_28;
  char local_24;
  
  if (DAT_05574040 == 0) {
    uVar3 = 0;
    uVar1 = 0;
    goto LAB_02642d18;
  }
  FUN_02703058(&local_28);
  if (local_24 == '\0') {
LAB_02642c54:
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    if (local_28 == 2) {
      if ((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x510) ^ 0xff) & 6) != 0)) {
        uVar1 = 0;
        uVar3 = 3;
        goto LAB_02642d18;
      }
      uVar3 = 3;
      puVar2 = (undefined8 *)(*(long *)(DAT_05574040 + 0x10) + 0x1a0);
    }
    else if (local_28 == 1) {
      if ((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50f) ^ 0xff) & 6) != 0)) {
        uVar1 = 0;
        uVar3 = 2;
        goto LAB_02642d18;
      }
      uVar3 = 2;
      puVar2 = (undefined8 *)(*(long *)(DAT_05574040 + 0x10) + 0x198);
    }
    else {
      if (local_28 != 0) goto LAB_02642c54;
      if ((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50e) ^ 0xff) & 6) != 0)) {
        uVar1 = 0;
        uVar3 = 1;
        goto LAB_02642d18;
      }
      uVar3 = 1;
      puVar2 = (undefined8 *)(*(long *)(DAT_05574040 + 0x10) + 400);
    }
    uVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
  }
LAB_02642d18:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

