
undefined1  [16] FUN_026837a0(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if (DAT_05574040 != 0) {
    puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = lVar5 + 0x70;
      }
    }
    else if ((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    }
    if (DAT_05574040 != 0) {
      lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
      lVar10 = 0;
      lVar5 = lVar6 + 0x276cb0;
      lVar12 = 0;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      if ((lVar7 == 0) || (lVar6 == 0)) goto LAB_02683894;
      if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar2 = 1;
        plVar9 = *(long **)(lVar5 + 0x28);
        if (plVar9 != (long *)0x0) goto LAB_026838c0;
LAB_026838dc:
        uVar3 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar8)();
        uVar2 = uVar2 ^ 1;
        plVar9 = *(long **)(lVar5 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_026838dc;
LAB_026838c0:
        if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_026838dc;
        uVar3 = (*(code *)**(undefined8 **)*plVar9)();
        uVar3 = uVar3 ^ 1;
      }
      uVar11 = (ulong)*(byte *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x3c9bf8);
      if (uVar11 < 8) {
        if ((*(long **)(lVar7 + 0xe7140) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar7 + 0xe7140), puVar8 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar8)();
          uVar4 = uVar4 ^ 1;
        }
        plVar9 = (long *)(*(long *)(lVar7 + 0xe7128) + *(long *)(lVar7 + 0xe7120) + uVar11 * 0x48);
        if (*plVar9 == 0 && plVar9[1] == 0) {
          lVar10 = 0;
          lVar12 = 0;
        }
        else {
          plVar1 = &DAT_0417bad0;
          if (*plVar9 != 0 || plVar9[1] != 0) {
            plVar1 = plVar9;
          }
          lVar12 = *plVar1;
          lVar10 = plVar1[1];
        }
        if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0xe7140) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xe7140) + 8), puVar8 != (undefined8 *)0x0))
        {
          (**(code **)*puVar8)();
        }
      }
      else {
        lVar10 = 0;
        lVar12 = 0;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
      goto LAB_02683894;
    }
  }
  lVar10 = 0;
  lVar12 = 0;
LAB_02683894:
  auVar13._8_8_ = lVar10;
  auVar13._0_8_ = lVar12;
  return auVar13;
}

