
long FUN_0265ca50(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (9 < param_1) {
    return 0;
  }
  if (DAT_05574040 != 0) {
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
    if ((*(long **)(lVar5 + 0x140) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x140), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar5 + 0x128) + *(long *)(lVar5 + 0x120));
    uVar7 = (ulong)*pbVar1;
    if ((uVar7 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar7])) {
      uVar4 = (uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar4 = 0;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x140) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (uVar4 != 0) {
      if ((*(long **)(lVar5 + 0x140) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x140), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      uVar4 = FUN_026b318c(*(long *)(lVar5 + 0x128) + *(long *)(lVar5 + 0x120),param_2);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x140) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      if ((uVar4 < 8) && (DAT_05574040 != 0)) {
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
        return lVar5 + (ulong)param_1 * 0x10798 + (ulong)uVar4 * 0x700 + 0x188;
      }
    }
  }
  return 0;
}

