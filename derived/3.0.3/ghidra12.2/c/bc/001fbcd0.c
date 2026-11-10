
long FUN_001fbcd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [12];
  
  puVar8 = *(undefined8 **)(param_1 + 0x98);
  if (puVar8 == *(undefined8 **)(param_1 + 0xa0)) {
    plVar1 = (long *)(param_1 + 0x90);
    uVar7 = (long)puVar8 - *plVar1;
    uVar2 = ((long)uVar7 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      auVar10 = FUN_001f4808(plVar1);
      return *(long *)(*(long *)(auVar10._0_8_ + 0x90) + (ulong)auVar10._8_4_ * 8);
    }
    uVar3 = (long)uVar7 >> 2;
    if ((ulong)((long)uVar7 >> 2) <= uVar2) {
      uVar3 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_00187df4(uVar3 << 3);
    }
    puVar8 = (undefined8 *)(lVar5 + ((long)uVar7 >> 3) * 8);
    puVar9 = puVar8 + 1;
    *puVar8 = param_2;
    puVar4 = *(undefined8 **)(param_1 + 0x90);
    puVar6 = *(undefined8 **)(param_1 + 0x98);
    if (puVar6 != puVar4) {
      do {
        puVar6 = puVar6 + -1;
        puVar8 = puVar8 + -1;
        *puVar8 = *puVar6;
      } while (puVar6 != puVar4);
      puVar6 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(param_1 + 0x90) = puVar8;
    *(undefined8 **)(param_1 + 0x98) = puVar9;
    *(ulong *)(param_1 + 0xa0) = lVar5 + uVar3 * 8;
    param_1 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = FUN_00187e4c();
      return lVar5;
    }
  }
  else {
    *puVar8 = param_2;
    *(undefined8 **)(param_1 + 0x98) = puVar8 + 1;
  }
  return param_1;
}

