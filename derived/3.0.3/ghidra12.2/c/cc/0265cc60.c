
long FUN_0265cc60(uint param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  if (9 < param_1) {
    return 0;
  }
  if (DAT_05574040 != 0) {
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
      uVar9 = (uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar9 = 0;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x140) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (uVar9 != 0) {
      if ((*(long **)(lVar4 + 0x140) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x140), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      lVar7 = 0;
      uVar9 = 0xffffffff;
      plVar8 = (long *)(*(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120) + 0x2fa4);
      do {
        if ((*(int *)((long)plVar8 + -4) == *param_2) &&
           ((*(long *)(param_2 + 1) == *plVar8 && *(long *)(param_2 + 3) == plVar8[1]) &&
            param_2[5] == (int)plVar8[2])) {
          uVar9 = (uint)lVar7;
          break;
        }
        lVar7 = lVar7 + 1;
        plVar8 = plVar8 + 0x2b;
      } while (lVar7 != 0xa0);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x140) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if ((uVar9 < 0xa0) && (DAT_05574040 != 0)) {
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
        return lVar4 + (ulong)param_1 * 0x10798 + (ulong)uVar9 * 0xa8 + 0x39c0;
      }
    }
  }
  return 0;
}

