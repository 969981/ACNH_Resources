
void FUN_03f4d1a0(long param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = (uint)param_3;
  uVar5 = (ulong)(uVar4 >> 0xc & 0xf);
  if (*(char *)(param_1 + 0x34e0f5) == '\0') {
    *(int *)(param_1 + 0x34e0bc) =
         *(int *)(param_1 + 0x34e0bc) +
         (int)*(short *)(param_1 + (param_2 & 0xff) * 0x20 + uVar5 * 2 + 0x3861b8);
  }
  uVar5 = *(ulong *)(param_1 + (param_2 & 0xff) * 0x80 + uVar5 * 8 + 0x37e1b8);
  uVar3 = (undefined1)param_4;
  if (99 < uVar5) {
    *(undefined1 *)(uVar5 + (param_3 & 0xfff)) = uVar3;
    return;
  }
  if (0xc < uVar5 - 1) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x36e190);
  switch(uVar5) {
  case 1:
    if (*(char *)(param_1 + 0x34710) != '\0') {
      if ((uVar4 & 0xff00) == 0x2200) {
        FUN_03f8a3c0(param_1 + 0x20660,param_3 & 0xffffffff,param_4);
        return;
      }
      if ((uVar4 & 0xff00) != 0x2100) {
        return;
      }
    }
    FUN_03fc222c(param_1 + 0x34780,param_3 & 0xffffffff,param_4);
    return;
  case 2:
    FUN_03fe86d0(param_1,param_3 & 0xffffffff,param_4);
    return;
  case 3:
    uVar5 = (ulong)*(uint *)(param_1 + 0x36e198);
    if (*(uint *)(param_1 + 0x36e198) == 0) {
      return;
    }
    lVar6 = *plVar1;
    uVar8 = param_3 & 0x7fff | (param_2 & 0xff) << 0xf;
    break;
  case 4:
    uVar2 = *(uint *)(param_1 + 0x36e198);
    if (uVar2 == 0) {
      return;
    }
    lVar6 = *plVar1;
    uVar7 = (uVar4 & 0x7fff) + ((uint)param_2 & 0xf) * 0x2000;
    goto LAB_03f4d33c;
  case 5:
    FUN_03f5408c(param_1 + 0x34d9d0,param_3 & 0xffffffff,param_4);
    return;
  case 6:
    FUN_03f4e540(param_1 + 0x34b900,param_3 & 0xffffffff,param_4);
    return;
  case 7:
    if ((uVar4 & 0xf800) == 0x3000) {
      *(undefined1 *)(*(long *)(param_1 + 0x36e1a0) + (param_3 & 0x7ff)) = uVar3;
      return;
    }
    return;
  case 8:
    *(undefined1 *)
     (*plVar1 + ((ulong)*(uint *)(param_1 + 0x36e198) & (param_3 & 0xffff | (param_2 & 3) << 0x10)))
         = uVar3;
    goto LAB_03f4d364;
  case 9:
    goto switchD_03f4d23c_caseD_9;
  case 10:
    lVar6 = *(long *)(param_1 + 0x346b0);
    uVar5 = param_3 & 0x1fff;
    goto LAB_03f4d360;
  case 0xb:
    uVar2 = *(uint *)(param_1 + 0x36e198);
    if (uVar2 == 0) {
      return;
    }
    lVar6 = *plVar1;
    uVar7 = uVar4 & 0x7fff;
LAB_03f4d33c:
    uVar5 = (ulong)uVar2;
    uVar8 = (ulong)(uVar7 - 0x6000);
    break;
  case 0xc:
    uVar5 = (ulong)*(uint *)(param_1 + 0x36e198);
    if (*(uint *)(param_1 + 0x36e198) == 0) {
      return;
    }
    lVar6 = *plVar1;
    uVar8 = param_3 & 0xffff | (param_2 & 0xf) << 0x10;
    break;
  case 0xd:
    FUN_03f57a70(param_1 + 0x34dc48,param_3 & 0xffffffff,param_4);
    return;
  }
  uVar5 = uVar5 & uVar8;
LAB_03f4d360:
  *(undefined1 *)(lVar6 + uVar5) = uVar3;
LAB_03f4d364:
  *(undefined1 *)(param_1 + 0x3761a8) = 1;
  if ((uVar4 & 0xffff) < (uint)*(ushort *)(param_1 + 0x3761aa)) {
    *(short *)(param_1 + 0x3761aa) = (short)param_3;
  }
  if ((uint)*(ushort *)(param_1 + 0x3761ac) < (uVar4 & 0xffff)) {
    *(short *)(param_1 + 0x3761ac) = (short)param_3;
  }
  *(short *)(param_1 + 0x3761ae) = *(short *)(param_1 + 0x3761ae) + 1;
switchD_03f4d23c_caseD_9:
  return;
}

