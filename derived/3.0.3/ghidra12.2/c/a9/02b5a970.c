
undefined8 FUN_02b5a970(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *local_38;
  char *pcStack_30;
  uint local_24;
  
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 == 0) {
LAB_02b5aa00:
    uVar5 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_02b5aa00;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_02b5aa00;
    if ((*(long **)(lVar3 + 0x1bf1b8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1bf1b8), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar5 = *(uint *)(*(long *)(lVar3 + 0x1bf1a0) + *(long *)(lVar3 + 0x1bf198));
    if (5 < uVar5) {
      uVar5 = 0;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1bf1b8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf1b8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  local_24 = uVar5;
  if (uVar5 == 2) {
    pcStack_30 = "MuseumConstruction1";
  }
  else {
    if ((uVar5 != 3) && (uVar5 != 4)) {
      return 0;
    }
    if (uVar5 == 4) {
      local_38 = PTR_DAT_04bb2020 + 0x10;
      pcStack_30 = "MuseumConstruction3";
      iVar2 = FUN_0273ea30(&local_38);
      goto joined_r0x02b5aad8;
    }
    if (uVar5 != 3) {
      return 0;
    }
    pcStack_30 = "MuseumConstruction2";
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  iVar2 = FUN_0273ea30(&local_38);
joined_r0x02b5aad8:
  if (iVar2 < 1) {
    return 0;
  }
  return 1;
}

