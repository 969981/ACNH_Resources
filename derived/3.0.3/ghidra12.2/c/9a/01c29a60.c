
bool FUN_01c29a60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  if (DAT_05574040 == 0) {
LAB_01c29afc:
    bVar4 = false;
  }
  else {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar6 == 0) goto LAB_01c29afc;
      lVar6 = lVar6 + 0x70;
    }
    else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
            (lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar6 == 0)) goto LAB_01c29afc;
    if ((*(long **)(lVar6 + 0x1bf1b8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0x1bf1b8), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 ^ 1;
    }
    lVar9 = 0;
    uVar10 = 0;
    lVar1 = *(long *)(lVar6 + 0x1bf1a0) + *(long *)(lVar6 + 0x1bf198);
    do {
      uVar7 = FUN_0277d7b4(lVar1 + 0x1004 + ((long)((ulong)uVar10 << 0x20) >> 0x1d),param_2);
      if ((uVar7 & 1) != 0) {
        pbVar2 = (byte *)(lVar1 + 0x3004);
        pbVar3 = pbVar2 + lVar9;
        if (0x3ff < (uint)lVar9) {
          pbVar3 = pbVar2;
        }
        if (*pbVar3 < 0xfe) {
          bVar4 = (*pbVar3 >> 6 | 0xfffffffc) < 0xfffffffe;
          if ((uVar5 & 1) != 0) {
            return bVar4;
          }
          goto LAB_01c29ba8;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (uVar10 != 0x400);
    bVar4 = false;
    if ((uVar5 & 1) == 0) {
LAB_01c29ba8:
      if ((*(long *)(lVar6 + 0x1bf1b8) != 0) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x1bf1b8) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
  }
  return bVar4;
}

