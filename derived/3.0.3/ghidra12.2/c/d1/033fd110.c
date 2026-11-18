
undefined4 FUN_033fd110(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_34,1);
  uVar7 = 0;
  if (lVar3 != 0) {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x2c600) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x2c600), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar7 = 0;
    iVar8 = -1;
    do {
      if (*(long **)(lVar6 + 0x2c600) == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)**(long **)(lVar6 + 0x2c600);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = (**(code **)*puVar4)();
        }
      }
      lVar3 = *(long *)(lVar6 + 0x2c5e8) + *(long *)(lVar6 + 0x2c5e0);
      if (((lVar3 != 0) && (uVar1 = iVar8 + (uint)*(ushort *)(lVar3 + 800), uVar1 < 100)) &&
         ((*(ushort *)(lVar3 + (ulong)uVar1 * 8) & 1) != 0)) {
        uVar7 = 1;
      }
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x2c600) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x2c600) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != -0x65);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x2c600) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x2c600) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar7;
}

