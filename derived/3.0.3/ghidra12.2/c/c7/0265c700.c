
undefined4 FUN_0265c700(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((param_1 < 10) && (DAT_05574040 != 0)) {
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
      uVar8 = (uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(bVar2 & 0x1f) & 1;
    }
    else {
      uVar8 = 0;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x140) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (uVar8 != 0) {
      if ((*(long **)(lVar5 + 0x140) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x140), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      uVar4 = FUN_02749340(*(long *)(lVar5 + 0x128) + *(long *)(lVar5 + 0x120) + 0x1267c,param_2);
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      if (*(long *)(lVar5 + 0x140) == 0) {
        return uVar4;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x140) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return uVar4;
      }
      (**(code **)*puVar6)();
      return uVar4;
    }
  }
  return 0;
}

