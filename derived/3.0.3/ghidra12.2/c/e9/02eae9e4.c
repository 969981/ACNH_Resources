
void FUN_02eae9e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_2 + 0x5c) == '\0') {
    uVar4 = FUN_027aeb20(param_2);
    if (((uVar4 & 1) == 0) && (*(long *)(param_2 + 0x378) == 0)) {
      uVar5 = 7;
    }
    else {
      if ((*(char *)(param_2 + 0x5c) != '\0') ||
         ((uVar4 = FUN_027aeb20(param_2), (uVar4 & 1) != 0 || (*(long *)(param_2 + 0x378) == 0))))
      goto LAB_02eaea2c;
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x1360) = uVar5;
  }
LAB_02eaea2c:
  FUN_027adf94(param_1 + 0x13a0,param_2);
  *(undefined1 *)(param_1 + 0x146c) = *(undefined1 *)(param_2 + 0xcc);
  uVar7 = *(undefined8 *)(param_2 + 0xe6);
  uVar6 = *(undefined8 *)(param_2 + 0xd6);
  uVar1 = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0x146e) = *(undefined8 *)(param_2 + 0xce);
  uVar8 = *(undefined8 *)(param_2 + 0x10e);
  uVar9 = *(undefined8 *)(param_2 + 0x116);
  uVar2 = *(undefined8 *)(param_2 + 0x126);
  *(undefined8 *)(param_1 + 0x14be) = *(undefined8 *)(param_2 + 0x11e);
  *(undefined8 *)(param_1 + 0x14c6) = uVar2;
  *(undefined8 *)(param_1 + 0x14ae) = uVar8;
  *(undefined8 *)(param_1 + 0x14b6) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0xee);
  uVar2 = *(undefined8 *)(param_2 + 0xf6);
  uVar9 = *(undefined8 *)(param_2 + 0xfe);
  uVar3 = *(undefined8 *)(param_2 + 0x106);
  *(undefined8 *)(param_1 + 0x1486) = uVar7;
  *(undefined8 *)(param_1 + 0x1476) = uVar6;
  *(undefined8 *)(param_1 + 0x147e) = uVar1;
  *(undefined8 *)(param_1 + 0x148e) = uVar8;
  *(undefined8 *)(param_1 + 0x1496) = uVar2;
  *(undefined8 *)(param_1 + 0x149e) = uVar9;
  *(undefined8 *)(param_1 + 0x14a6) = uVar3;
  memcpy((void *)(param_1 + 0x14ce),(void *)(param_2 + 0x12e),0x1e0);
  uVar6 = *(undefined8 *)(param_2 + 0x316);
  uVar8 = *(undefined8 *)(param_2 + 0x326);
  uVar9 = *(undefined8 *)(param_2 + 0x30e);
  *(undefined8 *)(param_1 + 0x16be) = *(undefined8 *)(param_2 + 0x31e);
  *(undefined8 *)(param_1 + 0x16c6) = uVar8;
  *(undefined8 *)(param_1 + 0x16ae) = uVar9;
  *(undefined8 *)(param_1 + 0x16b6) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x336);
  uVar8 = *(undefined8 *)(param_2 + 0x346);
  uVar9 = *(undefined8 *)(param_2 + 0x32e);
  *(undefined8 *)(param_1 + 0x16de) = *(undefined8 *)(param_2 + 0x33e);
  *(undefined8 *)(param_1 + 0x16e6) = uVar8;
  *(undefined8 *)(param_1 + 0x16ce) = uVar9;
  *(undefined8 *)(param_1 + 0x16d6) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x356);
  uVar8 = *(undefined8 *)(param_2 + 0x366);
  uVar9 = *(undefined8 *)(param_2 + 0x34e);
  *(undefined8 *)(param_1 + 0x16fe) = *(undefined8 *)(param_2 + 0x35e);
  *(undefined8 *)(param_1 + 0x1706) = uVar8;
  *(undefined8 *)(param_1 + 0x16ee) = uVar9;
  *(undefined8 *)(param_1 + 0x16f6) = uVar6;
  *(undefined2 *)(param_1 + 0x170e) = *(undefined2 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 0x1710) = *(undefined2 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(param_2 + 0x374);
  *(undefined8 *)(param_1 + 0x1718) = *(undefined8 *)(param_2 + 0x378);
  *(undefined8 *)(param_1 + 0x1720) = *(undefined8 *)(param_2 + 0x380);
  *(undefined8 *)(param_1 + 0x1728) = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x1730) = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x1738) = *(undefined8 *)(param_2 + 0x398);
  uVar8 = *(undefined8 *)(param_2 + 0x3a8);
  uVar6 = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined8 *)(param_1 + 0x1740) = uVar6;
  *(undefined8 *)(param_1 + 0x1748) = uVar8;
  *(undefined8 *)(param_1 + 0x1370) = *(undefined8 *)(param_2 + 0x380);
  *(undefined8 *)(param_1 + 0x1378) = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x1398) = *(undefined8 *)(param_2 + 0x378);
  return;
}

