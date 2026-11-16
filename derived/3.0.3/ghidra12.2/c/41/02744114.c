
uint FUN_02744114(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 + 0x70;
      }
      goto LAB_02744188;
    }
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
      goto LAB_02744188;
    }
  }
  lVar5 = 0;
LAB_02744188:
  if ((*(long **)(lVar5 + 0x205228) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x205228), puVar6 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar6)();
    uVar2 = uVar2 ^ 1;
  }
  bVar1 = *param_1;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  uVar3 = FUN_02744210(*(long *)(lVar5 + 0x205210) + *(long *)(lVar5 + 0x205208),param_2,
                       (int)(char)bVar1);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x205228) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x205228) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return uVar3 & 1;
}

