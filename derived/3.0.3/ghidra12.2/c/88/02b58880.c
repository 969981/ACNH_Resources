
bool FUN_02b58880(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb46b0;
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
LAB_02b58914:
    uVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b58914;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b58914;
    if ((*(long **)(lVar4 + 0x1a0b70) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1a0b70), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar6 = *(uint *)(*(long *)(lVar4 + 0x1a0b58) + *(long *)(lVar4 + 0x1a0b50));
    if (3 < uVar6) {
      uVar6 = 0;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1a0b70) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1a0b70) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar6);
  if (uVar6 == 2) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MarketConstruction2";
    iVar3 = FUN_0273ea30(&local_40);
    if (0 < iVar3) {
      return false;
    }
  }
  lVar4 = *(long *)puVar1;
  if (lVar4 == 0) {
LAB_02b589d0:
    uVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b589d0;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b589d0;
    if ((*(long **)(lVar4 + 0x1a0b70) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1a0b70), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar6 = *(uint *)(*(long *)(lVar4 + 0x1a0b58) + *(long *)(lVar4 + 0x1a0b50));
    if (3 < uVar6) {
      uVar6 = 0;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1a0b70) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1a0b70) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return 1 < (int)uVar6;
}

