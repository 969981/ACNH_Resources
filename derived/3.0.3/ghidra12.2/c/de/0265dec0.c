
long FUN_0265dec0(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) {
    return 0;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar4 = lVar4 + (ulong)param_1 * 0x10798;
  if ((*(long **)(lVar4 + 0x140) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x140), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120));
  uVar6 = (ulong)*pbVar1;
  if ((uVar6 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar6])) {
    uVar7 = (uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar2 & 0x1f) & 1;
  }
  else {
    uVar7 = 0;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x140) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar4 = lVar4 + 0xf928;
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  return lVar4;
}

