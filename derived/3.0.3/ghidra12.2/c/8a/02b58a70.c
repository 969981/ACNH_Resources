
bool FUN_02b58a70(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *local_30;
  char *pcStack_28;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
LAB_02b58b00:
    uVar6 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_02b58b00;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_02b58b00;
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
  if (uVar6 == 2) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "MarketConstruction2";
    iVar3 = FUN_0273ea30(&local_30);
    bVar1 = 0 < iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

