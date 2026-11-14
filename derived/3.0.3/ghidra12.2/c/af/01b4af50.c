
uint FUN_01b4af50(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  uVar2 = 1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar3 != 0) {
    lVar5 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar5 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar5 + 0x8528) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x8528), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_0282ff28(*(long *)(lVar5 + 0x8510) + *(long *)(lVar5 + 0x8508));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar5 + 0x8528) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x8528) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

