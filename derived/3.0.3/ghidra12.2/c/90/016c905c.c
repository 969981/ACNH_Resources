
bool FUN_016c905c(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_40;
  char *pcStack_38;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_016c90f4:
    uVar5 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_016c90f4;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 == 0)) goto LAB_016c90f4;
    if ((*(long **)(lVar6 + 0xe7610) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe7610), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "UnlockHotelItemFromLevel";
    uVar5 = FUN_0273ec70(*(long *)(lVar6 + 0xe75f8) + *(long *)(lVar6 + 0xe75f0),&local_40);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0xe7610) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7610) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  bVar1 = param_1 - 0x137U < 2 && -1 < (int)uVar5;
  bVar3 = param_1 == 0x139 || bVar1;
  bVar2 = param_1 == 0x13a || bVar3;
  if (2 < uVar5) {
    bVar2 = param_1 == 0x13b || bVar2;
  }
  if (uVar5 != 1) {
    bVar3 = bVar2;
  }
  if (0 < (int)uVar5) {
    bVar1 = bVar3;
  }
  return bVar1;
}

