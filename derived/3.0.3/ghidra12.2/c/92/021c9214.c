
bool FUN_021c9214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    return false;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return false;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return false;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return false;
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
    return false;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HgsCloseness";
  iVar3 = FUN_0274bce0(param_3,&local_40);
  return 10 < iVar3;
}

