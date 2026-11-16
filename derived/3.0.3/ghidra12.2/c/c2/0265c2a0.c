
long FUN_0265c2a0(uint param_1)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) {
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
  lVar5 = lVar5 + (ulong)param_1 * 0x10798;
  lVar1 = lVar5 + 0x118;
  if ((*(long **)(lVar5 + 0x140) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x140), puVar6 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar6)();
    uVar4 = uVar4 ^ 1;
  }
  pbVar2 = (byte *)(*(long *)(lVar5 + 0x128) + *(long *)(lVar5 + 0x120));
  uVar7 = (ulong)*pbVar2;
  if ((uVar7 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar7])) {
    uVar8 = (uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(bVar3 & 0x1f) & 1;
  }
  else {
    uVar8 = 0;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x140) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (uVar8 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}

