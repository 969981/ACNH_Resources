
undefined8 FUN_001d39c0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong __n;
  
  if (0x33 < param_4) {
    return 0;
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  __n = (ulong)param_4;
  uVar2 = uVar4 + __n;
  if (*(ulong *)(*(long *)(param_2 + 0x10) + 0x18) < uVar2) {
    return 0;
  }
  if (uVar4 < uVar2) {
    uVar9 = uVar4;
    do {
      lVar10 = *(long *)(param_2 + 0x10);
      uVar11 = *(ulong *)(lVar10 + 0x18);
      if (uVar11 == uVar9) {
LAB_001d3bf8:
        *(undefined1 *)(param_2 + 8) = 1;
        return 0;
      }
      lVar10 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x28);
      uVar1 = uVar9 + 1;
      uVar6 = *(undefined1 *)(lVar10 + uVar9);
      *(ulong *)(param_2 + 0x18) = uVar1;
      if (uVar11 == uVar1) goto LAB_001d3bf8;
      bVar7 = *(byte *)(lVar10 + uVar1);
      uVar1 = uVar9 + 2;
      *(ulong *)(param_2 + 0x18) = uVar1;
      uVar3 = uVar1 + bVar7;
      if (uVar2 < uVar3) {
        return 0;
      }
      switch(uVar6) {
      case 0:
        if (bVar7 != 4) {
          return 0;
        }
        if (uVar11 - uVar1 < 4) goto LAB_001d3bf8;
        uVar5 = *(undefined4 *)(lVar10 + uVar1);
        uVar9 = uVar9 + 6;
        *(ulong *)(param_2 + 0x18) = uVar9;
        *(undefined4 *)(param_3 + 0xd0) = uVar5;
        break;
      case 1:
        if (bVar7 != 0x10) {
          return 0;
        }
        uVar9 = FUN_00197494(param_2,param_3 + 0x88,0x10);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        uVar9 = *(ulong *)(param_2 + 0x18);
        *(undefined8 *)(param_3 + 0x98) = 0x10;
        break;
      case 2:
        if (bVar7 != 1) {
          return 0;
        }
        if (uVar11 == uVar1) goto LAB_001d3bf8;
        uVar6 = *(undefined1 *)(lVar10 + uVar1);
        uVar9 = uVar9 + 3;
        *(ulong *)(param_2 + 0x18) = uVar9;
        *(undefined1 *)(param_3 + 0xa0) = uVar6;
        break;
      case 3:
        if (bVar7 != 2) {
          return 0;
        }
        if (uVar11 - uVar1 < 2) goto LAB_001d3bf8;
        uVar8 = *(undefined2 *)(lVar10 + uVar1);
        uVar9 = uVar9 + 4;
        *(ulong *)(param_2 + 0x18) = uVar9;
        *(undefined2 *)(param_3 + 0x80) = uVar8;
        break;
      case 4:
        if (bVar7 != 1) {
          return 0;
        }
        if (uVar11 == uVar1) goto LAB_001d3bf8;
        uVar6 = *(undefined1 *)(lVar10 + uVar1);
        uVar9 = uVar9 + 3;
        *(ulong *)(param_2 + 0x18) = uVar9;
        *(undefined1 *)(param_3 + 0xa3) = uVar6;
        break;
      case 5:
        if (bVar7 != 1) {
          return 0;
        }
        if (uVar11 == uVar1) goto LAB_001d3bf8;
        bVar7 = *(byte *)(lVar10 + uVar1);
        uVar9 = uVar9 + 3;
        *(ulong *)(param_2 + 0x18) = uVar9;
        *(uint *)(param_3 + 0xa8) = (uint)bVar7;
        break;
      default:
        if (uVar11 < uVar3) {
          return 0;
        }
        *(ulong *)(param_2 + 0x18) = uVar3;
        uVar9 = uVar3;
      }
    } while (uVar9 < uVar2);
  }
  *(undefined8 *)(param_3 + 0xf0) = 0;
  *(undefined8 *)(param_3 + 0xe0) = 0;
  *(undefined1 *)(param_3 + 0x130) = 0;
  if (param_4 != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    *(ulong *)(param_3 + 0xf0) = __n;
    memcpy((void *)(param_3 + 0xf8),
           (void *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x28) + uVar4),__n);
  }
  return 1;
}

