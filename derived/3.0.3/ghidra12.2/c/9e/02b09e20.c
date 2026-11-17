
/* WARNING: Removing unreachable block (ram,0x02b09fc8) */

undefined8 FUN_02b09e20(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      lVar4 = FUN_02643020();
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 0xe0;
      goto LAB_02b09fbc;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x300);
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = lVar5 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar5 == 0) {
      return 0;
    }
  }
  if (7 < uVar3) {
    return 0;
  }
  lVar4 = lVar5 + 0x119228 + (ulong)uVar3 * 0xfa08;
  if (7 < uVar3) {
    lVar4 = lVar5 + 0x119228;
  }
  lVar4 = lVar4 + 0x1df8;
LAB_02b09fbc:
  if (lVar4 == 0) {
    return 0;
  }
  uVar7 = 1;
  if ((*(long **)(lVar4 + 0x1ec8) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x1ec8), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  bVar2 = *(byte *)(*(long *)(lVar4 + 0x1eb0) + *(long *)(lVar4 + 0x1ea8) + 0x1f);
  if (((bVar2 >> 1 & 1) != 0) && ((bVar2 >> 3 & 1) != 0)) {
    uVar7 = 0;
  }
  if ((uVar3 & 1) != 0) {
    return uVar7;
  }
  if (*(long *)(lVar4 + 0x1ec8) == 0) {
    return uVar7;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x1ec8) + 8);
  if (puVar6 == (undefined8 *)0x0) {
    return uVar7;
  }
  (**(code **)*puVar6)();
  return uVar7;
}

