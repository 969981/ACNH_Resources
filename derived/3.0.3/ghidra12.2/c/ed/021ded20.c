
undefined8 FUN_021ded20(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar4 + 0x1a0da0) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1a0da0), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  uVar1 = *(uint *)(*(long *)(lVar4 + 0x1a0d88) + *(long *)(lVar4 + 0x1a0d80));
  if (2 < uVar1) {
    uVar1 = 0;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar1);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1a0da0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1a0da0) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((int)uVar1 < 2) {
    if ((*(long **)(lVar4 + 0xe7610) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xe7610), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "BuiltTownOffice";
    iVar3 = FUN_0273ec70(*(long *)(lVar4 + 0xe75f8) + *(long *)(lVar4 + 0xe75f0),&local_40);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0xe7610) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xe7610) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

