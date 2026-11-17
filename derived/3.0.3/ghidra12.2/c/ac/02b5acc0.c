
bool FUN_02b5acc0(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_30;
  char *pcStack_28;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 != 0) {
        lVar5 = lVar5 + 0x70;
LAB_02b5ad24:
        if ((*(long **)(lVar5 + 0x1a0da0) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1a0da0), puVar6 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar6)();
          uVar3 = uVar3 ^ 1;
        }
        uVar1 = *(uint *)(*(long *)(lVar5 + 0x1a0d88) + *(long *)(lVar5 + 0x1a0d80));
        if (2 < uVar1) {
          uVar1 = 0;
        }
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x1a0da0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1a0da0) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
        if (uVar1 != 0) {
          iVar4 = (uVar1 - 1 & 0xff) + 1;
          goto LAB_02b5ada4;
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0)) goto LAB_02b5ad24;
  }
  iVar4 = 1;
LAB_02b5ada4:
  if (iVar4 == 1) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "TailorConstruction1";
    iVar4 = FUN_0273ea30(&local_30);
    bVar2 = 0 < iVar4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

