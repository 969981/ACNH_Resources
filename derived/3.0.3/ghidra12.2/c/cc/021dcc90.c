
uint FUN_021dcc90(uint *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  
  uVar3 = *param_1;
  if (9 < uVar3) {
    return 0;
  }
  if ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] == '\0') {
    return 0;
  }
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    return (uint)(*(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar3 * 0x28 + 0xe21) >> 2);
  }
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar6 != 0) {
        lVar6 = lVar6 + 0x70;
LAB_021dcd64:
        switch((ulong)BYTE_04179c03 * 4 + 0x21dcd88) {
        case 0x21dcd88:
          lVar6 = lVar6 + 0xe6c48;
          break;
        case 0x21dcd94:
          lVar6 = lVar6 + 0xe6cf0;
          break;
        case 0x21dcda0:
          lVar6 = lVar6 + 0xe6d60;
          break;
        case 0x21dcdac:
          lVar6 = lVar6 + 0xe6dd0;
          break;
        case 0x21dcdb8:
          lVar6 = lVar6 + 0xe6e40;
          break;
        case 0x21dcdc4:
          lVar6 = lVar6 + 0xe6eb0;
          break;
        case 0x21dcdd0:
          lVar6 = lVar6 + 0xe6f20;
        }
        if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar6 + 0x28);
          uVar7 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar9)();
          }
        }
        lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
        if ((*param_1 == (int)*(char *)(lVar1 + 0x2c)) && ((int)*(char *)(lVar1 + 0x2f) - 1U < 2)) {
          if (((uVar7 & 1) == 0) ||
             ((*(long *)(lVar6 + 0x28) == 0 ||
              (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar9 == (undefined8 *)0x0))
             )) {
            return 0x16;
          }
          (**(code **)*puVar9)();
          return 0x16;
        }
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
      }
    }
    else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
            (lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar6 != 0)) goto LAB_021dcd64;
  }
  uVar4 = *param_1;
  uVar8 = (uint)DAT_04c487d4;
  if (uVar4 == 0xffffffff) {
    if (uVar8 == 0xffffffff) goto LAB_021dcf58;
  }
  else {
    lVar6 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar4 * 0x15;
    if (0x6c < uVar4) {
      lVar6 = *(long *)PTR_DAT_04bb4760;
    }
    uVar4 = (uint)*(byte *)(lVar6 + 4) | (*(byte *)(lVar6 + 5) & 3) << 8;
    if (0x1ff < uVar4) {
      uVar4 = uVar4 | 0xfffffc00;
    }
    if (uVar8 != uVar4 || uVar8 == 0xffffffff) goto LAB_021dcf58;
  }
  puVar10 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < uVar8) {
    puVar10 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar10 >> 6 & 1) != 0) {
    return 5;
  }
  puVar10 = (uint *)(PTR_DAT_04bc39f8 + ((long)DAT_04c487d4 & 0xffffffffU) * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar10 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar10 >> 7 & 1) != 0) && (uVar7 = FUN_02917058(), (uVar7 & 1) == 0)) {
    return 5;
  }
LAB_021dcf58:
  if ((int)(&DAT_053fe898)[(ulong)uVar3 * 0x2e8] < 1) {
    return 0;
  }
  uVar7 = (ulong)uVar3;
  iVar5 = (&DAT_053fe898)[(ulong)uVar3 * 0x2e8] + (&DAT_053fe894)[uVar7 * 0x2e8] + -1;
  iVar2 = 0;
  if ((int)(&DAT_053fe890)[uVar7 * 0x2e8] <= iVar5) {
    iVar2 = (&DAT_053fe890)[uVar7 * 0x2e8];
  }
  puVar10 = (uint *)((&DAT_053fe888)[uVar7 * 0x174] + (long)(iVar5 - iVar2) * 0x14);
  if ((char)puVar10[4] == '\0') {
    return *puVar10;
  }
  return 0;
}

