
undefined4 FUN_016c8e48(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  if (DAT_05574040 == 0) {
LAB_016c8edc:
    uVar2 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_016c8edc;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_016c8edc;
    if ((*(long **)(lVar3 + 0xe7610) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0xe7610), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "UnlockHotelItemFromLevel";
    uVar2 = FUN_0273ec70(*(long *)(lVar3 + 0xe75f8) + *(long *)(lVar3 + 0xe75f0),&local_40);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0xe7610) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0xe7610) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2;
}

