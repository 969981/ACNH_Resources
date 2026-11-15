
undefined8 FUN_021d83e0(ushort *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort local_24;
  undefined1 local_22;
  
  uVar8 = (ulong)(byte)*param_1;
  if (0x22 < uVar8) {
    return 0;
  }
  if ((byte)PTR_DAT_04bc27f0[uVar8] < *(byte *)((long)param_1 + 1)) {
    return 0;
  }
  if (((uint)(&DAT_053e6eb8)[uVar8] >> (ulong)(*(byte *)((long)param_1 + 1) & 0x1f) & 1) == 0) {
    return 0;
  }
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar6 + 0x70;
      }
      goto LAB_021d848c;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar7 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_021d848c;
    }
  }
  lVar7 = 0;
LAB_021d848c:
  if ((*(long **)(lVar7 + 0x1c2980) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar7 + 0x1c2980), puVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar9)();
    uVar5 = uVar5 ^ 1;
  }
  lVar6 = *(long *)(lVar7 + 0x1c2960);
  lVar1 = *(long *)(lVar7 + 0x1c2968);
  uVar8 = FUN_027c5f10();
  if ((uVar8 & 1) == 0) {
    local_24 = 0x23;
    uVar2 = *(ushort *)(lVar1 + lVar6);
    local_22 = 8;
    if ((byte)(uVar2 >> 8) < 0x23) {
      FUN_020fd218(&local_24,uVar2 >> 8,uVar2 & 0xff);
    }
  }
  else {
    local_24 = (ushort)DAT_053e6f44;
    local_22 = DAT_053e6f44._2_1_;
  }
  uVar4 = local_24 >> 8;
  uVar3 = local_24 << 8;
  uVar2 = *param_1;
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x1c2980) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1c2980) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if ((ushort)(uVar4 | uVar3) == (ushort)(uVar2 >> 8 | uVar2 << 8)) {
    return 1;
  }
  return 0;
}

