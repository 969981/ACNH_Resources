
void FUN_00a7f2c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04bb46b0;
  uVar6 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if ((lVar2 != 0) && (lVar2 = FUN_026eec4c(lVar2,uVar6), lVar2 != 0)) {
      lVar5 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar5 = *(long *)(*(long *)puVar1 + 0x20);
      }
      uVar8 = 0;
      lVar2 = param_1 + (ulong)uVar6 * 0x100;
      if (7 < uVar6) {
        lVar2 = param_1;
      }
      do {
        if (*(long **)(lVar5 + 0x2a418) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          puVar3 = (undefined8 *)**(long **)(lVar5 + 0x2a418);
          uVar4 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            uVar4 = (**(code **)*puVar3)();
          }
        }
        uVar7 = *(uint *)(*(long *)(lVar5 + 0x2a400) + *(long *)(lVar5 + 0x2a3f8) +
                         (uVar8 >> 5 & 0x7ffffff) * 4);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0x2a418) != 0)) &&
           (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x2a418) + 8), puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)();
        }
        *(bool *)(lVar2 + uVar8) = (uVar7 & 1 << (ulong)((uint)uVar8 & 0x1f)) != 0;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x100);
    }
    uVar7 = 0xffffffff;
    if (uVar6 != 7) {
      uVar7 = uVar6 + 1;
    }
    if (7 < uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = uVar7;
  } while (uVar7 != 0xffffffff);
  return;
}

