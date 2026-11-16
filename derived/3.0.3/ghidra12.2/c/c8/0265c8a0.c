
long FUN_0265c8a0(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) {
    return 0;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return 0;
    }
    lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar6 = lVar6 + (ulong)param_1 * 0x10798;
  if ((*(long **)(lVar6 + 0x140) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x140), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120));
  uVar8 = (ulong)*pbVar1;
  if ((uVar8 < 0x23) && (bVar3 = pbVar1[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar8])) {
    uVar5 = (uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(bVar3 & 0x1f) & 1;
  }
  else {
    uVar5 = 0;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x140) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x140) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (uVar5 != 0) {
    if ((*(long **)(lVar6 + 0x140) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x140), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    uVar5 = FUN_026b318c(*(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120),param_2);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x140) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x140) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (-1 < (int)uVar5) {
      lVar2 = lVar6 + 0x188 + (ulong)uVar5 * 0x700;
      if (7 < uVar5) {
        lVar2 = lVar6 + 0x188;
      }
      return lVar2;
    }
  }
  return 0;
}

