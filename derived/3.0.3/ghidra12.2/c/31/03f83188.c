
void FUN_03f83188(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar4;
  undefined1 uVar3;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  if (((uVar10 ^ 0xffffffff) & 0xfff) == 0) {
    FUN_03f4d1a0(param_1,param_2 >> 0x10 & 0xffffffff,param_2 & 0xffffffff,param_3);
    if (((uVar10 ^ 0xffffffff) & 0xffff) == 0) {
      uVar5 = (ulong)((int)(param_2 >> 0x10) + 1);
      iVar6 = 0;
    }
    else {
      iVar6 = uVar10 + 1;
      uVar5 = param_2 >> 0x10 & 0xffffffff;
    }
    FUN_03f4d1a0(param_1,uVar5,iVar6,param_3 >> 8 & 0xff);
    return;
  }
  uVar7 = param_2 >> 0x10 & 0xff;
  uVar5 = param_2 >> 0xc & 0xf;
  if (*(char *)(param_1 + 0x34e0f5) == '\0') {
    *(int *)(param_1 + 0x34e0bc) =
         *(int *)(param_1 + 0x34e0bc) +
         *(short *)(param_1 + uVar7 * 0x20 + uVar5 * 2 + 0x3861b8) * 2;
  }
  uVar5 = *(ulong *)(param_1 + uVar7 * 0x80 + uVar5 * 8 + 0x37e1b8);
  if (99 < uVar5) {
    *(short *)(uVar5 + (param_2 & 0xfff)) = (short)param_3;
    return;
  }
  if (0xc < uVar5 - 1) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x36e190);
  uVar3 = (undefined1)param_3;
  uVar4 = (undefined1)(param_3 >> 8);
  switch(uVar5) {
  case 1:
    if (*(char *)(param_1 + 0x34710) != '\0') {
      if ((uVar10 & 0xff00) == 0x2200) {
        FUN_03f8a3c0(param_1 + 0x20660,param_2 & 0xffffffff,param_3);
        FUN_03f8a3c0(param_1 + 0x20660,uVar10 + 1,param_3 >> 8 & 0xff);
        return;
      }
      if ((uVar10 & 0xff00) != 0x2100) {
        return;
      }
    }
    FUN_03fc222c(param_1 + 0x34780,param_2 & 0xffffffff,param_3);
    FUN_03fc222c(param_1 + 0x34780,uVar10 + 1,param_3 >> 8 & 0xff);
    return;
  case 2:
    FUN_03fe86d0(param_1,param_2 & 0xffffffff,param_3);
    FUN_03fe86d0(param_1,uVar10 + 1,param_3 >> 8 & 0xff);
    return;
  case 3:
    if (*(uint *)(param_1 + 0x36e198) == 0) {
      return;
    }
    uVar5 = param_2 & 0x7fff | uVar7 << 0xf;
    *(undefined1 *)(*plVar1 + (*(uint *)(param_1 + 0x36e198) & uVar5)) = uVar3;
    *(undefined1 *)(*plVar1 + ((ulong)*(uint *)(param_1 + 0x36e198) & uVar5 + 1)) = uVar4;
    break;
  case 4:
    uVar2 = *(uint *)(param_1 + 0x36e198);
    if (uVar2 == 0) {
      return;
    }
    lVar8 = *plVar1;
    uVar9 = (uVar10 & 0x7fff) + (uVar10 >> 0x10 & 0xf) * 0x2000;
    goto LAB_03f8346c;
  case 5:
    FUN_03f5408c(param_1 + 0x34d9d0,param_2 & 0xffffffff,param_3);
    FUN_03f5408c(param_1 + 0x34d9d0,uVar10 + 1,param_3 >> 8 & 0xff);
    return;
  case 6:
    FUN_03f4e540(param_1 + 0x34b900,param_2 & 0xffffffff,param_3);
    FUN_03f4e540(param_1 + 0x34b900,uVar10 + 1,param_3 >> 8 & 0xff);
    return;
  case 7:
    if ((uVar10 & 0xf800) == 0x3000) {
      *(undefined1 *)(*(long *)(param_1 + 0x36e1a0) + (param_2 & 0x7ff)) = uVar3;
      *(undefined1 *)(*(long *)(param_1 + 0x36e1a0) + ((ulong)(uVar10 + 1) & 0x7ff)) = uVar4;
      return;
    }
    return;
  case 8:
    uVar5 = param_2 & 0x3ffff;
    *(undefined1 *)(*plVar1 + (*(uint *)(param_1 + 0x36e198) & uVar5)) = uVar3;
    goto LAB_03f834b4;
  case 9:
    goto switchD_03f83284_caseD_9;
  case 10:
    *(undefined1 *)(*(long *)(param_1 + 0x346b0) + (param_2 & 0x1fff)) = uVar3;
    *(undefined1 *)(*(long *)(param_1 + 0x346b0) + ((ulong)(uVar10 + 1) & 0x1fff)) = uVar4;
    break;
  case 0xb:
    uVar2 = *(uint *)(param_1 + 0x36e198);
    if (uVar2 == 0) {
      return;
    }
    lVar8 = *plVar1;
    uVar9 = uVar10 & 0x7fff;
LAB_03f8346c:
    *(undefined1 *)(lVar8 + (ulong)(uVar2 & uVar9 - 0x6000)) = uVar3;
    *(undefined1 *)(*plVar1 + (ulong)(*(uint *)(param_1 + 0x36e198) & uVar9 - 0x5fff)) = uVar4;
    break;
  case 0xc:
    if (*(uint *)(param_1 + 0x36e198) == 0) {
      return;
    }
    uVar5 = param_2 & 0xfffff;
    *(undefined1 *)(*plVar1 + (*(uint *)(param_1 + 0x36e198) & uVar5)) = uVar3;
LAB_03f834b4:
    *(undefined1 *)(*plVar1 + ((ulong)*(uint *)(param_1 + 0x36e198) & uVar5 + 1)) = uVar4;
    break;
  case 0xd:
    FUN_03f57a70(param_1 + 0x34dc48,param_2 & 0xffffffff,param_3);
    FUN_03f57a70(param_1 + 0x34dc48,uVar10 + 1,param_3 >> 8 & 0xff);
    return;
  }
  *(undefined1 *)(param_1 + 0x3761a8) = 1;
  if ((uVar10 & 0xffff) < (uint)*(ushort *)(param_1 + 0x3761aa)) {
    *(short *)(param_1 + 0x3761aa) = (short)param_2;
  }
  if ((uint)*(ushort *)(param_1 + 0x3761ac) < (uVar10 & 0xffff)) {
    *(short *)(param_1 + 0x3761ac) = (short)param_2;
  }
  *(short *)(param_1 + 0x3761ae) = *(short *)(param_1 + 0x3761ae) + 2;
switchD_03f83284_caseD_9:
  return;
}

