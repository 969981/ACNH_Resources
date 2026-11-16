
undefined1 * FUN_02844564(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar6 = FUN_0265b400(param_1,1);
  puVar5 = PTR_DAT_04bb46b0;
  if ((uVar6 < 7) && (lVar8 = *(long *)PTR_DAT_04bb46b0, lVar8 != 0)) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar8 != 0) {
        lVar8 = lVar8 + 0x70;
LAB_028445ec:
        switch(uVar6) {
        case 0:
          lVar8 = lVar8 + 0xe6c48;
          break;
        case 1:
          lVar8 = lVar8 + 0xe6cf0;
          break;
        case 2:
          lVar8 = lVar8 + 0xe6d60;
          break;
        case 3:
          lVar8 = lVar8 + 0xe6dd0;
          break;
        case 4:
          lVar8 = lVar8 + 0xe6e40;
          break;
        case 5:
          lVar8 = lVar8 + 0xe6eb0;
          break;
        case 6:
          lVar8 = lVar8 + 0xe6f20;
          break;
        default:
          goto switchD_0284460c_default;
        }
        if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
          cVar3 = *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x2f);
        }
        else {
          uVar7 = (**(code **)*puVar9)();
          cVar3 = *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x2f);
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0))
          {
            (**(code **)*puVar9)();
          }
        }
        if (cVar3 == '\x02') {
          if (uVar6 < 7) {
            return (&PTR_FUN_04a91e18)[(int)uVar6];
          }
          return (undefined1 *)0x0;
        }
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0)) goto LAB_028445ec;
  }
switchD_0284460c_default:
  lVar8 = *(long *)puVar5;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar8 == 0) goto code_r0x028447c0;
      lVar8 = lVar8 + 0x70;
    }
    else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
            (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 == 0))
    goto code_r0x028447c0;
    if (*(long **)(lVar8 + 0xe6d50) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0xe6d50);
      uVar7 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar7 = (**(code **)*puVar9)();
      }
    }
    lVar1 = *(long *)(lVar8 + 0xe6d38) + *(long *)(lVar8 + 0xe6d30);
    uVar4 = *(ushort *)(lVar1 + 0x3e);
    if (((uVar4 >> 8 & 1) == 0) && ((int)*(char *)(lVar1 + 0x3c) == (int)param_1)) {
      puVar2 = (undefined1 *)0x2845158;
      if ((uVar4 & 1) != 0) {
        puVar2 = (undefined1 *)0x2844d88;
      }
      if ((uVar7 & 1) == 0) {
        return puVar2;
      }
      if (*(long *)(lVar8 + 0xe6d50) == 0) {
        return puVar2;
      }
      puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0xe6d50) + 8);
      if (puVar9 == (undefined8 *)0x0) {
        return puVar2;
      }
      (**(code **)*puVar9)();
      return puVar2;
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0xe6d50) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0xe6d50) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
code_r0x028447c0:
  return &LAB_028448fc;
}

